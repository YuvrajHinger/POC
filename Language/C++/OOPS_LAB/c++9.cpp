/*Create a class which maintains information like username, password, age 
mailid,phone number, accepted friends list, etc.,. Declare a friend function
inside the class. Create 3 users such that the first user is friend with 2 & 3 
(update friend list of user 1with user names of 2 and 3). If the user1 logs in,
he should see the personal information of 2 and 3, likewise 2 and 3 should see
personal info of 1. However, 2 can’t see the personal information of 3*/
#include<iostream>
#include<conio.h>
using namespace std;
class information
{
    private:
    char username[20];
    char password[20];
    int  age; 
    char mail_id[20];
    long long phone_number;
    public:
    void inp();
    void comp(char x[20],char y[20]);
    void display();
    friend void user1(information x,information y,information z);
    friend void other(information p,information q);
};
int f=0;
int main()
{
  class information u[3];
  char x[20],y[20];
  int ch,i;
  cout<<"registration \n";
  for(i=1;i<=3;i++)
  {    cout<<"user "<<i; 
       u[i].inp(); 
  }
  cout<<"\n give your username \t";
  cin>>x;
  cout<<"give your password \t";
  cin>>y;
  for(i=1;i<=3;i++)
  { u[i].comp(x,y); 
    if(f==1)
    { cout<<"welcome user"; break; }
  }
  if(i==1)
  { user1(u[1],u[2],u[3]); }
  if(i==2)
  { other(u[2],u[1]); }
  if(i==3)
  { other(u[3],u[1]); }
  if(f==0)
  { cout<<"invalid username and password"; }
  getch();  
  return 0;
}
void information::inp()
{
    cout<<"\n username \t"; 
    cin>>username;
    cout<<"password \t";
    cin>>password;
    cout<<"age \t";
    cin>>age;
    cout<<"mailid \t";
    cin>>mail_id;
    cout<<"phone_number \t";
    cin>>phone_number;
}
void information::comp(char x[20],char y[20])
{    if((strcmp(username,x)==0) && (strcmp(password,y)==0))
     { f++; }    
}
void information::display()
{ 
    cout<<"\n username \t"<<username;
    cout<<"\n password \t"<<password;
    cout<<"\n age \t"<<age;
    cout<<"\n mailid \t"<<mail_id;
    cout<<"\n phone_number \t"<<phone_number;  
}  
void user1(information x,information y,information z)
{
    cout<<"1. personal info \n 2.user2 info \n 3. user3 info"; 
    int ch;
    cin>>ch;
    switch(ch)
    { case 1: x.display();
              break;
      case 2: y.display();
              break;
      case 3: z.display();
              break;
      default: cout<<"invalid choice";
    }          
}
void other(information p,information q)
{   cout<<"1. personal info \n 2.user1 info \n"; 
    int ch;
    cin>>ch;
    switch(ch)
    { case 1: p.display();
              break;
      case 2: q.display();
              break;
      default: cout<<"invalid choice";
    }          
}     
