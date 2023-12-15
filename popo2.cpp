#include<stdio.h>
int main(){
	
	char arr[6] = {"Hello"};
	
	char* ptr;
	
	ptr = &arr[0];
	
//	printf("%c", *ptr+2);
	
	for(int i = 0; i<=sizeof(arr);i++){
		printf("%c", *(ptr+i));
	}
}