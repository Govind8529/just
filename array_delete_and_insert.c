
// Array Reverse
/*
#include<stdio.h>
int main()
{
    int a[10];
    printf("Enter the elements\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Displaying the array:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }

    for(int i=10;i>1;i--)
    {
        printf("%d\t",a[i]);
    }
}*/
// Array Printing and Reading without recursion
/*
#include<stdio.h>

int main()
{
    // Declaring the array of 10 elements 
    // Generalized Logic
    int arr[10];
    // Declaring the 'i' variable for iterations
    int i;
    // 'For' loop
    // Taking the input from user
    printf("Enter the array Elements\n");
    for(i=0;i<10;i++)
    {
        // Reading the array elements
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        // Displaying the array elements
        printf("%d\t",arr[i]);
    }
}*/
// Array printing and reading with recursion
/*
#include<stdio.h>

int read_array(int a[])
{
    
    static int i=0;
    printf("Enter the array elements\n");
    scanf("%d",&a[i]);
    
    if(i < 5)
    {
        i++;
        
        read_array(a);
        return 0;
    }
}

int write_array(int a[])
{
    
    static int i=0;
    if(i<5)
    {
        printf("%d\n",a[i]);
        i++;
        
        write_array(a);
        
        return 0;
    }
}

int main()
{
    int a[5];
    read_array(a);
    write_array(a);
}
*/
//sum of array elements in an array using recursion
/*
#include<stdio.h>
int Sumofarray(int a[])
{

    static int sum=0;

    static int i=0;
    
    if(i<5)
    {
        sum=sum+a[i];
        i++;
        Sumofarray(a);
        
    }
    return  sum;
}
int main()
{
    int a[5],b,i;
    printf("enter the elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    b=Sumofarray(a);
    printf("\nSum is %d\n",b);
} */
