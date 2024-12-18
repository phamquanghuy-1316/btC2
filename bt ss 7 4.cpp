#include <stdio.h>
int main(){
	int element; 
	printf("nhap vao so phan tu cua mang ");
	scanf("%d",&element);
	int arr[element]; 
	for(int i=0;i<element;i++){
		printf("nhap vao phan tu thu %d ",i+1);
		scanf("%d",arr+i);
	} 
	printf("mang vua nhap la \n");
	for(int i=0;i<element;i++){
		printf("%d ",arr[i]);
	} 
	return 0;
}
