#include<iostream>
#include<conio.h>
using namespace std;
class base
{ private:
  int room_no,cost;
  char typ[20];
  public:
  void inp(int x,char y[20])
  { cost=x; strcpy(typ,y);
    cout<<"ROOM_NO: "; cin>>room_no;
    cout<<"TYPE: "<<typ;
    cout<<"\nCOST: "<<cost; 
  }
};
class room1:public base
{ private:
  int ppl,a,c1,c2;
  char a_ctp1[20],a_ctp2[20],food_pr[20],recre_fac[20];
  public:
  room1()
  { ppl=10; strcpy(a_ctp1,"CENTRALIZE"); strcpy(a_ctp2,"WINDOW");
    strcpy(food_pr,"1.a\n2.b\n3.c\n4.d"); strcpy(recre_fac,"1.x\n2.y\n3.z"); a=10; c1=3000; c2=2500; 
  }
  int inp1();
};
class room2:public base
{ private:
  int a,c1,c2,c3,c4;
  char a_tp1[10],a_tp2[10],bd_tp1[20],bd_tp2[20];
  public:
  room2()
  { strcpy(a_tp1,"AC"); strcpy(a_tp2,"NON_AC"); a=10; 
    strcpy(bd_tp1,"SINGLE_BED"); strcpy(bd_tp2,"DOUBLE_BED");
    c1=2000; c2=3000; c3=1000; c4=2000; 
  }
  int inp2();
};
class customer
{ private:
  char name[20],adrs[20],p_no[11];
  int age;
  public:
  void inp()
  {cout<<"\nNAME: ";   cin>>name;
   cout<<"AGE: ";      cin>>age;
   cout<<"ADDRESS: ";  cin>>adrs;
   cout<<"PHONE_NO: "; cin>>p_no;
  }
};
int room1::inp1()
{  int n;
   cout<<"ROOM_TYPES";
   cout<<"\n1."<<a_ctp1<<"\nPRICE:"<<c1;
   cout<<"\n2."<<a_ctp2<<"\nPRICE:"<<c2;
   cin>>n;
   if(n==1 && a>=1)
   { inp(c1,a_ctp1); --a; return(1); }
   else if(n==2 && a>=1)
   { inp(c2,a_ctp2); --a; return(2); }
   else
   { return(0); }
}
int room2::inp2()
{   int n;
    cout<<"ROOM_TYPES";
    cout<<"\n1."<<a_tp1<<"\n"<<bd_tp1<<"\nPRICE:"<<c1; 
    cout<<"\n2."<<a_tp1<<"\n"<<bd_tp2<<"\nPRICE:"<<c2; 
    cout<<"\n3."<<a_tp2<<"\n"<<bd_tp1<<"\nPRICE:"<<c3; 
    cout<<"\n4."<<a_tp2<<"\n"<<bd_tp2<<"\nPRICE:"<<c4; 
    cin>>n;
    if(a>=1)
    { switch(n)
      { case 1: inp(c1,a_tp1); --a; return(1);
                break;
        case 2: inp(c2,a_tp1); --a; return(2);
                break;
        case 3: inp(c3,a_tp2); --a; return(3);
                break;
        case 4: inp(c4,a_tp2); --a; return(4);
                break;
        default: return(0);
      }   
    }
    else
    { return(0); }
}
int main()
{   room1 r1; room2 r2; customer c[10]; 
    int n,x,i=0;
    while(1)
    {   system("CLS");
        cout<<"\n1.LOUNGE_ROOM\n2.DELUX_ROOM\n3.EXIT"; cin>>n; system("CLS");
        if(n==1)
        { x=r1.inp1(); 
          if(x==0)
          { cout<<"NOT AVAILABLE!!"; }
          else
          { c[i].inp(); i++; }
        }
        else if(n==2)
        { x=r2.inp2(); 
          if(x==0)
          { cout<<"NOT AVAILABLE!!"; }
          else
          { c[i].inp(); i++; }
        }
        else
        { exit(0); }
    }
    getch();
    return(0);
}
