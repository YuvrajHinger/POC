#include<stdio.h>
#include<conio.h>
void main()
{ struct node
  { int d,p; 
    struct node *next;
  }*t,*start1=NULL,*temp1;//*start2=NULL,*start3=NULL,*temp2,*temp3; 
  int c=1,power,data;
  printf("ENTER_1ST_POLYNOMIAL\n");
  while(c)
  { t=(struct node*)malloc(sizeof(struct node));
    printf("POWER & DATA");  
    scanf("%d%d",&power,&data);
    t->p=power; t->d=data;
    if(start1==NULL)
    { t->next=NULL; start1=t; }
    else
    { temp1=start1;
      while(temp1->next!=NULL)
      { temp1=temp1->next; }
        temp1->next=t; t->next==NULL;
    }printf("INSERT_MORE\n0.NO\t1.YES"); scanf("%d",&c);
  }
  if(start1==NULL)
  { printf("EMPTY"); }
  else
  { temp1=start1; 
    while(temp1!=NULL)
    { if(temp1->p!=0)
      { printf("%dx^%d+",temp1->d,temp1->p); temp1=temp1->next; }
      else
      { printf("%d",temp1->d); temp1=temp1->next; }
    }
  }
  printf("ENTER_2ND_POLYNOMIAL\n"); c=1;
  while(c)
  { t=(struct node*)malloc(sizeof(struct node));
    printf("POWER & DATA");  scanf("%d%d",&t->p,&t->d);
    if(start2==NULL)
    { t->next=NULL; start2=t; }
    else
    { temp2=start2;
      while(temp2->next!=NULL)
      { temp2=temp2->next; }
      temp2->next=t; t->next==NULL;
    }printf("INSERT_MORE\n0.NO\t1.YES"); scanf("%d",&c);
  }  
  temp1=start1;  temp2=start2; temp3=start3;
  while(temp1!=NULL && temp2!=NULL)
  { t=(struct node*)malloc(sizeof(struct node));
    if(temp1->p==temp2->p)
    { t->p=temp1->p;  t->d=temp1->d+temp2->d;
      temp1=temp1->next;  temp2=temp2->next;
    }
    else if(temp1->p>temp2->p)
    { t->p=temp1->p;  t->d=temp1->d;
      temp1=temp1->next;
    }
    else
    { t->p=temp2->p;  t->d=temp2->d;
      temp2=temp2->next;
    }
    if(start3==NULL)
    { start3=t; start3->next=NULL; }
    else
    { temp3=start3; 
      while(temp3->next!=NULL)
      { temp3=temp3->next; }
      temp3->next=t; t->next=NULL;
    }
  }
  while(temp1!=NULL)
  { t=(struct node*)malloc(sizeof(struct node));
    t->p=temp1->p;  t->d=temp1->d;
    temp1=temp1->next;
    if(start3==NULL)
    { start3=t; start3->next=NULL; }
    else
    { temp3=start3; 
      while(temp3->next!=NULL)
      { temp3=temp3->next; }
      temp3->next=t; t->next=NULL;
    }
   }
  while(temp2!=NULL)
  { t=(struct node*)malloc(sizeof(struct node));
    t->p=temp2->p;  t->d=temp2->d;
    temp2=temp2->next;
    if(start3==NULL)
    { start3=t; start3->next=NULL; }
    else
    { temp3=start3; 
      while(temp3->next!=NULL)
      { temp3=temp3->next; }
      temp3->next=t; t->next=NULL;
    }
   }
   printf("ADDITION_OF_POLYNOMIAL_IS\n");
   if(start3==NULL)
    { printf("EMPTY"); }
    else
    { temp3=start3; 
      while(temp3!=NULL)
      { printf("%dx^%d+",temp3->d,temp3->p);
        temp3=temp3->next; 
      }
    }
}
