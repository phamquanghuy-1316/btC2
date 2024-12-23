#include <stdio.h>
int main(){
	int n,size,count;
	int arr[]={1,18,4,3,8,7,2,6};
	size=sizeof(arr)/sizeof(arr[0]);
	printf("nhap vao phan tu bat ky ");
	scanf("%d",&n);
	for(int i=0; i < size; i++){
		count=0;
		if(n==arr[i]){
			count=1;
			printf("vi tri cua phan tu la %d ",i);
			return 0;
		}
	}
		printf("phan tu khong ton tai trong mang ");
	return 0;
}
