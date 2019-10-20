/*Create a c++ program that has a class product (prod_id, name, price), which is inherited by other 
classes viz., belt (length, color, width), shoes (size, formal/casual, laced/non laced) and 
caps(diameter, water proof/not, color). List out the products available to the user and allow the user 
to select the products and the quantity. Overload * operator for multiplying quantity with objects. 
Display the product wise price and total amount.*/
#include<iostream>
#include<conio.h>
using namespace std;
class product
{ public:
  int p,at; // price,total_amount
  char id[20],n[20];  // id,name
  int operator*(int q) // individual product amount
  { return(q*p); }
  product operator+(product c) // total amount
  { product temp;
    temp.at=at+c.at;
    return temp;
  }
}*ob1,*ob2,*ob3,ob;
class belt:public product
{ public:
  int l,w; // length width
  char color[5];  // color
  belt()
  { strcpy(id,"belt@1"); 
    strcpy(n,"BELTS"); 
    l=7; w=3; at=0;
    strcpy(color,"RED");
    p=200;        
  }
  void disp()
  { cout<<"ID: "<<id<<"\nNAME: "<<n<<"\nPRICE: "<<p<<endl; 
    cout<<"LENGTH: "<<l<<"\nWIDTH: "<<w<<"\nCOLOR: "<<color<<endl;
  }
};
class caps:public product
{ public:
  int d;  // dia
  char typ1[20],typ2[20],color[5];  
  caps()
  { strcpy(id,"caps@1"); 
    strcpy(n,"CAPS"); 
    strcpy(color,"RED"); 
    strcpy(typ1,"WATERPROOF"); 
    strcpy(typ2,"NONWATERPROOF"); 
    p=300; at=0; d=90; 
  }
  void disp()
  { cout<<"ID: "<<id<<"\nNAME: "<<n<<"\nPRICE: "<<p<<endl;
   cout<<"TYPE1"<<typ1<<"\nTYPE2"<<typ2<<"\nCOLOR: "<<color<<endl; 
  }
};
class shoes:public product
{ public:
  int sz; 
  char typ1[20],typ2[20],typ3[20],color[5];
  shoes()
  { strcpy(id,"shoes@1"); 
    strcpy(n,"SHOES"); 
    strcpy(color,"RED"); 
    strcpy(typ1,"FORMAL"); 
    strcpy(typ2,"SPORTS"); 
    strcpy(typ3,"CASUAL"); 
    at=0; p=800; 
  }
  void disp()
  {cout<<"ID: "<<id<<"\nNAME: "<<n<<"\nPRICE: "<<p<<endl;
   cout<<"TYPE1: "<<typ1<<"\nTYPE2: "<<typ2<<"\nTYPE3: "<<typ3<<"\nCOLOR: "<<color<<endl; 
  }
};
int main()
{ belt b; caps c; shoes s;
  int ch,qt;
  while(1)
  { system("CLS");
    cout<<"1.BELT\n2.CAPS\n3.SHOES\n4.TOTAL_AMOUNT\n5.EXIT "<<endl; cin>>ch;
    switch(ch)
    { case 1: system("CLS");
              b.disp();
              cout<<"QUANTITY: "; 
              cin>>qt; 
              b.at=b.at+b*qt; 
              cout<<"TOTAL_AMOUNT: "<<b.at;
              break;
      case 2: system("CLS");
              c.disp();
              cout<<"QUANTITY: "; 
              cin>>qt; 
              c.at=c.at+c*qt; 
              cout<<" TOTAL_AMOUNT: "<<c.at;
              break;         
      case 3: system("CLS");
              s.disp();
              cout<<"QUANTITY: "; 
              cin>>qt; 
              s.at=s.at+s*qt; 
              cout<<" TOTAL_AMOUNT: "<<s.at;
              break;         
      case 4: system("CLS");
              ob1=&b; ob2=&c; ob3=&s;
              ob=*ob1+*ob2+*ob3;
              cout<<"TOTAL_COST: "<<ob.at<<endl;
              break;
      case 5: exit(0);
      default: cout<<"INVALID ENTRY!!"; 
    }getch();
   }
}
