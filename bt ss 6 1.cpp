#include <stdio.h>
int main (){
	int a,sum=0;
	for(int i = 1; i<=5; i++){
		printf("nhap vao so nguyen thu %d ",i);
		scanf("%d", &a);
		if(a%2!=0){
			sum=sum+a;
		}
	} 
	printf("tong cac so le la %d", sum);
	return 0; 
} 
