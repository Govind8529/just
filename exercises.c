// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n,i,com;
    printf("enter the size:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    com=sumofarr(a);
    printf("sum of array elements=%d",com);
}
int sumofarr(int a[])
{
    static int sum=0;
    static int i=0;
    //int n;
    if(i<(sizeof(a)))//sizeof(int)))
    {
        sum=sum+a[i];
        i++;
        sumofarr(a);
    }
    return sum;
    
    
}
   