#include<stdio.h>
int main(){
	int a; 
	printf("nhap vao 1 so nguyen ");
	scanf("%d", &a);
	if(a<2){
		printf("%d khong la so nguyen to",a); 
		return 0;
	}
	for(int i=2;i*i<a;i++){
		if(a%i==0){
			printf("%d khong la so nguyen to",a);
			return 0;
		}
	} 
	printf("%d la so nguyen to",a);
	return 0; 
} 
