#include<stdio.h>
#include<conio.h>
struct date
{ int dd,mm,yy; }s[2];
void main()
{ int i,j;
  for(i=0;i<2;i++)
  { printf("DATE: "); scanf("%d%d%d",&s[i].dd,&s[i].mm,&s[i].yy); }
  for(i=0;i<2;i++) // 12 12 12      11 11 11
  { printf("DATE: %d %d %d\n",s[i].dd,s[i].mm,s[i].yy); }
  for(i=0;i<2;i++)       // 0,1
  { for(j=i+1;j<2;j++) // 1
    { if(s[i].dd==s[j].dd)  // 12 
      { if(s[i].mm==s[j].mm)
        { if(s[i].yy==s[j].yy)
          { printf("EQUAL"); }
          else
          { printf("year_NOT_MATCH"); }
        }
        else
        { printf("MONTH_NOT_MATCH"); }
      }
      else
      { printf("DATE_NOT_MATCH"); }
    }
   }
   getch();
}
