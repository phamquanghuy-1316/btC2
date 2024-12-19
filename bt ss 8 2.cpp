#include <stdio.h>
int main(){
	int n;
	printf("nhap vao mot phan tu ");
	scanf("%d",&n);
	int arr[6]={1,3,2,5,4,6};
	for(int i=0; i<6;i++){
		if(arr[i]==n){
			printf("vi tri cua phan tu trong mang la: %d",i+1);
			return 0;
		}
	}
	printf("khong co phan tu %d trong mang",n);
	return 0;
}
