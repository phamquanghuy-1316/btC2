#include <stdio.h>
#include <string.h>

int main(){
	char string[100];
	printf("nhap vao 1 chuoi ky tu ");
	fgets(string,sizeof(string),stdin);
	string[strcspn(string, "\n")]='\0';
	printf("cac ky trong chuoi la \n");
	for(int i=0;i<strlen(string);i++){
		printf("%c ",string[i]);
	}
	return 0;
}
