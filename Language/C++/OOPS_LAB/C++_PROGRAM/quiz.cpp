#include<iostream>
#include<conio.h>
using namespace std;
class quiz
{ 
   char question[20],a[10],b[10],c[10],d[10];
   char answer;
   public:
   void inp();
   friend class student;
};
class student
{
    char name[20];
    char roll[11];
    int point;
    public:
    void inp();
    void comp(char n[20],char r[11]);
    void exam(quiz *);
    void display();
};
int f=0;
int main()
{
    student s[3];
    quiz q[3];  int i; char n[20],r[11];
    cout<<"STUDENT REGISTRATION \n";
    for(i=1;i<=3;i++)
    { s[i].inp(); } system("CLS");
    cout<<"QUIZ GIVEN \n";
    for(i=1;i<=3;i++)
    { cout<<"QUESTION"<<i<<"\t"; q[i].inp(); } system("CLS");
    cout<<"STUDENT LOGIN \n";
    cout<<"NAME \t";    cin>>n;
    cout<<"ROLL_NO \t"; cin>>r;
    for(i=1;i<=3;i++)
    { s[i].comp(n,r); if(f==1) { break ;} }
    s[i].exam(q);
    for(i=1;i<=3;i++)
    { s[i].display(); }
    getch();
    return 0;
}
void student::inp()
{   cout<<"NAME \t";    cin>>name;  cout<<"ROLL_NO \t"; cin>>roll;  point=0; }
void quiz::inp()
{  cin>>question; cout<<"a. \t"; cin>>a; cout<<"b. \t"; cin>>b; 
                  cout<<"c. \t"; cin>>c; cout<<"d. \t"; cin>>d; 
                  cout<<"\n ANSWER \t"; cin>>answer; 
}  
void student::comp(char n[20],char r[11])
{ if(strcmp(n,name)==0 && strcmp(r,roll)==0)  { f=1; } }
void student::exam(quiz *q)
{ char an;
  for(int i=1;i<=3;i++)
  { cout<<q[i].question;
    cout<<"\n a."<<q[i].a<<"\t b."<<q[i].b<<"\n c."<<q[i].c<<"\t d."<<q[i].d; 
    cout<<"\n ANSWER \t";  cin>>an;
    if(an==q[i].answer)
    { point=point+10; }
  } 
}
void student::display()
{   cout<<"\n NAME \t"<<name;  cout<<"\n ROLL_NO \t"<<roll;  cout<<"\n score \t"<<point;  }
