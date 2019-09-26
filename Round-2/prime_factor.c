/*
	GIVEN:  18	
	1. Technique
	factor of 18
		1 2 3 6 9 
	OUTPUT:
*/
#include<stdio.h>
int prime_num(int x){
	int i;
	if(x<=1) return 0;
	if(x<=3) return 1;
	if(x%2==0 || x%3==0) return 0;				 
	for(i=5;i*i<x;i+=2)
		if(x%i==0) return 0;
	return 1;	
}
void main(){
	int num=18,i,last=num/2,sum=0;
	for(i=2;i<last;i++){
		if(num%i==0)
			if(prime_num(i)) 
				sum+=i;		
	}	
	printf("%d",sum);
}

