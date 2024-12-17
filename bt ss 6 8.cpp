#include <stdio.h>
int main(){
	float money,interest_rate,time,interest,tmp=0; 
	printf("nhap vao so tien gui ban dau ");
	scanf("%f", &money);
	printf("nhap vao lai xuat thang ");
	scanf("%f", &interest_rate);
	printf("nhap vao so thang gui ");
	scanf("%f", &time);
	while(time--){
		interest=money*(interest_rate/100);
		money+=interest;
		tmp+=interest;
	}
	printf("tien lai la %.3f \n", tmp);
	printf("tien nhan duoc la %.3f \n",money);
	return 0;
}
