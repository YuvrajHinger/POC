/*Create a class that registers your details by taking reg.no, name, age and mail id. Create a function 
  that prevents duplicate entries of objects based on reg.no.*/
#include<iostream>
#include<conio.h>
using namespace std;
class input
{ char reg_no[11];
  char name[20];
  char mail_id[20];
  public:
  static int i;
  void inp(char *r_no)
  { strcpy(reg_no,r_no);
    cout<<"NAME: "; cin>>name;
    cout<<"MAIL_ID: "; cin>>mail_id;
  }
  void display()
  { cout<<"REG_NO: "<<reg_no<<endl;
    cout<<"NAME: "<<name<<endl;
    cout<<"MAIL_ID: "<<mail_id<<endl;
  }
  int check(char *r_no)
  { if(strcmp(reg_no,r_no)==0)
    { return 1; }
    else
    { return 0; }
  }
};
int input::i;
int main()
{ input s[10]; char reg_no[20];
  int ch,i;
  while(1)
  { system("CLS");
    cout<<"1.INSERT\n2.DISPLAY\n3.EXIT"; cin>>ch;
    switch(ch)
    { case 1: if(input::i==0)
              { input::i++; 
                cout<<"REG_NO: "; cin>>reg_no;
                s[input::i].inp(reg_no);
              }
              else
              { int flag=0;
                cout<<"REG_NO: "; cin>>reg_no;
                for(int i=1;i<=input::i;i++)
                { if(s[i].check(reg_no))
                  { flag=1; break; } 
                } 
                if(flag==1)
                { cout<<"REGISTRATION_NO_EXIST"; }
                else
                { input::i++;
                  s[input::i].inp(reg_no);
                }
               }break;
      case 2:  if(input::i==0)
               { cout<<"NO_ENTRY_YET"; }
               else
               { for(int i=1;i<=input::i;i++)
                 { s[i].display(); }
               }break;
      case 3:  exit(0);
    }getch();
  }
}
