#include <stdio.h>
#include <string.h>


void main()
{
    int i,n;
    char str[20]="aaabbbbbcc";
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        //Count occurences of current character
        int count=1;
        while(i<n-1 && str[i]==str[i+1])
        {
            count++;
            i++;
        }
        //Print character & its count
        printf("%c%d",str[i],count);
    }
}