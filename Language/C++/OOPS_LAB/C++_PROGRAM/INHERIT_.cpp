#include<iostream>
#include<conio.h>
int m=0,n=0;
using namespace std;
class product
{ public:
  char id[20],name[20]; int p[2][2];
};
class belt:private product
{ private:
  char c[5];
  int l[2],w[2];
  public:
  belt()
  { strcpy(id,"ABC"); strcpy(name,"BELT"); strcpy(c,"red"); 
    w[1]=5; w[2]=3; l[1]=5; l[2]=7; cout<<l[1];
    p[1][1]=200; p[1][2]=300; p[2][1]=100; p[2][2]=50;
  }
  void display()
  { system("CLS");
    cout<<"ID:"<<id<<"\nNAME:"<<name<<"COLOR:"<<c;
    for(int i=1;i<=2;i++)
    { cout<<"\nLENGTH:"<<l[i]<<"\nWIDTH:"<<w[i]; }
  }
  void check(int x,int y)
  { for(int i=1;i<=2;i++)
    { cout<<l[i];
     if(l[i]==x)
      { m=i; 
        for(int j=1;j<=2;j++)
        { if(w[j]==y)
          { n=j; cout<<"PER_UNIT_PRICE:"<<p[i][j]; break; }
        }break;
    }}} 
  int operator*(int qt)
  { return(qt*p[m][n]); }
};
class caps:private product
{ private:
  char c[5];
  char tp[2][50];
  int d[2];
  public:
  caps()
  { strcpy(id,"XYZ"); strcpy(name,"CAPS"); strcpy(c,"red"); 
    strcpy(tp[1],"WATERPROOF"); strcpy(tp[2],"NONWATERPROOF");
    d[1]=50; d[2]=30;  cout<<tp[1];
    p[1][1]=200; p[1][2]=300; p[2][1]=100; p[2][1]=50; cout<<tp[2];
  }
  void display()
  { system("CLS");
    cout<<"ID:"<<id<<"\nNAME:"<<name;
    for(int i=1;i<=2;i++)
    { cout<<"\nDIA:"<<d[i]<<"\nTYPE:"<<tp[i]; }
  }
  void check(int x,char t[10])
  { for(int i=1;i<=2;i++)
    { if(d[i]==x)
      { m=i;
        for(int j=1;j<=2;j++)
        { if(strcmp(tp[i],t)==0)
          { n=j; cout<<"PER_UNIT_PRICE:"<<p[i][j]; break; }
        }break;
       }}} 
  int operator*(int qt)
  { return(qt*p[m][n]); }
};
int main()
{ belt b;
  caps c;
  int total=0,ch,qt;
  cout<<"\n1.BELT\n2.SHOES\n3.CAPS\n";
  cout<<"CHOICE :"; 
  cin>>ch;
  switch(ch)
  { case 1: int l,w;
            b.display();
            cout<<"\nLENGTH AND WIDTH :"; cin>>l>>w;
            b.check(l,w);
            if(n==0)
            { cout<<m; cout<<"NOT AVAILABLE"; }
            else
            { cout<<"\nQUANTITY :"; cin>>qt;
              total=total+b*qt;
              cout<<"TOTAL_AMOUNT:"<<total;
            }
            break;
    case 2: int d; char t[10];
            c.display();
            cout<<"\nDIA AND TYPE :"; cin>>d>>t;
            c.check(d,t);
            if(n==0)
            { cout<<m; cout<<"NOT AVAILABLE"; }
            else
            { cout<<"\nQUANTITY :"; cin>>qt;
              total=total+c*qt;
              cout<<"TOTAL_AMOUNT:"<<total;
            }
            break; 
    case 3: break;
    default: cout<<"INVALID ENTRY!!";
   }   
  getch();
  return 0;
}
