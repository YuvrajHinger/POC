#include<iostream>
#include<conio.h>
using namespace std;
template<class x,class y>
void display(x &a,y &b)
{ cout<<a<<b; }
int main()
{ 
  //display("hello",2); 
  display(2,23);
  getch();
  return 0;
} 
