#include<stdio.h>

void stuff(int N, int arr[10]){
    printf("%d",arr[1]);
    int output[30];

    int i,k,j;
    j=0;
    i=0;
    int count=1;
    while(i<N){            
        
        output[j]=arr[i];
        j++;  
        if(arr[i]==1){
            for(k=i+1;k<N && arr[k]== 1 && count < 5;k++){
                output[j]=arr[k];
                count++;
                if(count==5){
                   // k++;
                    output[k]=0;
                    count=1;
                    // i = 0;
                    // j = i;
                }
                i = k;
                
            }
            

        }
        

        i++;
    }

    for(int p=0;p<N;p++){
        printf("%d",output[p]);
    }
    printf("\n");

}



void main(){
    int N;
    int arr[]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    N = sizeof(arr)/sizeof(arr[0]);

    stuff(N,arr);
}