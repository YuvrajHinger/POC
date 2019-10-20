#include<iostream>
#include<conio.h>
using namespace std;
class array
{ int *p;
  public:
  array()
  { p=NULL; }
  array(int s)
  { p=new int[s]; 
    for(int i=0;i<s;i++)
    { p[i]=i; cout<<p[i]; }
  }
  array(array &x,int y)
  { p=new int[y];
   for(int i=0;i<y;i++)
   { p[i]=x.p[i]; cout<<p[i]; }
  } 
};

int main()
{ array a1(10);
  array b(a1,10);
  getch();
  return 0;
}       
