#include<iostream>
#include<conio.h>
using namespace std;
class index
{
     int i;
     public:
    index() { i=0; } // ob i=0
    index(int x) { i=x;} // ob1 i=2  ob2 i=3
    int get() { return i; }
    index operator+(index x)
    { int j; j=i+x.i; return index(j); }  // x=ob2  x.i=3 i=2  j=5
};
int main()
{ index ob,ob1(2),ob2(3);
  ob=ob1+ob2; 
  cout<<ob.get();
  getch();
  return 0;
} 
