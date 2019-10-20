#include<stdio.h>
#include<conio.h>
#define max 5
struct patients
{ char name[20],prbl[20];
  int age,tkn,ct;
}p[max],t;
int front=-1,rear=-1;
void enqueue()
{ int i;
  if(rear==max-1)
  { printf("ENTRY FULL !!!"); }
  else
  { rear++; 
    printf("ENTER TOKEN_NO: ");  scanf("%d",&p[rear].tkn); 
    printf("NAME \t");           scanf("%s",&p[rear].name); 
    printf("AGE \t");            scanf("%d",&p[rear].age); 
    printf("PROBLEM \t");        scanf("%s",&p[rear].prbl);
  }
} 
void dequeue()
{ if(front==rear)
  { printf("NO PATIENTS THERE !!!"); }
  else
  { front++;
    printf("\nNAME: %s",p[front].name);
    printf("\nAGE: %d",p[front].age);
    printf("\nPROBLEM: %s",p[front].prbl);
  } 
}
void traverse()
{ int i;
  if(front==rear)
  { printf("NO PATIENTS THERE !!!"); }
  else
  { for(i=front+1;i<=rear;i++) 
    { printf("\nTOKEN_NO: %d",p[i].tkn); 
      printf("\nNAME: %s",p[i].name);
      printf("\nAGE: %d",p[i].age);
      printf("\nPROBLEM: %s",p[i].prbl);
      printf("\nPATIENTS WITH SAME PROBLEM: %d",p[i].ct); 
    } 
  }
}
void priority()
{  int i,j;
   if(rear>=0)
   { for(i=front+1;i<=rear;i++)
     { for(j=i+1;j<=rear;j++)
       { if(p[i].tkn>p[j].tkn)
         { t=p[i]; p[i]=p[j]; p[j]=t; }
       }
     }
   }
}
void check()
{ int i,j,s=0;
   if(rear>0)
   { for(i=front+1;i<=rear;i++)
     { for(j=i+1;j<=rear;j++)
       { if(strcmp(p[i].prbl,p[j].prbl)==0)
         { s++; }
       }p[i].ct=s; s=0;
     }
   }   
}
void main()
{ int data,ch;
  while(1)
  { system("CLS");
    printf("\n1.enqueue\n2.dequeue\n3.traverse\n4.exit\n");
    printf("ENTER YOUR CHOICE \t"); 
    scanf("%d",&ch);
    priority();
    switch(ch)
    { case 1:enqueue();
             break;
      case 2:dequeue();
             break;
      case 3:check();
             traverse();
             break;
      case 4:exit(0);
      default:printf("INVALID CHOICE");
    }
    getch();
  }
  getch();
}
