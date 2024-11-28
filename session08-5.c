#include <stdio.h>

int main() {
    int i=0,j,sum=0;
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    while(i<3){
    	j=0;
        while(j<4){
        	if(i==0||i==2||j==0||j==3){
        		sum+=arr[i][j];
			}
			j++;
        }
        i++;
    }
    printf("tong duong bien la %d",sum);
	return 0;
}

