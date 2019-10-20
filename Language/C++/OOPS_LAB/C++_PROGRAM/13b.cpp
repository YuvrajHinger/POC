#include<iostream>
#include<conio.h>
using namespace std;
class test
{ public:
  int i;
  test(int a)
  { i=a;
    cout<<"CONSTRUCTING"<<i<<endl;
  }
  ~test()
  { cout<<"DESTRUCTING"<<i<<endl; 
    getch();
  }
};
void f(test ob1);
int main()
{ test ob(1); //constructing 1
  f(ob); 
  cout<<"MAIN"<<endl;
  cout<<ob.i<<endl;
  getch();
}
void f(test ob1)
{ ob1=2;  //constructing 2        
  cout<<ob1.i<<endl;
  getch();
}
