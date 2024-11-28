#include <stdio.h>

int main() {
    int n,m,i=0,j,t=0,sum=0;
    printf("nhap so nguyen: ");
    scanf("%d",&n);
    int arr[n][n];
	while(i<n){
		j=0;
        while(j<n){
            arr[i][j]=t;
            t++;
            j++;
        }
        i++;
    }
    i=0;
    printf("\nMa tran\n");
    while(i<n){
    	j=0;
        while(j<n){
        	if(i==j){
            	printf("%d ",arr[i][j]);
            	sum+=arr[i][j];
			}else{
				printf("  ");
			}
            j++;
        }
        printf("\n");
        i++;
    }
    printf("tong duong cheo: %d",sum);
	return 0;
}

