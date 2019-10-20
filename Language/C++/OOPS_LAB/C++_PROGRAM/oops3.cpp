#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    char name[20];
    char roll_no[11];
    public:
        void inp()
        {   cout<<"name \t"; 
            cin>>name;
            cout<<"roll_no \t";
            cin>>roll_no;
        } 
        void out()
        {   cout<<"\n name \t"<<name;
            cout<<"\n roll_no \t"<<roll_no;
        }
        void from()
        {   if(roll_no[5]=='c' && roll_no[6]=='s')
            {  cout<<"\n"<<name<<"\t"<<roll_no; }
        }           
};
int main()
{
  student s[3];
  cout<<"register detail \n";
  for(int i=0;i<3;i++)
  { s[i].inp(); }
  cout<<"\n display detail";
  for(int i=0;i<3;i++)
  { s[i].out(); }
  cout<<"\n student from cs branch are";
  for(int i=0;i<3;i++)
  { s[i].from(); }
  getch();
  return 0;
}
