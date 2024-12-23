#include <stdio.h>
int main(){
	int size,key,j;
	int arr[]={1,18,4,3,8,7,2,6};
	size=sizeof(arr)/sizeof(arr[0]);
	for(int i=1;i<size;i++){
		key = arr[i];
		 j=i-1;	
		 
		while(j>=0 && arr[j]>key){
		arr[j+1]=arr[j];
		j=j-1;
	}
	arr[j+1]=key;
	}
	for(int i=0; i<size; i++){
	printf("%d ",arr[i]);
}
printf("\n");
	return 0;
}

