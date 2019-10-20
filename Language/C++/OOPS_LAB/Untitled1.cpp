#include<iostream>
#include<conio.h>
using namespace std;
class A
{ char str[50];
  public:
  A()
  { strcpy(str," "); }
  A(char *s)
  { strcpy(str,s); }
  void show()
  { cout<<str<<endl; }
  A operator+(A s) //s.str=google temp=str1=ok   
  { A temp=str; 
    strcat(temp.str,s.str); 
    return temp; 
  }
  friend ostream & operator<<(ostream &out,A s)
  { cout<<s.str<<endl; }
};
int main()
{ A str1("OK"),str2("GOOGLE"),str3;
  str3=str1+str2;
  str1.show(); str2.show(); 
  cout<<str3;
  getch();
}
