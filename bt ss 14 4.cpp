#include <stdio.h>
#include <string.h>

int main(){
	char string[100],a;
	int count=0;
	printf("nhap vao 1 chuoi ky tu ");
	fgets(string,sizeof(string),stdin);
	string[strcspn(string, "\n")]='\0';
	printf("nhap vao 1 ky tu \n");
	scanf("%c",&a);
	for(int i=0;string[i]!='\0';i++){
		if(a==string[i]){
			count++;
		}
	}
	printf("trong chuoi co %d ky tu %c",count,a);
	return 0;
}
