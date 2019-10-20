#include<stdio.h>
#include<conio.h>
void main()
{ struct node
  { 
    int d;
    int p; 
    struct node *next;
  }*t,*start=NULL,*temp;
  int c=1,power,data;
  while(c)
  { 
    t=(struct node*)malloc(sizeof(struct node));
    printf("POWER: ");  
    scanf("%d",&power);
    printf("DATA: ");
    scanf("%d",&data);
    t->p=power; 
    t->d=data;
    if(start==NULL)
    { 
       t->next=NULL;
       start=t;
    }
    else
    { 
      temp=start;
      while(temp->next!=NULL)
      { 
        temp=temp->next; 
      }
      temp->next=t; 
      t->next==NULL;
    }
    printf("INSERT_MORE\n0.NO\t1.YES"); 
    scanf("%d",&c);
  }
  if(start==NULL)
  { 
    printf("EMPTY"); 
  }
  else
  {  
    temp=start; 
    while(temp!=NULL)
    { if(temp->p!=0)
      { 
        printf("%dx^%d+",temp->d,temp->p); 
        temp=temp->next; 
      }
      else
      {
        printf("%d",temp->d); 
        temp=temp->next; 
      }
    }
  }
}
