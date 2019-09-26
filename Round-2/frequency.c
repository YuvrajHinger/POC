/*
	GIVEN:  AAbbAAccaDDBFF
	OUTPUT: A
	HINT: CONVERT TO ALL UPPERCASE THEN COUNT FREQUENCY OUTPUT MAXIMUM
*/
#include<stdio.h>
void main(){
	char string[]="AAbbAAbbccaDDBFF";
	int frequency[26]={0},i=-1,flag[2]={-1,-1};
	strupr(string);
	while(string[++i]!='\0') frequency[string[i]-'A']++;	
	for(i=0;i<26;i++){
		if(frequency[i]>flag[1]){
			flag[0]=i;		
			flag[1]=frequency[i];		
		}			
	}
	printf("%c",flag[0]+'A');
}
