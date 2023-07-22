#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k,rem,rev=0,sum=0;
    printf("Enter the number\n");//21
    scanf("%d",&n);
    int num=n;

    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    
    printf("%d\n",sum);//3
    
    if(n%sum==0)
    {
        printf("it is a harshad number");
    }
    else
    {
        printf("it is not a harshad number");
    }
}