#include <stdio.h>

int main(){
	int arr[5]={1,2,3,4,5},i=0,num;
	printf("vui long nhap so nguyen: ");
	scanf("%d",&num);
	while(i+1<=sizeof(arr)/sizeof(arr[0])){
		if(num==arr[i]){
			printf("arr[%d]=%d\n",i,arr[i]);
			return 0;
		}
		++i;
	}
	printf("so nhap vao khong co trong mang");
	return 0;
}
