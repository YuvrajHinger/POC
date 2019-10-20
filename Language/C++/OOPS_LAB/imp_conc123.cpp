#include<iostream>
using namespace std;
class cvector
{ public:
  int x,y;
  cvector(int a=0,int b=0)
  { x=a; y=b; }
  cvector operator+(cvector param)
  { cvector temp; temp.x=x+param.x; temp.y=y+param.y; return(temp); }
};
int main()
{ cvector a(3,1),b(1,2),c(1,2),d; d=a+b+c; cout<<d.x<<d.y;  return 0; }
