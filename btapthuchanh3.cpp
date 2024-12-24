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
	
	printf("Bat dau sap xep tang dan bang bubble sort\n");
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j + 1] < a[j]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j + 1]=tmp;
			}
		}
	}
	
	printf("Da sap xep xong !!!\n");
	printf("Day la mang cua ban sau khi sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
