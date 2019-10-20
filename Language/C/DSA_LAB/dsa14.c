/*Take the list of vegetables {name, price, vendor}. Search for a specific vegetable and list
the vendors ordered by price using selection sort.*/
#include<stdio.h>
#include<conio.h>
void main()
{   struct node
    { char v_name[20];
      int price[5],qt;
      char vg_n[5][10];
      struct node * next;
    }*start=NULL ,*t,*temp;
    int i,c,ct,ch,s,pr[5];
    char v_nam[20],nam[5][10];
    while(1)
    {   system("CLS");
        printf("1.INSERT\n2.TRAVERSE\n3.SEARCH\n4.EXIT");
        scanf("%d",&ch);
        system("CLS");
        switch(ch)
        {  case 1:  t=(struct node *)malloc(sizeof(struct node));
                    printf("VENDOR_NAME: ");     
                    scanf("%s",&v_nam);
                    for(i=1;i<=5;i++)
                    { printf("VEGETABLE_NAMES: ");
                      scanf("%s",&nam[i]);
                      printf("PRICE: ");
                      scanf("%d",&pr[i]); 
                    }
                    strcpy(t->v_name,v_nam); 
                    for(i=1;i<=5;i++)
                    { strcpy(t->vg_n[i],nam[i]); 
                      t->price[i]=pr[i];
                    }
                    if(start==NULL)
                    { start=t;  t->next=NULL; }
                    else 
                    { temp=start; 
                       while(temp->next!=NULL)
                       { temp=temp->next; }  temp->next=t;  t->next=NULL;
                    }break;
            case 2: if(start==NULL)
                    { printf("NO DATA THERE!!"); }
                    else
                    { temp=start;  
                      while(temp!=NULL)
                      { printf("VENDOR_NAME: %s",temp->v_name);
                        for(i=1;i<=5;i++)
                        { printf("\nVEGETABLE_NAME: %s",temp->vg_n[i]); 
                          printf("\nPRICE: %d",temp->price);
                        }
                        printf("\n____________________\n");
                        temp=temp->next; 
                      }
                    }break;
            case 3: if(start==NULL)
                    { printf("empty"); }
                    else
                    {  printf("VEGETABLE_NAME: "); 
                       scanf("%s",&nam);
                       temp=start;  s=0;
                       while(temp!=NULL)
                       { for(i=1;i<=5;i++)
                         { if(strcmp(temp->vg_n[i],nam[i])==0) 
                           { printf("\nPRICE: %d",temp->price);
                             s++;
                             printf("\n1.ORDER");
                             scanf("%d",&ch);
                             if(ch==1)
                             { printf("QUANTITY: "); 
                               scanf("%d",&temp->qt); 
                               temp->qt=temp->qt*temp->price;
                               printf("TOTAL_AMOUNT: %d",temp->qt); 
                             } 
                           }
                         }
                         temp=temp->next;
                       }
                        if(s==0)
                        { printf("DATA NOT FOUND"); }
                     }break;
            case 4: exit(0);
            default: printf("INVALID ENTRY!!");
     }//switch
     getch();
    }//while
}//main
