#include <stdio.h>
#include <string.h>

int main(){
	char string[100],a;
	int sochu=0;
	printf("nhap vao 1 chuoi ky tu ");
	fgets(string,sizeof(string),stdin);
	string[strcspn(string, "\n")]='\0';
	for(int i=0;string[i]!='\0';i++){
		if(string[i]>=65 && string[i]<=90 || string[i]>=97 && string[i]<=122){
			sochu++;
		}
	}
	printf("trong chuoi co %d chu cai",sochu);
	return 0;
}
