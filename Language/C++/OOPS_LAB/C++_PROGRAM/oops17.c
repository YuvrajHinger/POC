#include<iostream>
#include<conio.h>
using namespace std;
class array
{ int i;
  public:
  array(int x)
  { i=x; }
  add(array &ob)
  { i=ob.i+i; }
};
int main()
{ array ob1(3);
  array ob2(4);
  ob1.add(ob2);
  getch();
  return 0;
}       
