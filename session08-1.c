#include <stdio.h>

int main() {
    int arr[5]={1,2,3,4,5},i=0;
    i=sizeof(arr)/sizeof(arr[0])-1;
    while(i>=0){
        printf("%d ",arr[i]);
        i--;
    }
	return 0;
}
