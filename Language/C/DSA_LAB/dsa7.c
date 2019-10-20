#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 5
struct student
{	char name[20];
	int age;
	char address[20];
	char phone[11];
}s[max];
void main()
{	int i,ch,top=-1;
	while(1)
	{ printf("\n 1 PUSH \n 2 POP \n 3 PEEK \n 4 TRAVERSE \n 5 EXIT \n");
	  scanf("%d",&ch);
	  switch(ch)
      {	case 1: if(top==max-1)
			    { printf("STACK IS OVERFLOW");        }
				else
				{ top++; printf("\n");
				  printf("NAME \t"); scanf("%s",&s[top].name);
				  printf("AGE \t");     scanf("%d",&s[top].age);
				  printf("ADDRESS \t"); scanf("%s",&s[top].address);	
				  printf("PHONE_NO \t"); scanf("%s",&s[top].phone);
				}		
				break;		
		case 2: if(top==-1)
				{ printf("STACK IS EMPTY"); }
				else
				{ printf("POP ELEMENT IS \n");
				  printf("\n NAME \t %s",s[top].name);
				  printf("AGE \t %d",s[top].age);
				  printf("ADDRESS \t %s",s[top].address);	
				  printf("PHONE_NO \t %s",s[top].phone);
				  top--;
				}
				break;
		case 3: if(top==-1)
				{ printf("STACK IS EMPTY \n"); }			
	       		else
		        { printf("PEEK ELEMENT IS \n");
		          printf("\n NAME \t %s",s[top].name);
				  printf("AGE \t %d",s[top].age);
				  printf("ADDRESS \t %s",s[top].address);	
				  printf("PHONE_NO \t %s",s[top].phone);
				}
				break;
		case 4: if(top==-1)
				{ printf("STACK IS EMPTY \n"); }
				else
				{ for(i=top;i>=0;i--)
				  {	  printf("TRAVERSE \n");
			          printf("\n NAME \t %s",s[i].name);
					  printf("\n AGE \t %d",s[i].age);
					  printf("\n ADDRESS \t %s",s[i].address);	
					  printf("\n PHONE_NO \t %s",s[i].phone);
				   }
				}
				break;
		case 5: exit(0);
		default: printf("WRONG CHOICE \n");
	 }
	}
	getch();
}
