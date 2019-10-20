#include<stdio.h>
#include<conio.h>
void main()
{ int i=0,top=-1,s=0;
  char exp[50],st[10];
  printf("ENTER EXPRESSION\n");
  gets(exp);
  while(exp[i]!='\0')
  { if(exp[i]=='{' || exp[i]=='(' || exp[i]=='[' )
    { top++;
      st[top]=exp[i];
    } 
    if(exp[i]=='}' || exp[i]==')' || exp[i]==']' )
    { if(exp[i]=='}' &&(st[top]=='(' || st[top]=='['))
      { s++; break; }
      if(exp[i]==')' &&(st[top]=='{' || st[top]=='['))
      { s++; break; }
      if(exp[i]==']' &&(st[top]=='(' || st[top]=='{'))
      { s++; break; }
      top--;
    }
    i++;
  }
  if(s==0 && top==-1)
  { printf("YES"); }
  else
  { printf("NO");  }
  getch();
}
                
