/*Create a class ID_card that maintains the details in an ID card. Perform insert, update, delete and 
display operation through functions that takes input through reference parameter.*/
#include<iostream>
#include<conio.h>
using namespace std;
class id
{ char name[20]; int age; 
  public: 
  static int i;
  id(char *n,int a)
  { strcpy(name,n); age=a; }
  int check(char *n)
  { if(strcmp(n,name)==0)
    { return 1; }
    else
    { return 0; }
  }
  void update()
  { cout<<"NEW_NAME: "; cin>>name;
    cout<<"NEW_AGE: ";  cin>>age;
  }
  void display()
  { cout<<"NAME: "<<name<<endl; cout<<"AGE: "<<age<<endl; }
}*s[10];
int id::i;
int main()
{ int age,ch; char name[20]; 
  while(1)
  { system("CLS"); cout<<"1.INSERT\n2.DELETE\n3.UPDATE\n4.DISPLAY\n5.EXIT"; cin>>ch;
    switch(ch)
    { case 1: cout<<"NAME: "; cin>>name; cout<<"AGE: "; cin>>age;
              s[++id::i]=new id(name,age);
              break;
      case 2: cout<<"NAME: "; cin>>name; 
              for(int i=1;i<=id::i;i++)
              { if(s[i]->check(name))
                { for(int x=i,y=i+1;x<=id::i;x++,y++)
                  { s[x]=s[y]; } id::i--;
                }
              }break;
      case 3: cout<<"CURRENT_NAME: "; cin>>name; 
              for(int i=1;i<=id::i;i++)
              { if(s[i]->check(name))
                { s[i]->update(); }
              }break;
      case 4: for(int i=1;i<=id::i;i++)
              { cout<<i<<endl; s[i]->display(); cout<<"\n______\n"; }
              break;
      case 5: exit(0);
    }getch();
  }
}
