#include<stdio.h>

int main(){
	
	int H,M,S,T,tmp;
	
	printf("시간을 입력하고 , 돌아갈 초를 입력하세요.\n");
	scanf("%d %d %d %d",&H,&M,&S,&T);
	

	if(T>=3600){
		H -= T/3600;
		tmp = T%3600;
		
		if(tmp>60){
			M -= tmp/60;
			S -= tmp%60;
		}
	} 
	
	else if(T>=60){
		M -= T/60;
		S -= T%60;
	} 
	else{
		S -= T;
	}
	
	if(T<0){
		T = 24;
	}
	if(M<0){
		T-=1;
		M+=60;
	}
	if(S<0){
		M--;
		S+=60;
	}
		

	printf("%d %d %d", H, M, S);
	
	return 0;
}