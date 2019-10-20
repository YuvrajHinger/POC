#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{   struct node
    {
        struct node *next;
        struct node *back;
        char name[20];
        int token_no;
    }*start=NULL,*t,*temp,*temps;
    int ch,s,no;
    char n[20];
    while(1)
    {    system("CLS");
         printf("1.INSERT\n2.EXIT");
         scanf("%d",&ch); system("CLS");
         switch(ch)
         {
            case 1: t=(struct node *)malloc(sizeof(struct node));
                    printf("NAME: ");      
                    scanf("%s",&n);
                    printf("TOKEN_NO: ");   
                    scanf("%d",&no);
                    strcpy(t->name,n);
                    t->token_no=no;
                    if(start==NULL)
                    { t->next=NULL; 
                      t->back==NULL; 
                      start=t; 
                    }
                    else if(start->token_no>t->token_no)
                    { t->back=NULL;
                      t->next=start;
                      start->back=t;
                      start=t;
                    }
                    else
                    { temp=start; s=0;
                      while(temp!=NULL)
                      { if(temp->token_no>t->token_no)
                        { t->back=temp->back;
                          temp->back=t;
                          temps->next=t;
                          t->next=temp;
                          s++;
                          break;
                        }temps=temp;
                        temp=temp->next;
                      }
                      if(s==0)
                      { temps->next=t; t->back=temps; t->next=NULL; }
                    }
                    if(start==NULL)
                    { printf("EMPTY DATA!!!"); }
                    else
                    { temp=start;
                      while(temp!=NULL)
                      { printf("\nNAME: %s",temp->name);
                        printf("\nTOKEN_NO: %d",temp->token_no);
                        printf("\n______________________\n");
                        temp=temp->next;
                      }
                    }break;
            case 2: exit(0);
            default: printf("INVALID ENTRY!!");
        }
    getch();
    }
}             
