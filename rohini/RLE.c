#include<stdio.h>
#include<string.h>
//RLE PROGRAM
int main()
{
    int i, n;
    char str[20]="wwwbbwwdewwxxyyybbww";
    n=strlen(str);

    for(i=0;i<n;i++)
    {
        //count current character
        int count=1;
        while(i<n-1 && str[i]==str[i+1])
        {
            count++;
            i++;

        }
        printf("%c %d", str[i], count);
    }
    return 0;
}