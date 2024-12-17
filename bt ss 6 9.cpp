#include<stdio.h>
#include<math.h> 
int main(){
	int a,sum,test; 
	printf("tat ca so armstrong la \n"); 
	for(int i=100;i<=999;i++){
		test=i; 
		sum=0; 
		while(test>0){
			a=test%10; 
			sum=sum + pow(a,3);
			test/=10;
		}
			if(sum == i){
			printf("%d ",i); 
	} 
		}
	return 0; 
} 
