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
	
	printf("Bat dau sap xep giam dan bang selection sort\n");
	for(int i=0;i<n-1;i++){
		int maxIndex=i;
		for(int j=i+1;j<n;j++){
			if(a[j] > a[maxIndex]){
				maxIndex = j;
			}
		}
		int tmp=a[i];	a[i] = a[maxIndex];	a[maxIndex] = tmp;
	}
	
	printf("Da sap xep xong !!!\n");
	printf("Day la mang cua ban sau khi sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
