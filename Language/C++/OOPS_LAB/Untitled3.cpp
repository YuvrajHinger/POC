#include<iostream>
using namespace std;
class cvector
{ public:
  int x;
  cvector(int a=0)
  { x=a; }
  cvector operator++()
  { cvector temp; temp.x=x++; return(temp); }
};
int main()
{ cvector d;  ++d; cout<<d.x; int ch; cin>>ch; return 0; }
