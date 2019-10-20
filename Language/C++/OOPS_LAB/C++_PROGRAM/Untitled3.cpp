#include<stdio.h>
#include<conio.h>
int a=3;
void convert(int n);
void main()
{ int n;
  printf("ENTER_NOS");
  scanf("%d",&n);
  convert(n);
  getch();
}
void convert(int n)
{  a--;
   if(a!=0)
   { convert(a); }
   printf("%d",a);
}
   
   
  
