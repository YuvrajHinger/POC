#include<iostream>
#include<conio.h>
using namespace std;
class array
{ int i;
  public:
  array(int x)
  { i=x; }
  void add(array &ob2)
  { this->i=this->i+ob2.i; cout<<this->i; }
};
int main()
{ array ob1(3);
  array ob2(4);
  ob1.add(ob2);
  getch();
  return 0;
}       
