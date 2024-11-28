#include <stdio.h>

int main() {
    int i=0,j,t=0,maxN,max;
    int arr[12]={1,6,2,6,4,3,4,6,4,5,6,6};
    int count[2][sizeof(arr)/sizeof(arr[0])]={0};
    while(i<12){
    	count[1][i]=0;
    	i++;
	}
	i=0;
    while(i<12){
    	j=0;
        while(j<sizeof(arr)/sizeof(arr[0])){
        	if(count[0][j+t]!=arr[i]){
        		count[0][j+t]=arr[i];
        		t++;
        		break; 
			}
			j++;
        }
        i++;
    }
    i=0;
    while(i<12){
    	j=0;
        while(j<sizeof(arr)/sizeof(arr[0])){
        	if(count[0][j]==arr[i]){
        		count[1][j]+=1;
			}
			j++;
        }
        i++;
    }
    max=count[1][0];
    maxN=count[0][0];
    i=0;
    while(i<t){
    	if(count[1][i]>max){
    		max=count[1][i];
    		maxN=count[0][i];
		}
        i++;
    }
    printf("so suat hien nhieu nhat la %d",maxN);
	return 0;
}

