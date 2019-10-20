#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 10
struct job
{	char file_name[20];
	int  dt_created,size,number_of_pages;
}s[max];
void main()
{	int i,ch,front=-1,rear=-1;
	while(1)
	{	printf("\n 1 ENQUEUE \n 2 DEQUEUE \n 3 TRAVERSE \n 4 EXIT \n");
		scanf("%d",&ch);
		switch(ch)
		{	case 1: if(rear==max-1)
					{ printf("QUEUE IS FULL");	}	
					else
					{ rear++;
					  printf("\n FILE_NAME \t");     scanf("%s",&s[rear].file_name);
					  printf("DATE_CREATED \t");     scanf("%d",&s[rear].dt_created);
					  printf("SIZE \t");             scanf("%d",&s[rear].size);	
					  printf("NUMBER_OF_PAGES \t");  scanf("%d",&s[rear].number_of_pages);
                    }
                    break;
            case 2: if(rear==front)
					{	printf("QUEUE IS EMPTY");	}        
					else
					{ front++;
					  printf("DEQUEUE ELEMENTS \n");
					  printf("\n FILE_NAME \t %s",s[front].file_name);
					  printf("DATE_CREATED \t %d",s[front].dt_created);
					  printf("SIZE \t %d",s[front].size);	
					  printf("NUMBER_OF_PAGES \t %d",s[front].number_of_pages);
					}
					break;
			case 3: if(rear==front)
			        {	printf("QUEUE IS EMPTY");	}		
			        else
			        { for(i=front+1;i<=rear;i++)
			          {
					  printf("\n-------------------------------\n"); 
					  printf("\n FILE_NAME \t %s",s[i].file_name);
	     			  printf("\nDATE_CREATED \t %d",s[i].dt_created);
					  printf("\nSIZE \t %d",s[i].size);	
					  printf("\nNUMBER_OF_PAGES \t %d",s[i].number_of_pages);
					  }
					}
					break;
			case 4: exit(0);		
			default: printf("wrong choice");
				}
		}
		getch();
}
