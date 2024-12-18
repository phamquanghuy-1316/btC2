#include <stdio.h>
int main(){
	int array[5];
	for(int i=0;i<5;i++){
	printf("nhap phan tu thu %d ", i);
	scanf("%d", array+i);
	}
	printf("\n %d %d %d %d %d", array[0], array[1], array[2], array[3], array[4]);
	return 0;
}
