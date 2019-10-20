#include<stdio.h>
#include<conio.h>
struct node
{ struct node *next;
  int d;
}*start=NULL,*t,*temp;
void insert(int data);
void traverse();
void main()
{ int ch,data;
  while(1)
  { printf("1.INSERT\n2.TRAVERSE\n3.EXIT"); 
    scanf("%d",&ch);
    switch(ch)
    { case 1:   printf("ENTER DATA");
                scanf("%d",data);
                insert(data);
                break;
      case 5:   if(start==NULL)
                { printf("EMPTY"); }
                else
                { traverse(); }
                break;
    }getch();
   } 
}
void insert(int data)
{ int ch,ct;
  t->d=data;
  printf("1.FRONT\n2LAST\n3.POS");
  if(start==NULL)
  { start=t; start->next=NULL; }
  else
  { printf("1.FRONT\n2LAST\n3.POS");
    scanf("%d",&ch);
    if(ch==1)
    { t->next=start;
      start=t;
    } 
    if(ch==2)
    { temp=start;
      while(temp->next!=NULL)
      { temp=temp->next; } 
      temp->next=t;
      t->next=NULL;
    }
    if(ch==3)
    { printf("enter pos"); 
      scanf("%d",&ch);
      ct=1; temp=start;
      while(ch-1>ct)              // 1 2 3 4 5
      { temp=temp->next; ct++; }
      t->next=temp->next;
      temp->next=t;
    }
   }
}
void traverse()
{ temp=start;
  if(temp!=NULL)
  { printf("%d->",temp->d);
    temp=temp->next;
  }
}
