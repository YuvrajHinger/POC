#include<iostream>
#include<conio.h>
using namespace std;
class product
{ public:
  int p;
  char id[20],n[20]; 
  public:
  
};
class belt:public product
{ public:
  int l,w; char color[5];
  belt()
  { strcpy(id,"belt@1"); strcpy(n,"BELTS"); p=200;
    l=7; w=3; strcpy(color,"RED"); 
  }
  void disp()
  {cout<<"\nID: "<<id<<"\nNAME: "<<n<<"\nPRICE: "<<p;
   cout<<"\nLENGTH: "<<l<<"\nWIDTH: "<<w<<"\nCOLOR: "<<color; }
   int operator*(int q)
   { return(q*p); }
};
class caps:public product
{ public:
  int d; char typ1[20],typ2[20],color[5]; 
  caps()
  { strcpy(id,"caps@1"); strcpy(n,"CAPS"); p=300; strcpy(color,"RED"); 
    d=90; strcpy(typ1,"WATERPROOF"); strcpy(typ2,"NONWATERPROOF"); 
  }
  void disp()
  {cout<<"\nID: "<<id<<"\nNAME: "<<n<<"\nPRICE: "<<p;
   cout<<"\n"<<typ1<<"\n"<<typ2<<"\nCOLOR: "<<color; 
  }
  int operator*(int q)
  { return(q*p); }
};
class shoes:public product
{ public:
  int sz; char typ1[20],typ2[20],typ3[20],color[5];
  shoes()
  { strcpy(id,"shoes@1"); strcpy(n,"SHOES"); p=800; strcpy(color,"RED"); 
    strcpy(typ1,"FORMAL"); strcpy(typ2,"SPORTS"); strcpy(typ3,"CASUAL"); 
  }
  void disp()
  {cout<<"\nID: "<<id<<"\nNAME: "<<n<<"\nPRICE: "<<p;
   cout<<"\n"<<typ1<<"\n"<<typ2<<"\n"<<typ3<<"\nCOLOR: "<<color; 
  }
  int operator*(int q)
  { return(q*p); }
};
int main()
{ belt b; caps c; shoes s;
  int ch,qt,at=0;
  while(1)
  { cout<<"\n1.BELT\n2.CAPS\n3.SHOES\n4.EXIT "; cin>>ch;
    switch(ch)
    { case 1: b.disp();
              cout<<"\nQUANTITY: "; cin>>qt; 
              at=at+b*qt; cout<<"AMOUNT: "<<at;
              break;
      case 2: c.disp();
              cout<<"\nQUANTITY: "; cin>>qt; 
              at=at+c*qt; cout<<"AMOUNT: "<<at;
              break;         
      case 3: s.disp();
              cout<<"\nQUANTITY: "; cin>>qt; 
              at=at+s*qt; cout<<"AMOUNT: "<<at;
              break;         
      case 4: exit(0);
      default: cout<<"INVALID ENTRY!!"; 
    }getch();
   }
} 
