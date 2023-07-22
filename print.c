#include<stdio.h>
#include<string.h>
int ascii_to_integer()
{
    char str[100]="4567 1234 5678 9129";
    int n=0;
    int a,i,j;
    for(i=0;i<strlen(str);i++)
    {
        n=n*10+str[i]-48;
    }
    printf("%d\n",n);
    return 0;
}