#include<stdio.h>

int main(){
	
	int n;
	int sum=0;
	
	scanf("%d",&n);
	
	for(int i=n;i>0;i--){
		
		sum+=i;
		
		
	}
	printf("%d",sum);
}