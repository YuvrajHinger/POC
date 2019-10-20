#include<iostream>
#include<conio.h>
using namespace std;
class index
{ int i,j,x,y;
  public: 
  index() 
  { i=0,j=0,x=0,y=0; }  // ob1 i=0 j=0
  index(int s)
  { i=s,j=s,x=s,y=s; } // ob i=2 j=2
  index operator++() 
  { i=2; j=9;   // ob j=3
    return index(j); 
  }
  int get() 
  { cout<<"i="<<i<<"\n j="<<j<<"\n x="<<x<<"\n y="<<y;  } 
};
  int main()
  { index ob(2),ob1;
    ob1=++ob; cout<<"ob \n";
   // ob.get(); cout<<"\n------------ \nob1 \n";
    ob1.get(); 
    getch();
    return 0;
  }
