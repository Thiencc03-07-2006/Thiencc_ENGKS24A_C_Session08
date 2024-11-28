#include <stdio.h>

int main() {
    int i=0,j,t=0,max,check;
    int arr[12]={1,6,2,6,4,3,4,6,4,5,4,6};
    int count[2][sizeof(arr)/sizeof(arr[0])]={0};
    while(i<12){
    	count[1][i]=0;
    	i++;
	}
	i=0;
    while(i<12){
    	j=0;
    	check=1;
        while(j<t){
        	if(count[0][j]==arr[i]){
        		check=0;
        		break;
			}
			j++;
        }
        if(check){
        	count[0][t]=arr[i];
        	t++;
		}
        i++;
    }
    i=0;
    while(i<12){
    	j=0;
        while(j<sizeof(arr)/sizeof(arr[0])){
        	if(count[0][j]==arr[i]){
        		count[1][j]++;
			}
			j++;
        }
        i++;
    }
    max=count[1][0];
    i=0;
    while(i<t){
    	if(count[1][i]>max){
    		max=count[1][i];
		}
        i++;
    }
    printf("so suat hien nhieu nhat:");
    i=0;
    while(i<t){
    	if(count[1][i]==max){
    		printf(" %d",count[0][i]);
		}
        i++;
    }
	return 0;
}

