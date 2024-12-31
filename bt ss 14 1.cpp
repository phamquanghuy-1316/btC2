#include <stdio.h>
#include <string.h>

int main(){
	char string[100];
	printf("nhap vao 1 chuoi ky tu ");
	fgets(string,sizeof(string),stdin);
	string[strcspn(string, "\n")]='\0';
	fputs(string, stdout);
	printf("do dai cua chuoi la %d",strlen(string));
	return 0;
}
