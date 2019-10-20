#include<iostream>
#include<conio.h>
using namespace std;
class calendar
{   int dd,mm,yy;
    public:
    void inp()
    { cout<<"\n DATE \t"; cin>>dd>>mm>>yy; }
    void display()
    { cout<<"\n DATE \t"<<dd<<" "<<mm<<" "<<yy; }
    void operator++();
    void operator--();
};
int f=0;
int main()
{ calendar c;
  int ch;
  while(1)
  {c.inp();
   cout<<"\n 1.Next date \n 2.Previous date \n 3.Exit"; cin>>ch; f=0;
   switch(ch)
   { case 1: ++c;
             if(f!=1)
             { c.display(); } 
             else
             { cout<<"Invalid Entry!! \n Enter again"; }
             break;
     case 2: --c;
             if(f!=-1)
             { c.display(); }
             else
             { cout<<"Invalid Entry!! \n Enter Again"; }        
             break;
    case 3: exit(0);
    default: cout<<"Invalid Entry!! \n Enter Again ";
   }
  }
  getch();
  return 0;
}
void calendar::operator++()
{  int ch;
   if(mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)
   { ch=1; }
   else if(mm==4 || mm==6 || mm==9 || mm==11)
   { ch=2; }
   else if(mm==2)
   { ch=3; } 
   else
   { f=1;  }
   switch(ch)
   { case 1: if(dd>31)
             { f=1; }
             else
             { if(dd==31)
               { dd=1; 
                 if(mm==12)
                 { mm=1; yy++; }
                 else
                 { mm++; }
                } 
               else
               { dd++; }
             } 
             break;
     case 2: if(dd>30)
             {  f=1;  }
             else
             { if(dd==30)
               { dd=1;
                 if(mm==12)
                 { mm==1; yy++; }
                 else
                 { mm++; }
               }
               else
               { dd++; }
             }          
             break;
      case 3: if(yy%400==0 || (yy%100!=0 && yy%4==0))
                { if(dd<29)
                  { dd++; }
                  else if(dd==29)
                  { dd=1; mm++; }        
                  else
                  {  f=1;  }
                }
              else
              { if(dd<28)
                { dd++; }
                else if(dd==28)
                { dd=1; mm++; }
                else
                {  f=1;   }
              }     
              break;
       default: {f=1;}      
     }       
}
void calendar::operator--()
{  int ch;
   if(mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12)
   { ch=1; }
   else if(mm==4 || mm==6 || mm==9 || mm==11)
   { ch=2; }
   else if(mm==2)
   { ch=3; } 
   else
   {  f=-1;  }
   switch(ch)
   { case 1: if(dd>31)
             { f=-1; }
             else
             { if(dd==1) 
               { if(mm==1)
                 { dd=31; mm=12; yy--; }
                 else if(mm==8)
                 { dd=31; mm--; }
                 else if(mm==3)
                 { if(yy%400==0 || (yy%100!=0 && yy%4==0))
                   { dd=29; mm--; }
                   else
                   { dd=28; mm--; }
                 } 
                else 
                { dd=30; mm--; }  
               } 
               else
               { dd--; }
              }  
              break;
     case 2: if(dd>30)
             {  f=-1;  }
             else if(dd==1)
               { dd=31; mm--; }
             else
               { dd--; }                   
             break;
      case 3: if(yy%400==0 || (yy%100!=0 && yy%4==0))
              { if(dd>29)
                { f=-1; }
                else if(dd==1)
                { dd=31; mm--; }
                else
                { dd--; }
               }
              else
              { if(dd>28)
                {  f=-1; }
                else if(dd==1)
                { dd=31; mm--; }
                else
                { dd--; }
              }     
              break;
       default: { f=-1; }      
     }       
}
