#include<iostream>
#include<conio.h>
using namespace std;
class shape
{ public:
  virtual void  area()
    { cout<<"base_area"; }
};
class circle:public shape
{ public:
  void area()
  { int r; 
    float ar;
    cout<<"r"; cin>>r;
    ar=3.14*r*r;
    cout<<"area="<<ar<<endl;
  }
};
class rectangle:public shape
{ public:
  void area()
  { int l,b,ar; 
    cout<<"l,b";
    cin>>l>>b;
    ar=l*b;
    cout<<"area="<<ar;
  }
};
class square:public shape
{ public:
  void area()
  { int s,ar;
    cout<<"S"; cin>>s;
    ar=s*s;
    cout<<"area="<<ar;
  }
};
int main()
{ shape *p;
  rectangle r;
  circle c;
  square s;
  p=&c;
  p->area();
  p=&r;
  p->area();
  getch();
}
