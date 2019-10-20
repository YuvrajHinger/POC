#include<stdio.h>
#include<conio.h>
#define max 5
void main()
{ int a[max],i,n,front=-1,rear=-1;
  while(1)
  { system("CLS");
    printf("1.ENQUEUE\n2.DEQUEUE\n3.TRAVERSE\n4.EXI");
    scanf("%d",&n);
    switch(n)
    { case 1: system("CLS");
              printf("1.FRONT\n2.REAR");
              scanf("%d",&n);
              switch(n)
              { case 1:   if(front==-1)
                          { printf("NOT VALID ENTRY"); }
                          else
                          { printf("ENTER DATA");
                            scanf("%d",&a[front]);
                            front--;
                          }break;
                case 2:   if(rear==max-1)
                          { printf("FULL"); }
                          else
                          { rear++; 
                            printf("ENTER DATA");
                            scanf("%d",&a[rear]);
                          }break;
              }break;
      case 2: system("CLS");
              printf("1.FRONT\n2.REAR");
              scanf("%d",&n);
              switch(n)
              { case 1:   if(front==rear)
                          { printf("EMPTY"); }
                          else
                          { front++;
                            printf("%d",a[front]);
                          }break;
                case 2:   if(front==rear)
                          { printf("EMPTY"); }
                          else
                          { printf("%d",a[rear]);
                            rear--; 
                          }break;
              }break;
      case 3: if(rear==front)
              { printf("EMPTY"); } 
              else
              { for(i=front+1;i<=rear;i++)
                { printf("%d",a[i]); }
              }break;
      case 4: exit(0);
      default: printf("WRONG_CHOICE");
    }getch();
  }
}
