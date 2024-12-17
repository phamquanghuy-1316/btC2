#include<stdio.h>
int main(){
	int a,i=1;
	printf("nhap vao 1 so nguyen ");
	scanf("%d",&a);
	printf("so %d co cac uoc la ",a);
	while(i<=a){
		if(a%i==0){
			printf("%d ",i);
		}
		i++;
	}
	return 0;
}
