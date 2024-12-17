#include<stdio.h>
int main(){
	int day, month;
	printf("nhap vao ngay sinh ");
	scanf("%d", &day);
	printf("nhap vao thang sinh ");
	scanf("%d", &month);
	switch (month){
		case 1:
			if(day>=1 && day <=19){
				printf("Ma Ket");
			}else{
				printf("Bao Binh");
			}
			break;
		case 2:
			if(day>=1 && day <=18){
				printf("Bao Binh");
			}else{
				printf("Song Ngu");
			}
			break;
		case 3:
			if(day>=1 && day <=20){
				printf("Song Ngu");
			}else{
				printf("Bach Duong");
			}
			break;
		case 4:
			if(day>=1 && day <=20){
				printf("Bach Duong");
			}else{
				printf("Kim Nguu");
			}
			break;
		case 5:
			if(day>=1 && day <=20){
				printf("Kim Nguu");
			}else{
				printf("Song Tu");
			}
			break;
		case 6:
			if(day>=1 && day <=21){
				printf("Song Tu");
			}else{
				printf("Cu Giai");
			}
			break;
		case 7:
			if(day>=1 && day <=22){
				printf("Cu Giai");
			}else{
				printf("Su Tu");
			}
			break;
		case 8:
			if(day>=1 && day <=22){
				printf("Su Tu");
			}else{
				printf("Xu Nu");
			}
			break;
		case 9:
			if(day>=1 && day <=22){
				printf("Xu Nu");
			}else{
				printf("Thien Binh");
			}
			break;
		case 10:
			if(day>=1 && day <=23){
				printf("Thien Binh");
			}else{
				printf("Bo Cap");
			}
			break;
		case 11:
			if(day>=1 && day <=22){
				printf("Bo Cap");
			}else{
				printf("Nhan Ma");
			}
			break;
		case 12:
			if(day>=1 && day <=21){
				printf("Nhan Ma");
			}else{
				printf("Ma Ket");
			}
			break;	
	}
	return 0;
}
