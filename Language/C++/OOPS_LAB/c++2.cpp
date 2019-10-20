/*Create a class account that maintains acc_no, name, and balance. Perform deposit, withdrawal and 
statement print operations. (statement print must print all the transactions that has taken place so 
for – use structures inside the class to maintain the details about transactions)*/
#include<iostream>
#include<conio.h>
using namespace std;
class account
{ public:
  char acc_no[20];
  char name[20];
  int balance,z;
  struct statement
  { int b[10]; }q;
}p[10];
int i=0;
void create();
void login();
void sprint(int s);
int main()
{ int ch;
  while(1)
  { system("CLS");
    cout<<"1.CREATE_ACCOUNT\n2.ALREADY_AN_ACCOUNT\n3.EXIT"; cin>>ch; 
    switch(ch)
    { case 1: create(); break; 
      case 2: login();  break; 
      case 3: exit(0);
      default: cout<<"INVALID_ENTRY!!";
    }getch();
  } 
  return 0;
}
void create()
{   system("CLS");
    if(i<=10)
    { i++; p[i].z=1; 
      cout<<"GIVE_NAME: ";                              
      cin>>p[i].name;
      cout<<"GET_ACCOUNT_NO: ";                         
      cin>>p[i].acc_no;
      cout<<"DEPOSIT_INITIAL_AMOUNT_IN_YOUR_ACCOUNT: "; 
      cin>>p[i].balance;
      p[i].q.b[p[i].z]=p[i].balance;  
      cout<<"SUESSFULLY_CREATED!!"; 
      getch();
     }
    else
    { cout<<"ENTRY FULL!!"; }
}
void login()
{ char a[20],n[20];
  int s=0;
  cout<<"GIVE ACCOUNT_NO: ";
  cin>>a;
  cout<<"GIVE NAME: ";  
  cin>>n;
  for(int x=1;x<=i;x++)
  { if((strcmp(p[x].acc_no,a)==0) && (strcmp(p[x].name,n)==0))
    { s=x; } 
  }
  if(s==0)
  { cout<<"INVALID ACCOUNT!!"; }
  else
  { while(s!=0)
    { system("CLS"); int ch,at;
      cout<<"WELCOME_USER\n1.DEPOSIT_AMOUNT\n2.WITHDRAWL_AMOUNT\n3.ACCOUNT_INFO\n4.EXIT";
      cin>>ch; 
      switch(ch)
      { case 1:cout<<"DEPOSIT_AMMOUNT: ";
               cin>>at; 
               p[s].balance=p[s].balance+at;
               cout<<"CURRENT_BALANCE: "<<p[s].balance;
               p[s].z++;  p[s].q.b[p[s].z]=p[s].balance; 
               getch();
               break;
        case 2:cout<<"WITHDRAWL_AMMOUNT: ";
               cin>>at;  
               if(at<p[s].balance)
               { p[s].balance=p[s].balance-at;
                 cout<<"CURRENT_BALANCE: "<<p[s].balance;
                 p[s].z++;  p[s].q.b[p[s].z]=p[s].balance; 
               }
               else
               { cout<<"INSUFFICENT_AMMOUNT_IN_YOUR_ACCOUNT"; }
               getch();
               break;
        case 3:sprint(s);
               getch();
               break; 
        case 4:s=0; break;
        }//switch
      }//if
    }//else 
}//login
void sprint(int s)
{   int at;
    cout<<"\nCURRENT_AMOUNT: "<<p[s].q.b[1];
    for(int x=1,j=x+1;x<=p[s].z,j<=p[s].z;x++,j++)
    { if(p[s].q.b[x]>p[s].q.b[j])
      { at=p[s].q.b[x]-p[s].q.b[j];
        cout<<"\nWITHDRAWL_AMOUNT: "<<at; 
        cout<<"\nCURRENT_AMOUNT: "<<p[s].q.b[j];
      }
      else if(p[s].q.b[x]<p[s].q.b[j])
      { at=p[s].q.b[j]-p[s].q.b[x];
        cout<<"\nDEPOSIT_AMOUNT: "<<at;
        cout<<"\nCURRENT_AMOUNT: "<<p[s].q.b[j];
      }
      else
      { break; }
    }
}
