#include <stdio.h>

int  binarySearch(int arr[], int size, int target){
	int left=0,right=size-1;
	
	while(left<=right){
		int mid = left + (right-left)/2;
		if(arr[mid]==target){
			return mid;
		}
		if(arr[mid]<target){
			left=mid+1;
		}else{
			right=mid-1;
		}
	}
	return -1;
}

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
	
	printf("mang sau khi sap xep: \n");
	for(int i=0; i<size; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	int result,target;
	printf("nhap vao 1 so nguyen ");
	scanf("%d",&target);
	result=binarySearch(arr,size,target);
	if(result != -1){
		printf("vi tri cua so nguyen %d la %d",target,result);
	}else{
		printf("phan tu khong ton tai trong mang");
	}
	return 0;
}
