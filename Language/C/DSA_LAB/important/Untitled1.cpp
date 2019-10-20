#include<iostream>
#include<conio.h>
using namespace std;
class TArrayProxy;

// The actual class which we will access using a proxy.
class TArray
{
public:
    TArray();
    ~TArray ();

    TArrayProxy operator [] (int iIndex);
    int operator = (TArrayProxy &j);
    void Dump (void);

    char    m_TarrayName[4];     // this is the unique name of a particular object.

    static char TarrayName[4];   // This is the global used to create unique object names

private:
    friend class TArrayProxy;    // allow the proxy class access to our data.
    int iArray[10];              // a simple integer array for our data store
};

// The proxy class which is used to access the actual class.
class TArrayProxy
{
public:
    TArrayProxy(TArray *p = 0, int i=0);
    ~TArrayProxy();

    TArrayProxy & operator = (int i);
    TArrayProxy & operator += (int i);
    TArrayProxy & operator = (TArrayProxy &src);
    operator int ();

    int     iIndex;
    char    m_TarrayproxyName[4];        // this is the unique name of a particular object.

    static char TarrayproxyName[4];      // This is the global used to create unique object names

private:
    TArray *pArray;                      // pointer to the actual object for which we are a proxy.
};

// initialize the object names so as to generate unique object names.
char TArray::TarrayName[4] = {" AA"};
char TArrayProxy::TarrayproxyName[4] = {" PA"};

// Construct a proxy object for the actual object along with which particular
// element of the actual object data store that this proxy will represent.
TArrayProxy::TArrayProxy(TArray *p /* = 0 */, int i /* = 0 */)
{
    if (p && i > 0) {
        pArray = p;
        iIndex = i;
        strcpy (m_TarrayproxyName, TarrayproxyName);
        TarrayproxyName[2]++;
        std::cout << "    Create TArrayProxy " << m_TarrayproxyName << " iIndex = " << iIndex  << std::endl;
    } else {
        throw "TArrayProxy bad p";
    }
}

// The destructor is here just so that we can log when it is hit.
TArrayProxy::~TArrayProxy()
{
    std::cout << "      Destroy TArrayProxy " << m_TarrayproxyName << std::endl;
}

// assign an integer value to a data store element by using the proxy object
// for the particular element of the data store.
TArrayProxy & TArrayProxy::operator = (int i)
{
    pArray->iArray[iIndex] = i;
    std::cout << "      TArrayProxy assign = i " << i << " to " << pArray->m_TarrayName << " using proxy " << m_TarrayproxyName << " iIndex " << iIndex << std::endl;
    return *this;
}

TArrayProxy & TArrayProxy::operator += (int i)
{
    pArray->iArray[iIndex] += i;
    std::cout << "      TArrayProxy add assign += i " << i << " to " << pArray->m_TarrayName << " using proxy " << m_TarrayproxyName << " iIndex " << iIndex << std::endl;
    return *this;
}

// assign an integer value that is specified by a proxy object to a proxy object for a different element.
TArrayProxy & TArrayProxy::operator = (TArrayProxy &src)
{
    pArray->iArray[iIndex] = src.pArray->iArray[src.iIndex];
    std::cout << "      TArrayProxy assign = src " << src.m_TarrayproxyName << " iIndex " << src.iIndex << " to " << m_TarrayproxyName << " iIndex "<< iIndex << " from"  << std::endl;
    return *this;
}

TArrayProxy::operator int ()
{
    std::cout << "      TArrayProxy operator int " << m_TarrayproxyName << " iIndex " << iIndex << " value of " << pArray->iArray[iIndex] << std::endl;
    return pArray->iArray[iIndex];
}



TArray::TArray()
{
    strcpy (m_TarrayName, TarrayName);
    TarrayName[2]++;
    std::cout << "  Create TArray = " << m_TarrayName << std::endl;
    for (int i = 0; i < sizeof(iArray)/sizeof(iArray[0]); i++) { iArray[i] = i; }
}

// The destructor is here just so that we can log when it is hit.
TArray::~TArray()
{
    std::cout << "  Destroy TArray " << m_TarrayName << std::endl;
}

TArrayProxy TArray::operator [] (int iIndex)
{
    std::cout << "  TArray operator [" << iIndex << "] " << m_TarrayName << std::endl;
    if (iIndex > 0 && iIndex <= sizeof(iArray)/sizeof(iArray[0])) {
        // create a proxy object for this particular data store element
        return TArrayProxy(this, iIndex);
    }
    else
        throw "Out of range";
}

int TArray::operator = (TArrayProxy &j)
{
    std::cout << "  TArray operator = " << m_TarrayName << " from" << j.m_TarrayproxyName << " index " << j.iIndex << std::endl;
    return j.iIndex;
}

void TArray::Dump (void)
{
    std::cout << std::endl << "Dump of " << m_TarrayName << std::endl;
    for (int i = 0; i < sizeof(iArray)/sizeof(iArray[0]); i++) {
        std::cout << "  i = " << i << "  value = " << iArray [i] << std::endl;
    }
}

// -----------------    Main test harness follows  ----------------
// we will output the line of code being hit followed by the log of object actions.

int _tmain(int argc, _TCHAR* argv[])
{
    TArray myObj;

    std::cout << std::endl  << "int ik = myObj[3];" << std::endl;
    int ik = myObj[3];
    std::cout << std::endl << "myObj[6] = myObj[4] = 40;" << std::endl;
    myObj[6] = myObj[4] = 40;
    std::cout << std::endl << "myObj[5] = myObj[5];" << std::endl;
    myObj[5] = myObj[5];
    std::cout << std::endl << "myObj[2] = 32;" << std::endl;
    myObj[2] = 32;
    std::cout << std::endl << "myObj[8] += 20;" << std::endl;
    myObj[8] += 20;
    myObj.Dump ();
    return 0;
}























/*#include<iostream>
#include<conio.h>
using namespace std;
struct aproxy
{ aproxy(int &r):ptr(&r)
  {}
  void operator=(int n)
  { *ptr=n; }
  int *ptr;
};
struct array
{ int a[10];
  aproxy operator[](int i)
  { return aproxy(a[i]); }
};
int  main()
{  array a;
   a[0]=1;
   getch();
}*/
