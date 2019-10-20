#include<stdio.h>
void main(){
	int a[50]={0},key,i;
	printf("Enter 10 Elements: ");
	for(key=0;key<10;key++) scanf("%d",&a[key]);
	printf("Enter element: ");
	scanf("%d",&key);		
	for(i=11;i>0;i--) a[i]=a[i-1];
	a[i]=key;
	printf("Array after inserting %d:",key);
	for(i=0;i<10;i++) printf("%d\t",a[i]);
	getch();
}
