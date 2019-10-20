#include<stdio.h>
#include<conio.h>
void convert(int n);
void main()
{ int n,n1,n2;
  printf("ENTER_NOS1");
  scanf("%d",&n1);
  printf("ENTER_NOS2");
  scanf("%d",&n2);
  n=n1+n2;
  convert(n);
  getch();
}
void convert(int n)
{  int a;
   a=n%16;   
   n=n/16;
   if(n!=0)  
   { convert(n); }  
   if(a==10)
   { printf("A"); }
   else if(a==11)
   { printf("B"); }
   else if(a==12)
   { printf("C"); }
   else if(a==13)
   { printf("D"); }
   else if(a==14)
   { printf("E"); }
   else if(a==11)
   { printf("F"); }
   else
   { printf("%d",a); }
}
