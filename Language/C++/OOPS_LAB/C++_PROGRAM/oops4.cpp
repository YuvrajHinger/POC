#include<iostream>
#include<conio.h>
using namespace std;
class student
{   
    private:
       int m[5];
       char name[20];
       char roll_no[11];
       char city[20];
    public:
       void inp();       
       void out();
       void marks();
       void max();              
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
  for(int i=0;i<3;i++)
  { s[i].marks(); }
  cout<<"\n student max in subject";
  for(int i=0;i<3;i++)
  { s[i].max(); }
  getch();
  return 0;
}
void student::inp()
{      cout<<"name \t"; 
       cin>>name;
       cout<<"roll_no \t";
       cin>>roll_no;
       cout<<"city \t";
       cin>>city;
}   
void student::out()
{      cout<<"\n name \t"<<name;
       cout<<"\n roll_no \t"<<roll_no;
       cout<<"\n city \t"<<city;
}
void student::marks()
{     cout<<"\n marks of  "<<name<<"\n";
      for(int i=0;i<3;i++)
      { cin>>m[i]; }
}
void student::max()
{   int max=0; 
    for(int i=1;i<3;i++)
    { if(m[max]<m[i])
       { max=i; }
    }
    cout<<"\n"<<name<<"\n";
    cout<<"maximum marks is  "<<m[max]<<" subjectcode "<<max;
}
    
    
