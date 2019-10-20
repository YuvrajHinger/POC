#include<stdio.h>
#include<conio.h>
struct student
{ char roll_no[11];
  char name[20];
  char sub[3][20];
  char labs[3][20];
  int cost;
};
void form(struct student *);
void display(struct student *);
void main()
{ struct student s[3];
  int i,j;
  char sb[3][20];
  char lb[3][20];
  printf("REGISTRATION \n");
  for(i=0;i<3;i++)
  { printf("NAME \t");    gets(s[i].name);
    printf("ROLL-no \t"); gets(s[i].roll_no);
    s[i].cost=0;
  } printf("THEORY SUBJECT NAME \n");
  for(i=0;i<3;i++)
  { gets(sb[i]); }
  printf("LABS SUBJECT NAME \n");
  for(i=0;i<3;i++)
  { gets(lb[i]); }
  for(i=0;i<3;i++)
  { for(j=0;j<3;j++)  
    { strcpy(s[i].sub[j],sb[j]); 
      strcpy(s[i].labs[j],lb[j]);
    }
  }
  form(s);
  display(s);
  getch();
}
void form(struct student*s)
{  int i,j,sbcost,lbcost;
   printf("ONE THEORY_SUBJECT FORM FEES \t"); scanf("%d",&sbcost);
   printf("ONE LABS SUBJECT FORM FEES \t");   scanf("%d",&lbcost);
   for(i=0;i<3;i++)
   { for(j=0;j<3;j++)
     { s[i].cost=s[i].cost+sbcost+lbcost; }
   } 
}
void display(struct student *s)
{   int i;
    printf("DISPLAY \n");
    for(i=0;i<3;i++)
    { printf("\n NAME \t"); puts(s[i].name);
      printf("ROLL-no \t"); puts(s[i].roll_no);
      printf("TOTAL EXAM FORM FEES %d",s[i].cost);
    }
} 
