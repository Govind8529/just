#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[100]="4567 1234 5678 9129";
    char *ptr;
    ptr=str;
    int i,j;
    i=strlen(str)-1;
    
    for(j=i;j%2==0;j++)
    {
       printf("%c\n",str[i-j]); 
    }
}              