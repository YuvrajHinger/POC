#include<stdio.h>
#include<conio.h>
void main()
{ struct node
    { char b_no[11],frm[20],to[20],ti[10],stp[5][20];
      struct node * next;
    }*start=NULL ,*t,*temp;
    int i,c,ct,ch,s;
    char from[20],to1[20],stops[5][20],route1[20],route2[20],time[10],no[11];
    while(1)
    {   system("CLS");
        printf("1.INSERT\n2.SEARCH\n3.TRAVERSE\n4.EXIT");  scanf("%d",&ch);     
        switch(ch)
        { case 1:   t=(struct node *)malloc(sizeof(struct node));
                    printf("BUS_NO: ");     scanf("%s",&no);
                    printf("FROM: ");       scanf("%s",&from);
                    printf("TO: ");         scanf("%s",&to1);
                    printf("START_TIME: "); scanf("%s",&time);
                    printf("STOPS \n"); 
                    for(i=0;i<5;i++)
                    { scanf("%s",&stops[i]); }
                    for(i=0;i<5;i++)
                    { strcpy(t->stp[i],stops[i]); }
                    strcpy(t->frm,from);  strcpy(t->to,to1); 
                    strcpy(t->b_no,no);   strcpy(t->ti,time);
                    if(start==NULL)
                    { start=t;  t->next=NULL; }
                    else 
                    { t->next=start;    start=t; }                   
                    break;
         case 2:  if(start==NULL)
                  { printf("NO DATA THERE!"); }
                  else
                  { printf("GIVE ROUTE: "); scanf("%s%s",&route1,&route2);
                    temp=start;  s=0;
                    while(temp!=NULL)
                    { for(i=0;i<5;i++)
                      { if(strcmp(temp->stp[i],route1)==0)
                        {for(i=0;i<5;i++)
                         { if(strcmp(temp->stp[i],route2)==0)
                           { printf("BUS_NO: %s",temp->b_no); s++; } 
                         }//forloop
                        }//if
                      }//for
                      temp=temp->next;
                     }//while  
                    if(s==0)
                    { printf("NO BUS IS THERE FOR GIVEN ROUTE"); }
                    else
                    { printf("\n%d BUS FOR GIVEN ROUTE !!",s); }
                   }//else
                   break;
        case 3:   if(start==NULL)
                  { printf("NO DATA THERE!!"); }
                  else
                  { temp=start;  system("CLS");
                    while(temp!=NULL)
                    {   printf("BUS_NO: %s",temp->b_no);
                        printf("\nSTOPS"); 
                        for(i=0;i<5;i++)
                        { printf("\n%s",temp->stp[i]); }
                    printf("\nFROM: %s",temp->frm);
                    printf("\nTO: %s",temp->to);
                    printf("\n____________________\n");
                    temp=temp->next; 
                }
            }break;
        case 4: exit(0);
        default: printf("INVALID ENTRY!!");
     }//switch
   getch();
  }//while   
}//main
