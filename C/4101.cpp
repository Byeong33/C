#include<stdio.h>

int main(){
	
	int N,a,b;
	
	scanf("%d",&N);
	
	for(int i = N; i>0;i--){
		
		scanf("%d %d",&a,&b);
		
		if(a>b){
			printf("Yes\n");
		}
		else{
		
			printf("No\n");
		}
		
	}
	
}