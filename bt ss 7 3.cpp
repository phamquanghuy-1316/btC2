#include<stdio.h>
int main(){
	int count=0;
	int arr[5]={2,7,1,52,1};
	for (int i=0; i<5; i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
			count++;
		}
	}
	if(count==0){
		printf("khong chua so chan");
	}
	return 0;
}
