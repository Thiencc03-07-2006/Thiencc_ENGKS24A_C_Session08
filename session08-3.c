#include <stdio.h>

int main() {
    int n,i=0,j;
    printf("nhap so nguyen: ");
    scanf("%d",&n);
    int arr[n][n];
	while(i<n){
		j=0;
        while(j<n){
            arr[i][j]=i; 
            j++;
        }
        i++;
    }
    i=0;
    printf("\nMa tran\n");
    while(i<n){
    	j=0;
        while(j<n){
            printf("%d ",arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
	return 0;
}

