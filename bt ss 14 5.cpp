#include <stdio.h>
#include <string.h>

int main(){
	char string[100],a;
	int inWord=0,sotu=0;
	printf("nhap vao 1 chuoi ky tu ");
	fgets(string,sizeof(string),stdin);
	string[strcspn(string, "\n")]='\0';
	for(int i=0;string[i]!='\0';i++){
		if(string[i]!='\0'&&inWord==0){
			inWord=1;
			sotu++;
		}else if(string[i]==' '){
			inWord=0;
		}
	}
	printf("trong chuoi co %d tu",sotu);
	return 0;
}
