#include <stdio.h>
int main(){
	int a,even=0,odd=0;
	for(int i=1; i<=5; i++){
		printf("nhap vao so nguyen thu %d ",i);
		scanf("%d", &a);
		if(a%2==0){
			even++; 
		}else{
			odd++; 
		} 
	}
	printf("co %d so chan va %d so le ", even, odd); 
	return 0;
}
