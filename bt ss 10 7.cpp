#include <stdio.h>

int main(){
	int row,column,element;
	printf("nhap vao so hang ");
	scanf("%d",&row);
	printf("nhap vao so cot ");
	scanf("%d",&column);
	int arr[row][column];
	
	//nhap phan tu mang
	for(int i=0; i<row; i++){
		for (int j=0; j<column; j++){
			printf("nhap vao phan tu hang %d cot %d cua mang ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	
	//in mang ch sap xep
	printf("mang chua sap xep: \n");
	for(int i=0; i<row; i++){
		for (int j=0; j<column; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//xap xep dong
	int tmp;
	for(int i=0; i<row; i++){
		for(int j=0; j<column-1; j++){
			for (int k=j+1; k<column; k++){
				if(arr[i][j]>arr[i][k]){
					tmp=arr[i][j];
					arr[i][j]=arr[i][k];
					arr[i][k]=tmp;
				}
			}
		}
	}
	
	//in mang da sap xep
	printf("mang da sap xep la: \n");
	for(int i=0; i<row; i++){
		for (int j=0; j<column; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
