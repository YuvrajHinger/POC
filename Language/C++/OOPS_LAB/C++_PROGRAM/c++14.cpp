/*Maintain a static array of objects using inside the persons class. Access the shared memory from all 
  the classes to store and retrieve data. Reserve zones in that array such that they are to be used by 
  appropriate category of people. Ensure that the space is available in each zone before you create a 
  dynamic object of each type and store it inside the shared array. */
#include<iostream>
#include<conio.h>
using namespace std;
class person //base class person 
{ public:
  int i;
  person()
  { i=0; }
  class array
  { public:
    char name[20];
    char shared[20];
    void inp()
    { cout<<"NAME: "; 
      cin>>name;
      cout<<"SHARED_MEMORY: ";
      cin>>shared;
    }
  }a[10];
  void stored();
  void retrive();
}*p;
class general:public person  //derived general public
{ char about[20];
  public:
  void inp()
  { cout<<"ABOUT: ";
    cin>>about;
  }
}g;
class vvip:public person     //derived VVIP
{
}v;
class official:public person //derived  official
{}o;
int main()
{ 
  int ch;
  while(1)
  { system("CLS");
    cout<<"1.STORED\n2.RETRIVE\n3.EXIT";
    cin>>ch;  
    system("CLS");
    switch(ch)
    { case 1:  cout<<"1.VVIP\n2.GOVT_OFFICIAL\n3.GENERAL";  
               cin>>ch;
               system("CLS");
               switch(ch)
               { case 1: if(v.i<=10)
                         { p=&v;
                           p->stored();
                           break;
                         }
                         else
                         { cout<<"SPACE FULL!!"; }
                 case 2: if(o.i<=10)
                         { p=&o;
                           p->stored();
                           break;
                         } 
                         else
                         { cout<<"SPACE FULL!!"; }
                 case 3: if(o.i<=10)
                         { p=&g;
                           p->stored();
                           break;  
                         }
                         else
                         { cout<<"SPACE FULL!!"; }
                }break;
      case 2: cout<<"CATEGORY\n1.VVIP\n2.GOVT_OFFICIAL\n3.GENERAL:"; cin>>ch;
              switch(ch)
              {  case 1: p=&v;
                         p->retrive();
                         break;
                 case 2: p=&o;
                         p->retrive();
                         break;
                 case 3: p=&g;
                         p->retrive();
                         break;
               }break;
       case 3: exit(0);
      }getch();
    }
}
void person::stored()
{   ++i; 
    a[i].inp();
    inp();
}
void person::retrive()
{   char n[20]; 
    int s=0; 
    cout<<"ENTER NAME:"; cin>>n;
    for(int x=1;x<=i;x++)
    { if(strcmp(a[x].name,n)==0)
      { s=x; }
    } 
    if(s==0)
    { cout<<"INVALID ENTRY!!"; }
    else
    { cout<<"SHARED_ARRAY_IS\n"<<a[s].shared;  }
}
