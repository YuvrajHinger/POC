#include<stdio.h>
#include<conio.h>
void main()
{ struct node
  {  struct node *next;
     char n[20];
     char a_n[5][20];
     int pg;
     int pr;
  }*start=NULL,*t,*temp;
  int ch,i,page,price,pos,c;
  char name[20],a_name[5][20];
  while(1)
  {l: system("CLS");
   printf("1.INSERT\n2.DISPLAY\n3.EXIT");
   scanf("%d",&ch);
   switch(ch)
   { case 1:        t=(struct node *)malloc(sizeof(struct node));
                    printf("BOOK_NAME: ");   scanf("%s",&name);
                    printf("AUTHOR_NAME \n"); 
                    for(i=0;i<5;i++)
                    { scanf("%s",&a_name[i]); }
                    printf("PAGES: "); scanf("%d",&page);
                    printf("PRICE: "); scanf("%d",&price);
                    strcpy(t->n,name);
                    for(i=0;i<5;i++)
                    { strcpy(t->a_n[i],a_name[i]); }
                    t->pg=page;
                    t->pr=price;
              printf("\n 1.AT FRONT \n 2.AT POS \n 3.AT LAST"); scanf("%d",&ch);   
              switch(ch)
              {   case 1: if(start==NULL)
                          { start=t;  t->next=NULL; }
                          else
                          { t->next=start;    start=t; }                   
                          goto l;
                  case 2: if(start==NULL)
                          { start=t;  t->next=NULL; }
                          else
                          { printf("enter pos"); scanf("%d",&pos); 
                            c=1; temp=start;
                            while(c<pos-1)
                           { temp=temp->next; c++; }  t->next=temp->next;   temp->next=t; 
                          }
                          goto l;
                  case 3: if(start==NULL)
                          { start=t;  t->next=NULL; }
                          else 
                          { temp=start; 
                            while(temp->next!=NULL)
                            { temp=temp->next; }  temp->next=t;  t->next=NULL;
                          }goto l;
                 default: printf("invlaid entry"); goto l;
                }
    case 2: if(start==NULL)
            { printf("NO DATA THERE!!"); }
            else
            { temp=start;  system("CLS");
               while(temp!=NULL)
                {   printf("BOOK_NAME: %s",temp->n);
                    printf("\nAUTHOR_NAME"); 
                    for(i=0;i<5;i++)
                    { printf("\n%s",temp->a_n[i]); }
                    printf("\nPAGES: %d",temp->pg);
                    printf("\nPRICE: %d",temp->pr);
                    printf("\n____________________\n");
                    temp=temp->next; 
                }
            }break;
    case 3: exit(0);
    default: printf("invalid");
   }getch();
  }   
}
