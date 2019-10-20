#include<stdio.h>
#include<conio.h>
struct booking
{ int dd,mm,yy;
  char from[20];
  char to[20];
  float cost;
};
int main()
{ struct booking b[3];
  int i,d,m,y,f=0;
  for(i=1;i<=3;i++)
  { printf("\n");
    printf("BOOKING_NO:%d \n",i);
	printf("FROM \t");           scanf("%s",&b[i].from);
	printf("TO \t");             scanf("%s",&b[i].to);
	printf("DATE OF FLIGHT \t"); scanf("%d%d%d",&b[i].dd,&b[i].mm,&b[i].yy);
    printf("CURRENT DATE \t");   scanf("%d%d%d",&d,&m,&y);
    b[i].cost=6000;
    if(b[i].yy>y)
    { while(m!=12)
      { m++; f++; } 
      if(m==12)
      { m=1; f++;
        while(b[i].mm>m)
        { m++; f++; }
      }
      if(f>=2)
      { b[i].cost=b[i].cost-1000; printf("COST:%.2f",b[i].cost); }
      else
      { printf("COST:%.2f",b[i].cost); }
    }
    else
    { if(b[i].mm<m || b[i].yy<y || (b[i].mm==m && b[i].yy==y && b[i].dd<d))
      { printf("INVALID ENTRY"); break; }
      if(b[i].mm>=m+2)
      { b[i].cost=b[i].cost-1000; printf("COST:%.2f",b[i].cost); }
      else
      { printf("COST:%.2f",b[i].cost); }
    }   
  }
getch();
}
