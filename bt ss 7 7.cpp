#include <stdio.h>
int main(){
	int element,a; 
	printf("nhap vao so phan tu cua mang ");
	scanf("%d",&element);
	int arr[element]; 
	for(int i=0;i<element;){
		printf("nhap vao phan tu thu %d ",i+1);
		scanf("%d",&a);
		if(a%2!=0){
			arr[i]=a;
			i++;
		}else{
			printf("so nhap vao phai la so le \n");
		}
	} 
	printf("mang vua nhap la \n");
	for(int i=0;i<element;i++){
		printf("%d ",arr[i]);
	} 
	return 0;
}
