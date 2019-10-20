#include<iostream>
#include<conio.h>
using namespace std;  
class computer
{ char type[11];
  char ram[11];
  char hdd[11];
  float speed;
  float price;
  public:
  static int count;
  computer(char t[11],char r[11],char h[11],float s,float pr)
  { strcpy(type,t);
    strcpy(ram,r);
    strcpy(hdd,h);
    speed=s;
    price=pr;
    cout<<"\nOBJECT_CEATED!!!";
  }
  ~computer()
  { cout<<"\nOBJECT_DESTROYED!!!"; 
    count--;
  }
  computer(computer &ob)
  { strcpy(type,ob.type);
    strcpy(ram,ob.ram);
    strcpy(hdd,ob.hdd);
    speed=ob.speed;
    price=ob.price;
    cout<<"\nDUPLICATE_OBJECT_CEATED!!!";
  }
  void display()
  { cout<<"TYPE: "<<type;
    cout<<"\nRAM: "<<ram;
    cout<<"\nHDD: "<<hdd;
    cout<<"\nSPEED: "<<speed;
    cout<<"\nPRICE: "<<price;
    cout<<"\n____________\n";
  }
}*p[10];
void destroy();
void copy();
int computer::count;
int main()
{ int n;
  float s,pr;
  char t[11],r[11],h[11];
  while(1)
  { system("CLS"); cout<<computer::count;
    cout<<"MENU:\n1.CREATE_OBJECT\n2.DESTROY_OBJECT\n3.DUPLICATE_OBJECT\n4.DISPLAY\n5.EXIT";
    cin>>n;
    switch(n)
    { case 1: if(computer::count<=10)
              { cout<<"ENTER DETAILS\n";
                cout<<"TYPE(ASSEMBLED/BRANDED): ";
                cin>>t;
                cout<<"RAM: ";
                cin>>r;
                cout<<"HDD: ";
                cin>>h;
                cout<<"PRICE: ";
                cin>>pr;
                cout<<"SPEED: ";
                cin>>s;
                computer::count++;
                p[computer::count]=new computer(t,r,h,s,pr);
               }
              else
              { cout<<"CAN'T_CREATE_OBJECT!!"; } 
              break;
      case 2: if(computer::count>0)
              { destroy(); } 
              else
              { cout<<"NO_OBJECT"; }
              break;
      case 3: if(computer::count>0 && computer::count<=10)
              { copy(); }
              else
              { cout<<"CAN'T_DUPLICATE_OBJECT"; }
              break;
      case 4: if(computer::count>0)
              {   for(int i=1;i<=computer::count;i++)
                  { p[i]->display(); }
              }
              else
              { cout<<"NO_OBJECT"; }
              break;
      case 5: exit(0);
      default: cout<<"WRONG_CHOICE";
    }getch();
  }
}
void destroy()
{ int n,i;
  cout<<"ENTER OBJECT NUMBER";
  cin>>n;
  if(n<=computer::count)
  { p[n]->~computer();
    for(i=n;i<computer::count;i++)
    { p[i]=p[i+1]; }
  }
  else
  { cout<<"NO_MATCH_FOUND"; }
}
void copy()
{ int n;
  cout<<"ENTER_OBJECT_NO_TO_BE_DUPLICATE: ";
  cin>>n;
  if(n<=computer::count)
  { computer::count++;
    p[computer::count]=new computer(*p[n]); 
  }
  else
  { cout<<"NO_MATCH_FOUND!!!"; }
 }
