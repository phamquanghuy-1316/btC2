#include <stdio.h>

//kiem tra so nguyen to
int is_Prime(int a){
	if(a<=1){
		return 0;
	}
	for(int i=2; i*i<a; i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	const int maxsize=10; 
	int arr[maxsize];
	int choice,n,sum=0,max,min,count,check,addElement,addIndex;
	while(1){
		//menu hien thi
		printf("\n");
		printf("\nMenu \n");
		printf("1. nhap va so phan tu va gia tri cac phan tu \n");
		printf("2. in ra gia tri cac phan tu dang quan ly \n");
		printf("3. in ra gia tri cac phan tu chan va tinh tong \n");
		printf("4. in ra gia tri lon nhat va nho nhat cua mang \n");
		printf("5. in ra cac phan tu la so nguyen to o trong mang va tinh tong \n");
		printf("6. nhap vao 1 so va thong ke trong mang co bao nhieu phan tu do \n");
		printf("7. them mot phan tu vao vi tri chi dinh \n");
		printf("8. thoat \n");
		printf("nhap lua chon ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:
				n=0;
				while(n<=0 || n>maxsize){
					printf("nhap vao so phan tu (nho hon 10) ");
					scanf("%d",&n);
					if(n<=0 || n>maxsize){
						printf("so luong khong hop le \n");
					}
				}
				for(int i=0; i<n; i++){
					printf("nhap vao phan tu thu %d ",i+1);
					scanf("%d",arr+i);
				}
				break;
			case 2:
				printf("cac phan tu cua mang la \n");
				for(int i=0; i<n; i++){
					printf("%d ",arr[i]);
				}
				break;
			case 3:
				printf("cac phan tu chan trong mang la \n");
				for(int i=0; i<n; i++){
					if(arr[i]%2==0){
						printf("%d ",arr[i]);
						sum+=arr[i];
					}
				}
				printf("\ntong cac phan tu chan trong mang la %d",sum);
				break;
			case 4:
				max=arr[0],min=arr[0];
				for(int i=0; i<n; i++){
					if(arr[i]>max){
						max=arr[i];
					}if(arr[i]<min){
						min=arr[i];
					}
				}
				printf("phan tu lon nhat la %d \n",max);
				printf("phan tu nho nhat la %d \n",min);
				printf("\n");
				break;
			case 5:
				sum=0;
				printf("cac so nguyen to trong mang la \n");
				for(int i=0; i<n; i++){
					if(is_Prime(arr[i])){
						sum+=arr[i];
						printf("%d ",arr[i]);
					}
				}
				printf("tong cua cac so nguyen to trong mang la %d \n",sum);
				printf("\n");
				break;
			case 6:
				count=0;
				printf("nhap vao so muon kiem tra ");
				scanf("%d",&check);
				for(int i=0; i<n; i++){
					if(arr[i]==check){
						count++;
					}
				}
				printf("trong mang co %d phan tu %d ",count,check);
				break;
			case 7:
				printf("them phan tu ");
				scanf("%d",&addElement);
				printf("vao vi tri ");
				scanf("%d",&addIndex);
				n++;
				if(addIndex<0){
					addIndex=0;
				}if(addIndex>n){
					addIndex=n;
				}
				for(int i=n; i>addIndex-1; i--){
					arr[i]=arr[i-1];
				}
				arr[addIndex-1]=addElement;
				
				break;
			case 8:
				return 0;
			default:
				printf("lua chon khong hop le \n");
				break;
		}
	}
	return 0;
}
