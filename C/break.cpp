#include<stdio.h>
int main(){
	
	int H,M,S,sec,first;
	
	printf("시간을 입력하세요.\n");
	scanf("%d %d %d",&H,&M,&S);
	printf("돌아갈 초를 입력하세요.\n");	

	scanf("%d", &sec);
	

	if (sec>=60){
		
		sec = sec/60;
		S -= sec%60;
		
		if(sec>=60){
			H -= sec/60;
			M -= sec%60;
		}
		else{
			M -= sec/60;
		}		
	}
	else{
		S -= sec%60;
	}
	printf("%d %d %d",H,M,S);
//	else{
//		S -= sec%60;
//	}
//	
//	if(S>=60){
//		M += S/60;
//		S += S%60;
//	}
//	if(M>=60) {
//		H += M/60;
//		M += M%60;
//	}
//	
//	printf("%d %d %d",H,M,S);
	
}