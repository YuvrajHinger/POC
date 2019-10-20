#include<stdio.h>
#include<conio.h>
char stack[20],step[20];
int top = -1,z=0;
void push(char x)
{   stack[++top] = x;
    step[z]=stack[top];
    z++;
}
char pop()
{ if(top == -1)
  { return(-1); }
  else
  { return(stack[top--]); }
}
char stp()
{ if(z == -1)
  { return(-1); }
  else
  { return(step[z--]); }
}
int priority(char x)
{    if(x == '(')
     {  return(0); }
     if(x == '+' || x == '-')
     {  return(1); }
     if(x == '*' || x == '/')
     {  return(2); }
}
void main()
{
    char exp[20],*e, x;
    printf("Enter the expression :: "); scanf("%s",exp);
    e = exp;
    while(*e != '\0')
    { if(isalnum(*e))
      { printf("%c",*e); }
      else if(*e == '(')
      { push(*e); }
      else if(*e == ')')
      { while((x = pop()) != '(')
        { printf("%c", x); }
      }
      else
      { while(priority(stack[top]) >= priority(*e))
         { printf("%c",pop()); }
        push(*e);
      }
      e++;
    }
    while(top != -1)
    { printf("%c",pop()); }
    printf("\n STACK ELEMENT  \n");
    while(z!=-1)
    { printf("%c",stp()); }
    getch();
}
