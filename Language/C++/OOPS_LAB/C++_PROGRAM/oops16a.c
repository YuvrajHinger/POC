#include<iostream>
#include<conio.h>
using namespace std;
class array
{ int *p;
  public:
  array()
  { p=NULL; }
  array(int s)
  { p=new int[s]; }
  for(int i=0;i<s;i++)
  { p[i]=i; }
};
int main()
{ array a1(10);
  array b;
  b=a1;
  return 0;
}       
