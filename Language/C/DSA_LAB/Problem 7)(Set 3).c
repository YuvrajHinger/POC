#include<stdio.h>
void main(){
	int a[50]={0},key,i,j;
	printf("Array ");
	for(key=0;key<6;key++) scanf("%d",&a[key]);
	printf("X= ");
	scanf("%d",&key);		
	for(i=0;i<6;i++){
		for(j=i+1;j<6;j++){
			if((a[i]+a[j])==key){
				i=10;
				break;
			} 
		}
	}	
	if(i==11) printf("Yes");
	else printf("No");
	getch();
}
