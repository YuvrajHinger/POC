void main()
{ int i;
  char pasword[20],ch;
for(i=0;i<8;i++)
 {
  ch = getch();
  pasword[i] = ch;
   printf("%c",ch);
  ch = '*' ;
  printf("%c",ch);
 }
}
