#include<stdio.h> 
#include<conio.h>
void main()
{ struct node
  {  struct node *next;
     char v_no[20];
     char type[20];
     struct toll
     { char name[20];
       int amount;
     }toll[5],tl;
  }*start=NULL,*t,*temp;
  int ch,i,j;
  while(1)
  { system("CLS");
    printf("1.INSERT\n2.DISPLAY\n3.EXIT");
    scanf("%d",&ch);
    switch(ch)
    { case 1:       t=(struct node *)malloc(sizeof(struct node));
                    printf("VEHICLE_NO: ");   
                    scanf("%s",&t->v_no);
                    printf("TYPE: "); 
                    scanf("%s",&t->type);
                    for(i=0;i<5;i++)
                    { printf("TOLL_NAME & TOLL_AMOUNT\n");
                      scanf("%s%d",&t->toll[i].name,&t->toll[i].amount);
                      if(i>1)
                      { for(j=0;j<i;j++)
                        { if(t->toll[i].amount<t->toll[j].amount)
                          { t->tl=t->toll[i];
                            t->toll[i]=t->toll[j];
                            t->toll[j]=t->tl;
                          }
                        }
                      }
                    }
                    if(start==NULL)
                    { start=t;  t->next=NULL; }
                    else 
                    { temp=start; 
                      while(temp->next!=NULL)
                      { temp=temp->next; }  temp->next=t;  t->next=NULL;
                    }
    case 2: if(start==NULL)
            { printf("NO DATA THERE!!"); }
            else
            { temp=start;  system("CLS");
               while(temp!=NULL)
                {   printf("VEHICLE_NO: %s",temp->v_no);
                    for(i=0;i<5;i++)
                    { printf("\n%s\t%d",t->toll[i].name,t->toll[i].amount);}
                    printf("\n____________________\n");
                    temp=temp->next; 
                }
            }break;
    case 3: exit(0);
    default: printf("invalid");
   }getch();
  }   
}
