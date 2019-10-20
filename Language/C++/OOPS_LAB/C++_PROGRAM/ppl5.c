#include<stdio.h>
#include<conio.h>
int main()
{ char id[100];
  int len,i,ct,ct1,ct2,ct3,ct4;
  i=0; ct=0; ct1=0; ct2=0; ct3=0; ct4=0; 
  printf("ENTER EMAIL ADDRESS\n");
  gets(id); //123@gmail.com   1@.com
  len=strlen(id);
  while(id[i]!='\0')
  {      while(id[i]!='@' && id[i]!='\0' && ct==0)
         {  if(isalnum(id[i]))
            { ct1=1; }
            i++; 
         }// 123 1
         if(id[i]=='@')
         { ct++; i++;
            while(id[i]!='.' && id[i]!='@')
            { if(isalnum(id[i]))
               { ct2=1; }               
                i++; 
            } // gmail 
            if(id[i]=='.')
            { ct3=1; i++;
               while(id[i]!='\0' && id[i]!='@')
               { if(isalnum(id[i]))
                 { ct4=1; }               
                 i++; 
               } // com com
            } // . .
         } //@ @
    i++;
  }
  if(ct==1 && ct1==1 && ct2==1 && ct3==1 && ct4==1)
  { printf("OK\n"); }
  else
  { printf("WRONG\n"); }
  getch();
  return 0;
}
