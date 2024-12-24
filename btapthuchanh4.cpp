#include <stdio.h>
#define maxSize 100

int main(){
	int n=0;
	do{
		printf("Moi nhap vao so phan tu cua mang (1 -> 100): ");	scanf("%d", &n);
		if(n < 1 || n > maxSize)	printf("So phan tu ban nhap khong hop le vui long nhap lai !!!\n");
	}while(n < 1 || n > maxSize);
	
	printf("So phan tu hop le !!!");
	printf("\nMoi nhap vao gia tri cua cac phan tu trong mang:\n");
	
	int a[n]={0};
	for(int i=0;i<n;i++){
		printf("Array[%d]: ", i+1);
		scanf("%d",a + i);
	}
	printf("Nhap gia tri hoan tat !!!\n");
	
	int searchValue = 0;
	printf("Moi nhap vao gia tri ban muon tim kiem trong mang: ");	scanf("%d",&searchValue);
	
	for(int i=0;i<n;i++){
		if(searchValue == a[i]){
			printf("Gia tri %d co trong mang va co vi tri thu %d",searchValue,i+1);
			return 0;
		}
	}
	
	printf("Gia tri %d khong ton tai trong mang",searchValue);
}
