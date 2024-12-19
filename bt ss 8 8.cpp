#include<stdio.h>
int main(){
	int n,sum1=0;
	int arr[3][3]={{1,3,7},{7,5,1},{4,6,2}};
	printf("cac phan tu nam tren duong cheo phu la ");
		for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
		if(i==3-1-j){ // tinh tong duong cheo chinh
			printf("%d ",arr[i][j]);
			sum1+=arr[i][j];
		}
		}
	}
	printf("\n tong cac so o bien cua ma tran la %d", sum1);
	return 0;
}
