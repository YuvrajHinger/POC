#include<iostream>
#include<conio.h>
using namespace std;
class student
{ public: 
  char name[20];
  static int c;
  student()
  { cout<<"NAME: "; cin>>name; c++; }
  ~student()
  { c--; }
}*s[2];
int student::c;
int main()
{ s[1]=new student[4];
  cout<<"delete"<<s[1][3].name;
  s[1][3].~student();
  getch();
}
