#include <stdio.h>
int main(){
	int arr[]={1,18,4,3,8,7,2,6};
	int min,tmp,size;
	size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<size-1; i++){
		min=i;
		for(int j=i+1; j<size;j++){
			if(arr[min]>arr[j]){
				min=j;
			}
		}
		tmp=arr[i];
		arr[i]=arr[min];
		arr[min]=tmp;
	}
	for(int i=0; i<size; i++){
		printf("%d ",arr[i]);
	}
	return 0; 
} 
