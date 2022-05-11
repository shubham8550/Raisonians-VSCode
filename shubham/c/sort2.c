#include<stdio.h>

void main(){
    int i,j,temp,N,number[30];
    printf("How  Many nums? ");
    scanf("%d",&N);
    
    printf("Enter nums : ");

    for(i=0;i<N;i++){
        scanf("%d",&number[i]);
    }

    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            if(number[i]>number[j]){
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
    }
    for(i=0;i<N;i++){
        printf("%d",number[i]);
    }
}