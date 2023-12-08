#include<stdio.h>

int main(){
	
	char str1[25] = "C language is powerful";
	char str2[] = "Coding is computer programming";
	
	for(int i=0;str1[i];i++){
		printf("%c",str1[i]);
	}
	printf("\n");
	int i=0;
	while(i<str2[i]){
		printf("%c",str2[i]);
		i++;
	}
	
	return 0;
}