#include<iostream>
#include<conio.h>
using namespace std;
class powered_device
{ public:
  char  type1[20]; //(electronic/mechanical)
  int   power_range; //(10W- 20W)
  char  type2[20]; //(self_powered/adapter)
};
class scanner:virtual public powered_device
{ public:
  int   typ1; //no.of pages per second
  int   resolution;
  int   size,cost;
  char  brand1[20]; 
};
class printer:virtual public powered_device
{ public:
  int   typ2; //no.of pages per second
  char  typ3[20]; //laser/inkjet 
  int   dpi; //output_resolution(dotes_per_inch)
  char  color[10]; 
  char  brand2[20]; 
};
class copier:public printer,public scanner
{ int   storage; //capacity
  int   speed; //stored copy printing speed
  public:
  void inp()
  { cout<<"POWERED_DEVICE\n";
    cout<<"1.ELECTRONIC\t2.MECHANICAL\n"; 
    cin>>type1;
    cout<<"POWER_RANGE: ";
    cin>>power_range;
    cout<<"1.SELF_POWERED\t2.ADAPTOR\n";
    cin>>type2;
    cout<<"SCANNER\n";
    cout<<"no.of pages per second: ";
    cin>>typ1;
    cout<<"resolution: ";
    cin>>resolution;
    cout<<"size: ";
    cin>>size;
    cout<<"cost: ";
    cin>>cost;
    cout<<"brand: "; 
    cin>>brand1;
    cout<<"PRINTER\n";
    cout<<"no.of pages per second: ";
    cin>>typ2; 
    cout<<"1.laser\t2.inkjet\n"; 
    cin>>typ3;
    cout<<"output_resolution(dotes_per_inch): ";
    cin>>dpi; 
    cout<<"COLOR: ";
    cin>>color; 
    cout<<"BRAND: ";
    cin>>brand2; 
   }
   void display()
   {cout<<"POWERED_DEVICE\n";
    cout<<"1.ELECTRONIC\t2.MECHANICAL\n"<<type1;
    cout<<"POWER_RANGE: "<<power_range;
    cout<<"1.SELF_POWERED\t2.ADAPTOR\n"<<type2;
    cout<<"SCANNER\n";
    cout<<"no.of pages per second: "<<typ1;
    cout<<"resolution: "<<resolution;
    cout<<"size: "<<size;
    cout<<"cost: "<<cost;
    cout<<"brand: "<<brand1;
    cout<<"PRINTER\n";
    cout<<"no.of pages per second: "<<typ2; 
    cout<<"1.laser\t2.inkjet\n"<<typ3
    cout<<"output_resolution(dotes_per_inch): "<<dpi; 
    cout<<"COLOR: "<<color; 
    cout<<"BRAND: "<<brand2; 
   }
};
int main()
{ copier c[5];
  int ch,i=-1,j;
  while(1)
  { system("CLS");
    cout<<"1.CREATE_OBJECT\n2.DISPLAY\n3.EXIT";
    cin>>ch;
    switch(ch)
    { case 1: if(i<5)
              { i++;
                c[i].inp(); 
              }
              else
              { cout<<"NO_SPACE"; }
              break;
      case 2: if(i==-1) 
              { cout<<"NO_DATA_IS_THERE!!"; }
              else
              { for(j=0;j<=i;j++)  
                { c[i].display(); }
              }break;
      case 3: exit(0);
      default: cout<<"INVALID_ENTRY";
    }getch();
  }
