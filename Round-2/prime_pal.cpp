//prime pallindrome
//prime: 2 3 5 7 11
//pallindrome: 2 11 121 1221
#include<iostream>
using namespace std;
int pallindrome(int x){
	int d=x,l,o=0;
	while(d){
		o=o*10+d%10;		
		d/=10;
	}
	if(o==x) return 1;
	else return 0;
}
int main(){
	int temp,n=100;
	int ar[n]={0};		
	for(int i=2;i<n;i++){		
		if(ar[i]==0){
			for(int j=i+1;j<n;j++) 
				if(j%i==0) ar[j]=1; 
			if(pallindrome(i)==0) ar[i]=1;
		}		
	}
	for(int i=2;i<n;i++){
		if(ar[i]==0) cout<<i<<"\t";
	}
	return 0;
}
