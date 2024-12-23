#include <stdio.h>
int main(){
	int size,tmp;
	int arr[]={1,18,4,3,8,7,2,6};
	size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<size-1; i++){
		for(int j=i+1; j<size; j++){
			if(arr[i]>arr[j]){
				tmp=arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
			}
		}
	}
	for(int i=0; i<size; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
