#include<stdio.h>
#include<conio.h>
void main()
{ int a[5],b[5],c[10],i,t,k=0;
  printf("ENTER 1st SORTED ARRAY\n");
  for(i=0;i<5;i++)
  { scanf("%d",&a[i]); }
  printf("ENTER 2nd SORTED ARRAY\n");
  for(i=0;i<5;i++)
  { scanf("%d",&b[i]); }
  for(i=0;i<5;i++)
  { c[k]=a[i]; k++; }
  for(i=0;i<5;i++)
  {  c[i]=b[i]; k++; }
  for(i=0;i<10;i++)
  { for(k=i+1;k<10;k++)
    { if(c[i]>c[k])
      { t=c[i];
        c[i]=c[k];
        c[k]=t;
      }
    }
  } printf("\nMERGE_ARRAY_IS\n");
  for(k=0;k<10;k++)
  { printf("\n%d",c[k]); }
  getch();
}
