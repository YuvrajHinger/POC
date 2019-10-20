/* Create a structure student {roll_no, name, bloodgroup, mobileno, message}
   Make a function that sends message to all the students 
   who are of a particular blood_group. */
#include<stdio.h>
#include<conio.h>
struct student
{ char roll_no[11];
  char name[20];
  char bloodgroup[10];
  char mobileno[11];
  char message[50];
};
void send(struct student *);
static int f;
void main()
{ struct student s[3],c[3];
  int i,j=1; char a[20];
  printf("REGISTRATION \n");
  for(i=1;i<=3;i++)
  { printf("%d \n",i);
	printf("NAME \t");     gets(s[i].name);
	printf("ROLL_NO \t");	  gets(s[i].roll_no);
	printf("BLOOD GROUP \t"); gets(s[i].bloodgroup);
	printf("MOBILE_NOS \t");  gets(s[i].mobileno);
  }
  printf("BLOODGROUP TO BE FIND \t"); gets(a);
  for(i=1;i<=3;i++)
  { if(strcmp(s[i].bloodgroup,a)==0)
   	{ c[j]=s[i];	j++; f++; }
  }
  if(f==0)
  {	printf("\n NOT FOUND !!"); }
  else
  { printf("\n %d STUDENT WITH SAME BLOODGROUP",f);
	send(c);
  }
  getch();
}
void send(struct student *c)
{   int i; char m[20];
    printf("\n GIVE MESSAGE \t"); gets(m);
	for(i=1;i<=f;i++) 
  	{   printf("\n TO \t");   puts(c[i].name);
	    strcpy(c[i].message,m);
		printf("MESSAGE \t"); puts(c[i].message);
	}
}
