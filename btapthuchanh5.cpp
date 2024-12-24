#include <stdio.h>

int main(){
	int numbers[5] = {2,4,6,8,10};
	
	int searchNum = 0;
	printf("Moi ban nhap vao gia tri can tim kiem trong mang: ");	scanf("%d", &searchNum);
	
	int low=0,high=4,mid,flag=0;
	while(low <= high){
		mid = (low + high)/2;
		if(numbers[mid] == searchNum){
			flag=1;
			break;
		}
		
		else if(numbers[mid] < searchNum)	low = mid + 1;
		
		else	high = mid - 1;
	}
	
	if(flag == 1){
		printf("Gia tri %d co ton tai trong mang va nam o vi tri thu %d",searchNum,mid+1);
	}
	else	printf("Gia tri %d khong ton tai trong mang",searchNum);
}
