#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compare(int *a,int *b){
    return *a-*b;
}
int main(){
    int arr[10001],arr_count;
    int i;
    for(i=0;i<10001;i++) scanf("%d",&arr[i]);	    
    //qsort(arr,10001,sizeof(int),compare);
    arr_count=10000;
    printf("\n\n\nASASS%d",arr[arr_count/2]);
}

