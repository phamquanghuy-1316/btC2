#include<stdio.h>
#include<string.h> 
int main (){
	char password[100]="xinchao",answer[100];
	printf("hay nhap mat khau ");
	scanf("%s", &answer);
	if(strcmp(password,answer) == 0){
		printf("mat khau dung "); 
	}else{
		printf("mat khau sai "); 
	} 
	return 0; 
} 
