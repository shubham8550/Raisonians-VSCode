#include<stdio.h>
#include<string.h>

void main(){
    char ip[100];
    char op[100];

    scanf("%s",ip);
    //printf("%s",ip);

    for(int i=0;i<strlen(ip);i++){
        if(strchr(op,ip[i])==NULL){
            printf("%c",ip[i]);
            op[i]=ip[i];
        }
    }

    printf("\n");


}