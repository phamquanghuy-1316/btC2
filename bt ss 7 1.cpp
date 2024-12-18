#include <stdio.h>
int main(){
	int array[5]={3,2,5,6,1};
	for(int i=0;i<5;i++){
		printf("%d ", array[i]);
	}
	printf("\ndo dai cua mang la %d", sizeof array / sizeof (int));
	return 0;
}
