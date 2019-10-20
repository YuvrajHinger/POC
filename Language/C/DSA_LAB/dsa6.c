#include<stdio.h>
#include<conio.h>
void main()
{ int p1[3][5],p2[3][5],p3[6][5],i,j,i1,i2,j1,j2,k=0,s=0,si,flag;
  printf("\nEnter 1st polynomial\n");
  for(i=0;i<3;i++)
  {	printf("\nEnter %d Term Constant and Powers of A,B,C and D: ",i);
	scanf("%d%d%d%d%d",&p1[i][0],&p1[i][1],&p1[i][2],&p1[i][3],&p1[i][4]);	
  }printf("\nEnter 2nd polynomial\n");
  for(i=0;i<3;i++)
  {	printf("\nEnter %d Term Constant and Powers of A,B,C and D: ",i);
	scanf("%d%d%d%d%d",&p2[i][0],&p2[i][1],&p2[i][2],&p2[i][3],&p2[i][4]);
  }
  for(i1=0;i1<3;i1++)
  {	s=0;flag=0;
	for(i2=0;i2<3;i2++)
	{ si=0;
	  for(j1=1;j1<=4;j1++)
	   { if(p1[i1][j1]!=p2[i2][j1])
		  {	si++; break; }
		}
	  if(si==0)
	  {	p3[k][0]=p1[i1][0]+p2[i2][0];
		p3[k][1]=p1[i1][1];
		p3[k][2]=p1[i1][2];
		p3[k][3]=p1[i1][3];
		p3[k][4]=p1[i1][4];
		k++; flag=100;
	  }
	  else
	  {	s++;}
	}
	if(s!=0&&flag!=100)
	{ p3[k][0]=p1[i1][0];
	  p3[k][1]=p1[i1][1];
      p3[k][2]=p1[i1][2];
	  p3[k][3]=p1[i1][3];
	  p3[k][4]=p1[i1][4];
      k++;
	}
   }
   for(i2=0;i2<3;i2++)
   { s=0;
	 for(i1=0;i1<3;i1++)
	 { for(j1=1;j1<=4;j1++)
	   { if(p2[i2][j1]!=p1[i1][j1])
		  { s++;break; }
	   }
	  }
	 if(s==3)
	 { p3[k][0]=p2[i2][0];
	   p3[k][1]=p2[i2][1];
	   p3[k][2]=p2[i2][2];
	   p3[k][3]=p2[i2][3];
	   p3[k][4]=p2[i2][4];
	   k++;
   	 }
	}
    printf("\n---Polynomial is ---\n\n");
	for(i=0;i<k;i++)
	{ printf("%d",p3[i][0]);
	  if(p3[i][1]!=0)
	  { printf("a^%d ",p3[i][1]); }
	  if(p3[i][2]!=0)
	  { printf("b^%d ",p3[i][2]); }
	  if(p3[i][3]!=0)
      { printf("c^%d ",p3[i][3]); }
	  if(p3[i][4]!=0)
      {	printf("d^%d ",p3[i][4]); }
	  if(i!=(k-1))
	  { printf(" + ");}
	 }
	getch();
}
