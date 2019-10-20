#include<stdio.h>
#include<conio.h>
void main()
{
    struct node
    {
        struct node *next;
        int d;
    }*start=NULL,*t,*temp;
    int n,data,s,pos,c,ct;
    while(1)
    {    system("CLS");
         printf("1.INSERT at front \n2.INSERT at pos \n3.INSERT at last \n");
         printf("4.DELETE at front \n5.DELETE at pos \n6.DELETE at last \n");
         printf("7.search \n8.count \n9.traverse");
         scanf("%d",&n);
         switch(n)
         {
            case 1: t=(struct node *)malloc(sizeof(struct node));
                    printf("enter data");   scanf("%d",&data);
                    t->d=data;
                    if(start==NULL)
                    { start=t; t->next=start; }
                    else
                    { temp=start;
                      while(temp->next!=start)
                      { temp=temp->next; }
                      temp->next=t; t->next=start; start=t;
                    }break;
            case 2: t=(struct node *)malloc(sizeof(struct node));
                    printf("enter data");   scanf("%d",&data);
                    t->d=data;
                    if(start==NULL)
                    { start=t; t->next=start; }
                    else
                    { printf("enter pos");  scanf("%d",&pos);
                      temp=start; c=1;
                      while(c<pos-1)
                      { temp=temp->next; c++; }
                      t->next=temp->next;    temp->next=t;
                    }
                    break;
            case 3: t=(struct node *)malloc(sizeof(struct node));
                    printf("enter data");   scanf("%d",&data);
                    t->d=data;
                    if(start==NULL)
                    { start=t; t->next=start; }
                    else
                    { temp=start;
                      while(temp->next!=start)
                      { temp=temp->next; }
                      temp->next=t;     t->next=start;
                    }
                    break;
            case 4: if(start==NULL)
                    { printf("link_list is empty"); }
                    else if(start->next==start)
                    { t=start;  free(t);    start=NULL; }
                    else
                    { temp=start;
                      while(temp->next!=start)
                      { temp=temp->next; }
                      temp->next=start->next;
                      t=start; start=start->next; free(t);
                    }
                    break;
            case 5: if(start==NULL)
                    { printf("link_list is empty"); }
                    else if(start->next==start)
                    { t=start;  free(t);    start=NULL; }
                    else
                    { printf("enter pos"); scanf("%d",&pos);
                      t=start; c=1;
                      while(c<pos)
                      { temp=t; t=t->next; c++; }
                      temp->next=t->next;   free(t);
                    }
                    break; 
            case 6: if(start==NULL)
                    { printf("link_list is empty"); }
                    else if(start->next==start)
                    { t=start;  free(t);    start=NULL; }          
                    else
                    { t=start;
                      while(t->next->next!=start)
                      { t=t->next; }
                      free(t->next); t->next=start;
                    }
                    break;
            case 7: if(start==NULL)
                    { printf("link_list is empty"); }
                    else
                    { printf("DATA TO BE SEARCH");  scanf("%d",&data);
                      s=0;  t=start;
                      do
                      { if(t->d==data)
                        { s++; }
                        t=t->next;
                      }while(t!=start);
                    if(s==0)
                    { printf("not found!!!"); }
                    else
                    { printf("found!!!"); }
                    }
                    break;
            case 8: if(start==NULL)
                    { printf("link_list is empty"); }
                    else
                    { ct=0; t=start;
                      do
                      { ct++;
                        t=t->next;
                      }while(t!=start);
                    printf("totel nodes=%d",ct); 
                    }
                    break;
            case 9: if(start==NULL)
                    { printf("link_list is empty"); }
                    else
                    { temp=start;
                      do
                      { printf("%d->",temp->d);
                        temp=temp->next;
                      }while(temp!=start);
                     }break;
            case 10: exit(0);
        }
    getch();
    }
}             
