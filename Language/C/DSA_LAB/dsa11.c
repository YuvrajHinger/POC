#include<stdio.h>
#include<conio.h>
int stack[20],top = -1;
void push(int x)
{ stack[++top] = x; }
int pop()
{ return stack[top--]; }
void main()
{ char exp[20],*e;
  int n1,n2,n3,num;
  printf("Enter the expression :: ");  scanf("%s",exp);
  e = exp;
  while(*e != '\0')
  { if(isdigit(*e)) // isdigit(3) return nonzero value // isdigit(c) return 0
    { num = *e - 48;  // *e is int to change in int take ascii value 
      //  printf("%d",*e); ex- *e have 4 then *e=52
      push(num);  // ex- *e=2 ascii value of 2 is 50 so num=50-48
    }
    else
    { n1 = pop(); // n1=previous value
      n2 = pop(); // n2=pre-previous value
      switch(*e)
      { case '+':  n3 = n1 + n2;
                   break;
        case '-':  n3 = n2 - n1;
                   break;
        case '*':  n3 = n1 * n2;
                   break;
        case '/':  n3 = n2 / n1;
                   break;
      }
      push(n3);
    }
      e++;
   }
    printf("\nThe result of expression %s  =  %d\n\n",exp,pop());
    getch();
}
