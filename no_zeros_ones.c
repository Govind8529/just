#include<stdio.h>

void Count1s0s(int n) 
{
    int no_zeros=0;
    int no_ones=0;
    while(n!=0)
    {
        if(n>0)
        {
            if(n&1)
            {
                no_ones++;
            }
            else
            {
                no_zeros++;
            }
            n = n >> 1;
        }
    }
    printf("Zeros are:%d\n",no_zeros);
    printf("Ones are :%d\n",no_ones);
}
int main()
{
    // LSB is set or not
    int n;
    printf("enter the n value:\n");
    scanf("%d",&n);
    Count1s0s(n);   
}