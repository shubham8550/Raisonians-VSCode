# include<stdio.h>
# include<stdlib.h>
int main(){
    int rq[10], i, n, seek=0, head;
    printf("Enter number of rq: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("RQ[%d]\t", i+1);
        scanf("%d", &rq[i]);
    }
    printf("Enter head: ");
    scanf("%d", &head);

    for(i=0; i<n; i++){
        seek = seek + abs(rq[i]-head);
        head = rq[i];
    }    

    for(i=0; i<n; i++){
        printf("RQ[%d]\t %d\n", i+1, rq[i]);
    }

    printf("Total seek: %d\n", seek);
    return 0;
}