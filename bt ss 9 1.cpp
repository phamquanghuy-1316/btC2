#include<stdio.h>
int main(){
	int currentLength=-1,addindex,newvalue;
	const int maxsize=100;
	int arr[maxsize];
	
	while(currentLength < 0 || currentLength >100){
		printf("nhap vao so phan tu muon nhap ");
		scanf("%d",&currentLength);
		if(currentLength>100){
		printf("qua so luong phan tu");
		}else if(currentLength<0){
			printf("qua so luong phai lon hon hoac bang 0");
		}
	}
	
	for(int i=0; i<currentLength; i++){ //nhap phan tu vao mang 
		printf("nhap vao phan tu thu %d cua mang ",i+1);
		scanf("%d",arr+i);
	}
	if(currentLength==100){
		printf("mang da day khong the nhap them \n");
	}
	printf("nhap vao vi tri muon them phan tu ");
	scanf("%d",&addindex);
	if(addindex < 0){
        addindex = 1;
	    } else if(addindex > currentLength){
            addindex = currentLength;
                }
	if(addindex>=currentLength){
		currentLength++;
		printf("nhap vao gia tri muon them ");
		scanf("%d",&newvalue);
		arr[addindex]=newvalue;
	} else {
		printf("nhap vao gia tri muon them ");
		scanf("%d",&newvalue);
		for(int i=currentLength; i>=addindex; i--){//cho cac phan tu 
		arr[i]=arr[i-1];	
		}
		arr[addindex - 1]=newvalue;
		currentLength++;
	}
	for(int i=0; i<currentLength; i++){ //in ra phan tu mang
		printf("%d ",arr[i]);
}

	return 0;
}
