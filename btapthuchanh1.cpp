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
	
	printf("Bat dau sap xep bang insertion sort");
	for(int i=1;i<n;i++){
		int Index = i-1, insertValue=a[i];
		while(Index >= 0 && insertValue < a[Index]){
			a[Index+1] = a[Index];
			Index--;
		}
		a[Index + 1] = insertValue;
	}
	printf("\nSap xep thanh cong\n");
	printf("Day la mang cua ban sau khi duoc da duoc sap xep: \n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
