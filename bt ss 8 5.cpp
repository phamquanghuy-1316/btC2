#include<stdio.h>
int main(){
	int n,sum1=0;
	
	int arr[3][4]={{1,3,7,2},{7,5,1,1},{4,6,2,1}};
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
		if(i==3-1 || j==4-1 || i==0 || j==0){ //tinh tong bien
				sum1+=arr[i][j];
			}
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("tong cac so o bien cua ma tran la %d \n", sum1);
	return 0;
}
