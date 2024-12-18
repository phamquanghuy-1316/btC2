#include <stdio.h>
int main(){
	int arr[5]={3,1,2,5,6};
	int j,min=arr[0],max=arr[0];
	for(int i=0;i<5;i++){
		if(arr[i]>max){
			max=arr[i];
		}else if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("so lon nhat trong mang la %d \n", max);
	printf("so nho nhat trong mang la %d \n", min);
	return 0;
}
