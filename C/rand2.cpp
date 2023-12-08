#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	double arr[10];
	srand(time(NULL));
	for(int i=0;i<=9;i++){
		
		arr[i]=(rand()%99)/10;
		printf("%.1f ",arr[i]);
	}
	
}