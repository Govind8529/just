#include<stdio.h>
int sum(int a,int b)
{
    a=10,b=30;
    int sum=0;
    sum=a+b;
    printf("sum=%d",sum);

}
int factorial(int n)
{
    int i,f=1;
    printf("enter the n value\n");
    scanf("%d",&n);
    if(n<=1)
    {
        return 1;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            f=f*i;
        }
    }
    printf("Factorial of %d is %d",i,f);
}