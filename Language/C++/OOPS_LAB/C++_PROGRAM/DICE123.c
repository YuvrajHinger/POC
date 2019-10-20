#include<stdio.h>
#include<conio.h>
void main()
{ int n,a=1,b=1,c,t=1,i=1;
  while((a!=100) && (b!=100))
  {
    n=rand()%6+1; 
    printf("\nA:%d\tB:%d",a,b);
    if(i%2==0){ printf("\nB PLAYER TURN"); }
    else{ printf("\nA PLAYER TURN"); }
    printf("\nTHROW_DICE"); getch();
    printf("\nDICE_RESULT:%d\n",n); 
    if(t+n<=100){ t=t+n; }
    if(t!=53 && t!=67 && t!=82 && t!=98 && t!=17)
    {   if(n!=6)
        { if(t==4){ t=14; }
          else if(t==9){ t=31; }
          else if(t==21){ t=42; }
          else if(t==28){ t=84; }
          else if(t==65){ t=97; }
          if(i%2==0){ b=t;  printf("\nB: %d",b); t=a; }
          else{ a=t; printf("\nA: %d",a); t=b; }
          i++;
         }
        else
        { if(i%2==0){ b=t; printf("\nB: %d",b); t=b;  }
          else{ a=t; printf("\nA: %d",a); t=a; }
        }getch();
     }
    else
    { printf("\nSNAKE_DOWN");
      if(t==98){ t=20; }
      else if(t==82){ t=40; }
      else if(t==67){ t=50; }
      else if(t==53){ t=43; }
      else if(t==17){ t=7; }
      if(n!=6)
      { if(i%2==0){ b=t;  printf("\nB: %d",b); t=a; }
        else{ a=t; printf("\nA: %d",a); t=b; }
        i++;
      } 
      else
      { if(i%2==0){ b=t; printf("\nB: %d",b); t=b;  }
        else{ a=t; printf("\nA: %d",a); t=a; }
      }
    }
   }
   if(a==100)
   { printf("\nA WON"); }
   else
   { printf("\nB WON"); }
   
   getch();
}








