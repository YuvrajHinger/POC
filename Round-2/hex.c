/*
	GIVEN:  HEXA-DECIMAL x  HEXA-DECIMAL y
	OUTPUT: largest number from Given number
	Hint: HEXA DECIMAL NUMBER CONVERT DECIMAL NUMBER
	AB Decimal = 16^1*10 + 16^0*11 = 160+11 = 171
	CD Decimal = 16^1*12 + 16^0*13 = 192+13 = 205 
	OUTPUT: CD
*/ 
#include<stdio.h>
#include<string.h>
#include<math.h>
int conversion(char *x){
	int curr,len=pow(16,strlen(x)-1);
	if(*x=='\0') return 0;
	else if(*x>='A' && *x<='F') curr=(*x-55)*len;	
	else curr=(*x-48)*len;
	return curr+conversion(x+1);
}
void main(){
	char x[]="50",y[]="51";
	int xD,yD;
	xD=conversion(strupr(x));
	yD=conversion(strupr(y));
	if(xD>yD) printf("1");
	else if(xD==yD) printf("0");
	else printf("-1");
}
