#include<stdio.h>
int main()
{
while(1)
    {
    if((strlen(fn)>7)||(strlen(mn)>15)||(strlen(ln)>5))
    {
        printf ("limit exceeded,\n");
        printf("re enter fn,mn,ln:\n");
        scanf("%s %s %s",fn,mn,ln);
    }
    }
}