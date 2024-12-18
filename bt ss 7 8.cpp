#include<stdio.h>
int main(){
	int row,column; 
	printf("nhap vao so cot ");
	scanf("%d",&column);
	printf("nhap vao so hang ");
	scanf("%d",&row);
	int arr[column][row];
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			printf("nhap vao phan tu tai hang %d cot %d ",j+1,i+1);
			scanf("%d",&arr[i][j]);
		}
	} 
	for(int i=0; i<row; i++){
		for(int j=0; j<column; j++){
			printf("%d ",arr[i][j]); 
		}
		printf("\n");
	} 
	return 0;
}
