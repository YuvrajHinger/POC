/*Create a priority queue of patients {name, age, problem, token_no}. Perform enqueue and
dequeue operations based on the priority of token. Also, count for the number of patients
with specific problem.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define max 3
struct patients
{   char name[20];
    int  age;
    char problem[20];
    int  token_no;
};
void main()
{   struct patients p[max]; int i,rear=-1,front=-1,count=0;
    for(i=0;i<max;i++)
    { p[i].token_no=i;
      printf("ENTER NAME \t");         scanf("%s",&p[i].name);
      printf("ENTER AGE \t");          scanf("%d",&p[i].age);
      printf("ENTER PROBLEM_NAME \t"); scanf("%s",&p[i].problem);   
    }
    while(rear!=max-1)
    {   rear++;
        printf("\n NAME \t %s",p[rear].name);
        printf("\n AGE \t  %d",p[rear].age);
        printf("\n PROBLEM_NAME \t %s",p[rear].problem);   
        count=0;
        for(i=0;i<rear;i++)
        { if(strcmp(p[rear].problem,p[i].problem)==0)
          { count++; }
        }
        printf("\n %d have same problem",count);
        front++;
    }   
    getch();
}
