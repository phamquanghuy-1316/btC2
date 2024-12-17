#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,delta; 
	printf("nhap vao a,b,c ");
	scanf("%f %f %f",&a,&b,&c);
	printf("phuong trinh %.2fx^2 + %.2fx + c = 0 \n",a,b,c);
	delta = b*b-4*a*c;
	if(delta < 0){
		printf("phuong trinh vo nghiem"); 
	}else if (delta == 0){
		printf("phuong trinh co nghiem kep: x1=x2=%.2f ",-b/2*a);
	}else{
		printf("phuong trinh co 2 nghiem phan biet x1=%.2f, x2=%.2f", (-b+sqrt(delta))/2*a, (-b-sqrt(delta))/2*a);
	}
	return 0; 
} 
