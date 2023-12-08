#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int arr[10];
	int sum;
	srand(time(NULL));
	for(int i=0;i<=9;i++){
		arr[i]=rand()%10;
		sum+=arr[i];
		printf("%d ",arr[i]);
	}
	printf("\n%d",sum);
}