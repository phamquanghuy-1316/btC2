#include<stdio.h>
int main(){
	int currentLength=0,deleteElement=0;
	const int maxsize=100;
	int arr[maxsize];
	while(currentLength<=0 || currentLength>maxsize){
		printf("nhap vao so phan tu muon nhap ");
		scanf("%d",&currentLength);
	}
	//nhap phan tu
	for(int i=0; i<currentLength; i++){
		printf("nhap vao phan tu thu %d ", i+1);
		scanf("%d",arr + i);
	}
	//xoa phan tu
	while(deleteElement<=0||deleteElement>currentLength){
		printf("xoa phan tu so ");
		scanf("%d",&deleteElement);
		if(deleteElement>currentLength || deleteElement<0){
		printf("phan tu khong hop le ");
		}
	}
	//xap xep lai
	for(int i=deleteElement-1; i<currentLength; i++){
		arr[i]=arr[i+1];
	}
	currentLength--;
	//in mang
	printf("mang sau khi xoa la \n");
	for(int i=0; i<currentLength; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
