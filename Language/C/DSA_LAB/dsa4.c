#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct shop
{ char item_name[20];
  int price;
  int a;
}; 
struct customer
{ char name[20];
  char phone_no[11];
  char cart[10][20];
}; 
void main()
{  struct shop s[3];
   struct customer c[3];
   int i,q,f=0,ch,n,x,y=1;
   char u[20],p[20]; 
   printf("ITEMS_NAME \n");  
   for(i=1;i<=3;i++)
   { printf("NAME \t");     scanf("%s",&s[i].item_name);
     printf("PRICE \t");    scanf("%d",&s[i].price);
     printf("QUANTITY \t"); scanf("%d",&s[i].a);
   }
   printf("REGISTER CUSTOMER DETAIL \n");
   for(i=1;i<=3;i++)
   { printf("NAME \t");     scanf("%s",&c[i].name);
     printf("PHONE_NO \t"); scanf("%s",&c[i].phone_no);
   }
   system("CLS");
   printf("USERNAME \t");   scanf("%s",&u);
   printf("PHONE_NO \t");   scanf("%s",&p);
   system("CLS");
   for(i=1;i<=3;i++)
   { if((strcmp(c[i].name,u)==0) && (strcmp(c[i].phone_no,p)==0))
      { f=1; q=i; break; }
   }
l: if(f==1)
   { for(i=1;i<=3;i++)
        { printf("%d %s",i,s[i].item_name); printf("\n");}      
          scanf("%d",&ch);
          switch(ch)
            { case 1: printf("ITEM_NAME %s",s[ch].item_name); printf("\n");
                      printf("PRICE %d",s[ch].price);         printf("\n");  
                      printf("QUANTITY %d",s[ch].a);          printf("\n");  
                      if(s[ch].a>=1)
                      { printf("1. BUY NOW 2. BUY LATER \n"); scanf("%d",&n);
                        if(n==1)
                        { strcpy(c[q].cart[y],s[ch].item_name);
                          s[ch].a=s[ch].a-1;
                          y++;
                        }  
                       }
                       else
                       { printf("out of stock !!"); } 
                       break;    
                case 2: printf("ITEM_NAME %s",s[ch].item_name); printf("\n");
                      printf("PRICE %d",s[ch].price);         printf("\n");  
                      printf("QUANTITY %d",s[ch].a);          printf("\n");  
                      if(s[ch].a>=1)
                      { printf("1. BUY NOW 2. BUY LATER \n"); scanf("%d",&n);
                        if(n==1)
                        { strcpy(c[q].cart[y],s[ch].item_name);
                          s[ch].a=s[ch].a-1;
                          y++;
                        }  
                       }
                       else
                       { printf("out of stock !!"); } 
                       break;    
               case 3: printf("ITEM_NAME %s",s[ch].item_name); printf("\n");
                      printf("PRICE %d",s[ch].price);         printf("\n");  
                      printf("QUANTITY %d",s[ch].a);          printf("\n");  
                      if(s[ch].a>=1)
                      { printf("1. BUY NOW 2. BUY LATER \n"); scanf("%d",&n);
                        if(n==1)
                        { strcpy(c[q].cart[y],s[ch].item_name);
                          s[ch].a=s[ch].a-1;
                          y++;
                        }  
                       }
                       else
                       { printf("out of stock !!"); } 
                       break;                     
              default: printf("invalid choice");                 
       }
    printf("\n");
    printf("1. BUY MORE \n 2. SEE YOUR ACCOUNT \n 3.EXIT");
    scanf("%d",&x);
    system("CLS");
    switch(x)
    { case 1: goto l;
              break;
      case 2: printf("\n NAME %s \t",c[q].name);
              printf("\n PHONE_NO %s\t",c[q].phone_no);
              printf("CART \n");
              for(i=1;i<=y;i++)
              { printf("%s",c[q].cart[i]);  printf("\n"); }
              break;
      case 3: exit(0);
    } 
   }   
    else
    { printf("invlid username and phone_no"); }
   getch();
}
