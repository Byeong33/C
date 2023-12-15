#include<stdio.h>

int swap(int* num1, int* num2){
	
	int temp = 0;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	
	return 0;
}

int main(){
	
	int a = 5;
	int b = 15;
	
	
	
	printf(" a의 값 = %d, b의값 = %d \n",a,b);
	
	swap(&a,&b);
	
	printf(" 바뀐 a의 값 = %d, 바뀐 b의 값 = %d",a,b);
	
	
	return 0;
	
}