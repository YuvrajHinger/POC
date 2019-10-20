#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{   struct node
    {
        struct node *next;
        struct node *back;
        char roll_no[11];
        char name[20];
        char event_name[20];
    }*start=NULL,*t,*temp;
    int ch,s,pos,c,ct;
    char r[11],n[20],nm[20];
    while(1)
    {    system("CLS");
         printf("1.INSERT\n2.search\n3.traverse\n4.EXIT");
         scanf("%d",&ch); system("CLS");
         switch(ch)
         {
            case 1: t=(struct node *)malloc(sizeof(struct node));
                    printf("ROLL_NO: ");    scanf("%s",&r);
                    printf("NAME: ");       scanf("%s",&n);
                    printf("EVENT_NAME: "); scanf("%s",&nm);
                    strcpy(t->roll_no,r);
                    strcpy(t->name,n);
                    strcpy(t->event_name,nm);
                    if(start==NULL)
                    { t->next=NULL; t->back==NULL; start=t; }
                    else
                    { temp=start;
                      while(temp->next!=NULL)
                      { temp=temp->next; }
                      temp->next=t; t->back=temp; t->next=NULL;
                    }break;
            case 2: if(start==NULL)
                    { printf("DATA EMPTY!!"); }
                    else
                    { printf("STUDENT_NAME: ");  scanf("%s",&n);
                      s=0;  t=start;
                      while(t!=NULL)
                      { if(strcmp(t->name,n)==0)
                        {  strcpy(nm,t->event_name);
                           s++; break;
                        }
                        t=t->next;
                      }
                      if(s==0)
                      { printf("NOT FOUND!!!"); }
                      else
                      { printf("\nSTUDENT_WITH_SAME_EVENT");
                        t=start;
                        while(t!=NULL)
                        { if(strcmp(t->event_name,nm)==0)
                          {  printf("\n%s",t->name); }
                          t=t->next;
                        }
                      }
                    }break;
            case 3: if(start==NULL)
                    { printf("EMPTY DATA!!!"); }
                    else
                    { temp=start;
                      while(temp!=NULL)
                      { printf("\nNAME: %s",temp->name);
                        printf("\nROLL_NO: %s",temp->roll_no);
                        printf("\nEVENT_NAME: %s",temp->event_name);
                        printf("\n______________________\n");
                        temp=temp->next;
                      }
                    }break;
            case 4: exit(0);
        }
    getch();
    }
}             
