#include<stdio.h>
int main(){
	int n;
	printf("nhap vao n ");
	scanf("%d",&n);
	int arr[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			arr[i][j]=n;
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
