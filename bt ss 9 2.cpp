#include <stdio.h>
int main(){
	int newValue,i=0;
	int arr[10]={1,3,12,5,2,66,22,54,9,76};
	for(int j=0; j<10; j++){
		printf("%d ",arr[j]);
	}
	while(i<=0||i>10){
	printf("\n ban muon sua phan tu thu ");
	scanf("%d",&i);
	if(i<=0||i>10){
		printf(" Phan tu khong ton tai");
	}
	}
	printf("nhap vao gia tri moi cho phan tu ");
	scanf("%d",&newValue);
	arr[i-1]=newValue;
	printf("mang sau khi chinh sua la \n");
	for(int j=0; j<10; j++){
		printf("%d ",arr[j]);
	}
	return 0;
}
