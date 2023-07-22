#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="Hello world";
    int i,spaces=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=32)
        {
            spaces++;
        }
    }
    printf("%d\n",spaces);
    char *ptr;
    ptr=strchr(str,'w');
    printf("%s\n",ptr);
    char *qtr;
    qtr=strchr(str,'h');
    printf("%s",qtr);

}