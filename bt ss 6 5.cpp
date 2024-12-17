#include <stdio.h>
int main(){
	int a;
	printf("nhap vao vao thang ");
	scanf("%d", &a);
	if(a==2){
		printf("thang %d co 29 ngay ",a);
	}else if(a%2!=0){
		printf("thang %d co 31 ngay ",a);
	}else if (a==12){
		printf("thang %d co 31 ngay ",a);
	}else if(a%2==0){
		printf("thang %d co 30 ngay ",a);
	}
	return 0;
}
