#include<stdio.h>
int main(){
	int n;
	long long f1=0,f2=1,f3=0;
	printf("nhap vao so nguyen n ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		printf("%lld ",f3);
		f1=f2;
		f2=f3;
		f3=f1+f2;
	}
	return 0;
}
