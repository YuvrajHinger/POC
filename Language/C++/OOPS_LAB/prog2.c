#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define N 3
typedef struct date Date;
typedef struct person
{ char name[20];
//  Date dob;
}person;
int main()
{ person p[N];
  int i,j;
//  int Datecomp(Date *,Date *);
  for(i=0;i<N;i++)
  { printf("ENTER NAME"); scanf("%s",&p[i].name);
    printf("DOB"); scanf("%d%d%d",&p[i].dob.da_day,&p[i].dob.da_mon,&p[i].dob.da_year);
  }
  getch();
}
