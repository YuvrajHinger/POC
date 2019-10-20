#include<stdio.h>
#include<conio.h>
void main()
{ 
    struct node
    { int d;
      struct node * next;
    }*start=NULL ,*t,*temp;
    int n,c,ct,s,data,pos;
    while(1)
    {   printf("\n \n");
        printf("INSERT");
        printf("\n 1.AT FRONT \n 2.AT POS \n 3.AT LAST \n \n");
        printf("DELETE");
        printf("\n 4.AT FRONT \n 5.AT POS \n 6.AT LAST \n \n");
        printf("\n 7.SEARCH \n 8.COUNT \n 9.TRAVERSE");
        scanf("%d",&n);     system("CLS");
        switch(n)
        {   case 1: t=(struct node *)malloc(sizeof(struct node));
                    printf("enter data");   scanf("%d",&data);
                    t->d=data;
                    if(start==NULL)
                    { start=t;  t->next=NULL; }
                    else
                    { t->next=start;    start=t; }                   
                    break;
            case 2: t=(struct node *)malloc(sizeof(struct node));
                    printf("enter data");   scanf("%d",&data);
                    t->d=data;
                    if(start==NULL)
                    { start=t;  t->next=NULL; }
                    else
                    { printf("enter pos"); scanf("%d",&pos); 
                     c=1; temp=start;
                      while(c<pos-1)
                      { temp=temp->next; c++; }  t->next=temp->next;   temp->next=t; 
                    }break;
            case 3: t=(struct node *)malloc(sizeof(struct node));
                    printf("enter data");   scanf("%d",&data);
                    t->d=data;
                    if(start==NULL)
                    { start=t;  t->next=NULL; }
                    else 
                    { temp=start; 
                      while(temp->next!=NULL)
                      { temp=temp->next; }  temp->next=t;  t->next=NULL;
                    }break;
            case 4: if(start==NULL)
                    { printf("empty"); }
                    else if(start->next==NULL)
                    { t=start; free(t); start=NULL; }
                    else
                    { t=start;  start=start->next; free(t); }break;
            case 5: if(start==NULL)
                    { printf("empty"); }
                    else if(start->next==NULL)
                    { t=start; free(t); start=NULL; }
                    else
                    { printf("enter pos");   scanf("%d",&pos);
                      c=1; t=start; 
                      while(c<pos)
                      { temp=t; t=t->next; c++; } temp->next=t->next; free(t);
                    }break;
            case 6: if(start==NULL)
                    { printf("empty"); }
                    else if(start->next==NULL)
                    { t=start; free(t); start=NULL; }
                    else
                    { t=start;
                      while(t->next->next!=NULL)
                      { t=t->next; } free(t->next);  t->next=NULL;
                    }break;
            case 7: if(start==NULL)
                    { printf("empty"); }
                    else
                    {  printf("search no"); scanf("%d",&data);
                       temp=start;  s=0;
                       while(temp!=NULL)
                       { if(temp->d==data)
                         { s++; } temp=temp->next;
                       }  
                       if(s==0)
                       { printf("DATA NOT FOUND"); }
                       else
                       { printf("found !!"); }
                    }break;
            case 8: if(start==NULL)
                    { printf("empty"); }
                    else
                    { temp=start;   ct=0;
                      while(temp!=NULL)
                      { ct++; temp=temp->next; }
                      printf("TOTAL ELEMENT=%d",ct);
                    }break; 
            case 9: if(start==NULL)
                    { printf("empty"); }
                    else
                    { temp=start;   
                      while(temp!=NULL)
                      { printf("%d ->",temp->d); temp=temp->next; }
                    }break;
            case 10: exit(0);
            default: printf("invalid");
        }
    }
    getch();
}
