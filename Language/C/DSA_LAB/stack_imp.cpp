#include<stdio.h>
#include<conio.h>
#define max 5
void main()
{ int top=-1,n,i,a[max];
  while(1)
  { system("CLS");
    printf("1.push\n2.pop\n3.traverse\n4.exit");
    scanf("%d",&n);
    switch(n)
    { case 1: if(top==max) 
              { printf("FULL"); }
              else
              { top++; 
                printf("ENTER DATA: ");
                scanf("%d",&a[top]);
              }break;
      case 2: if(top==-1)
              { printf("EMPTY"); }
              else 
              { printf("%d",a[top]);
                top--;
              }break;
      case 3: if(top==-1)
              { printf("EMPTY"); }
              else
              { for(i=top;i>=0;i--)
                { printf("%d",a[i]); }
              }break;
      case 4: exit(0);
    }getch();
  }
}
                
