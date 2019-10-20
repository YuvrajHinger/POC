#include<iostream>
#include<conio.h>
using namespace std;
class data   
{ char p_no[10],passwd[10],to[10][10],msg[10][20];
  int z;
  public:
  static int i;
  data()
  { cout<<"PHONE_NO: "; cin>>p_no;          
    cout<<"PASSWORD: "; cin>>passwd;  
    cout<<"DONE!!"; z=0;
  }
  int check(char *phone,char *password)
  { if((strcmp(phone,p_no)==0) && (strcmp(password,passwd)==0))
    { return(1); } 
    else 
    { return(0); }
  }
  void send()
  { cout<<"TO: ";      cin>>to[++z];
    cout<<"MESSAGE: "; cin>>msg[z]; 
  }
  void display()
  { for(int x=1;x<=z;x++)
    { cout<<"TO: "<<to[x]<<endl; cout<<"MESSAGE: "<<msg[x]<<endl; }
  }
}*m[10];
int data::i;
int main()
{ int ch; char p_no[10],passwd[10];
  while(1)
  { system("CLS"); cout<<"1.SIGNUP\n2.LOGIN\n3.EXIT"; cin>>ch;
    switch(ch)
    { case 1: m[++data::i]=new data();
              break;
      case 2: cout<<"PHONE_NO: "; cin>>p_no;
              cout<<"PASSWORD: "; cin>>passwd;
              for(int i=1;i<=data::i;i++) 
              { if(m[i]->check(p_no,passwd))
                { cout<<"WELCOME_USER"<<endl;
                  cout<<"1.SENT_MESSAGE\n2.DISPLAY_MESSAGE";  cin>>ch;
                  switch(ch)
                  { case 1: m[i]->send();
                            break;
                    case 2: m[i]->display();
                            break;
                  }
                }
              }
              break;
      case 3: exit(0);
    }getch(); //switch
   }//while
}//main                                             
               
