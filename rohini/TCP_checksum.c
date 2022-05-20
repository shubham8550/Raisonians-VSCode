#include <stdio.h>
//#include <conio.h>
#include <math.h>
// TCP Checksum using C
int sender(int b[10],int k)
{
    int checksum,sum=0,i;
    printf("\n****SENDER****\n");
    for(i=0;i<k;i++)
     sum+=b[i];
     printf("Sum is:%d",sum);
    checksum=~sum;
    printf("\nSender's Checksum is:%d",checksum);
    return checksum;
}

int receiver(int c[10],int k,int scheck)
{
    int checksum,sum=0,i;
    printf("\n\n****RECEIVER****\n");
    for(i=0;i<k;i++)
     sum+=c[i];
     printf("Receiver sum is:%d",sum);
    sum=sum+scheck;
    checksum=~sum;
    printf("\nReceiver Checksum is:%d",checksum);
    return checksum;
} 

void main()
{
    int a[10],i,m,scheck,rcheck;
    printf("\n Enter size of string:");
    scanf("%d",&m);
    printf("\n Enter elements of array:");
    for(i=0;i<m;i++)
     scanf("%d",&a[i]);
     scheck=sender(a,m);
     rcheck=receiver(a,m,scheck);
    if(rcheck==0)
     printf("\n\n No Error in Transmission\n\n");
    else 
     printf("\n\nError Detected");  
}
