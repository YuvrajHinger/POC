/*
Fibonacci Series 1 1 2 3 5 8 13 21 34 55
n=6
	Odd: 1+1+3+5+13+21=44
	Output: 44
*/
#include<stdio.h>
int fibonacii(int n){
	int sum=1,temp,pre=0,cur=1,temp1;
	if(n==0) return 0;
	temp=n;
	while(temp!=1){		
		temp1=pre+cur;
		pre=cur;
		cur=temp1;
		if(cur%2!=0) temp--;
	}	
	return cur+fibonacii(n-1);
}
void main(){
	int n=6;
	printf("%d",fibonacii(n));
}
