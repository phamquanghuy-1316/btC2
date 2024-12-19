#include <stdio.h>
int main(){
	int max=0;
	int arr[3][2]={{1,3},{7,5},{4,6}};
	for(int i=0; i<3;i++){
		for(int j=0; j<2;j++){
			if(max<arr[i][j]){
				max=arr[i][j];
			}
		}
	}
	printf("phan tu lon nhat trong mang la %d ",max);
	return 0;
}
