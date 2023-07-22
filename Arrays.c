#include<stdio.h>
#define MAX_SIZE 10
int main()
{
    char arr[MAX_SIZE],i;
    printf("ENTER THE ELEMENTS: ");
    
     for(i=0;i<MAX_SIZE;i++)
    {
        //gets(arr[i]);
        scanf("%s",arr[i]);
    }
    for(i=0;i<MAX_SIZE;i++)
    {
        printf("%s",arr[i]);
    }
}