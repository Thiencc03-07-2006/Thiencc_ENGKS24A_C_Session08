#include <stdio.h>

int main() {
	int arr[3][5]={{93,67,84,74,9},{14,45,88,90,60},{23,36,74,33,45}};
    int i=0,j;
    int max=arr[0][0],min=arr[0][0];
    while(i<3){
    	j=0;
        while(j<5){
            if(max<arr[i][j]){
            	max=arr[i][j];
			}
			if(min>arr[i][j]){
            	min=arr[i][j];
			}
            j++;
        }
        i++;
    }
    printf("so lon nhat %d,so nho nhat %d",max,min);
	return 0;
}

