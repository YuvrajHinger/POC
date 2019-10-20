#include<stdio.h>
#include<conio.h>
#define max 10
void main()
{ int a[max],b[max],c[max],i,p,q,r; // ex- 5x^3 + 4x^2 + 3x^1 + 9
  printf("1st POLYNOMIAL\n");
  printf("ENTER MAX POWER");
  scanf("%d",&p);                // max power = 3
  printf("ENTER COEFFICIENT VALUE\n");
  for(i=p;i>=0;i--)         // i=3 i=0 (3,2,1,0)
  { scanf("%d",&a[i]); }    //   5 4 3 9
  for(i=p;i>=0;i--)
  { if(a[i]!=0 && i!=0)    // for x value   
    { printf("%dx^%d+",a[i],i); } // 5x^3+4x^2+3x^1+
    if(a[i]!=0 && i==0)
    { printf("%d",a[i]); } // 9
  }
  printf("\n2nd POLYNOMIAL\n");    // ex- 6x^4 + 5x^3 + 4x^2 + 3x^1 + 9
  printf("ENTER MAX POWER");        
  scanf("%d",&q);                // max power = 4
  printf("ENTER COEFFICIENT VALUE\n");
  for(i=q;i>=0;i--)         // i=4 i=0 (4,3,2,1,0)
  { scanf("%d",&b[i]); }    //   6 5 4 3 9
  for(i=q;i>=0;i--)
  { if(a[i]!=0 && i!=0)    // for x value   
    { printf("%dx^%d+",b[i],i); } // 6x^4+5x^3+4x^2+3x^1+
    if(a[i]!=0 && i==0)
    { printf("%d",b[i]); } // 9
  }
  printf("/nPOLYNOMIAL ADDITION IS\n");
  if(p>q)
  { r=p; }
  else
  { r=q; } // r=4
  for(i=r;i>=0;i--)   // i=4 i=0 (4,3,2,1,0)
  { c[i]=a[i]+b[i]; } // 6 10 8 6 18
  for(i=r;i>=0;i--)
  { if(c[i]!=0 && i!=0)    // for x value   
    { printf("%dx^%d+",c[i],i); } // 6x^4+10x^3+8x^2+6x^1+
    if(c[i]!=0 && i==0)
    { printf("%d",c[i]); } // 18
  }
   getch();
}
