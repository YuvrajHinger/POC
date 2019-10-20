#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{ char p[15];
  int l=0,u=0,s=0,d=0,i=0,len;
  printf("ENTER PASSWORD\n");
  gets(p);
  len=strlen(p); 
  if(len>=6 && len<=14)
  { while(p[i]!='\0')
    { if(isupper(p[i]))
      { u++; }
      if(islower(p[i]))
      { l++; }
      if(isdigit(p[i]))
      { d++; }
      if(p[i]=='$' || p[i]=='&' || p[i]=='-')
      { s++; }
      i++;
    }
  }
  if(l!=0 && u!=0 && s!=0 && d!=0)
  { printf("OK"); }
  else
  { printf("WRONG"); }
  getch();
}
