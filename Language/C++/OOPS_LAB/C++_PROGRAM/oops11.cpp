#include<iostream>
#include<conio.h>
using namespace std;
class test;
class min
{ public:
  int comp(test x);
  void d();
};
class test
{ int a,b;
  public: 
  test(int i,int j)
  { a=i; b=j; }
  friend min::comp(test x);
};
int min::comp(test x)  
{ return x.a<x.b?x.a:x.b; }
int main()
{ class test ob(10,5);
  class min m;
  cout<<m.comp(ob);
  getch();
  return 0;
}
