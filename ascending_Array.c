#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void displaying_Array(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

void swap(int *xp,int *yp)
{
    int temp;
    temp =  *xp;
    *xp  =  *yp;
    *yp  =  temp;
}

void ascending_order(int arr[],int n)
{
    int i,j,min_ele;
    for(i=0;i<n-1;i++)
    {
        min_ele=i;
        for(j=i+1;j<n;j++)
            if(arr[j] <= arr[min_ele])
                min_ele =j;
            
        
        swap(&arr[min_ele],&arr[i]);
    }
}

void decending_order(int arr[],int n)
{
    int i,j,max_ele;
    for(i=0;i<n-1;i++)
    {
        max_ele=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j] >= arr[max_ele])
            {
                max_ele=j;
            }
        
        }
    }
    printf("%d\n",max_ele);
}

void smallest_ele_largest_ele(int arr[],int n)
{
    int i;
    int min;
    int max;
    min=max=arr[0];
    for(i=1;i<n;i++)
    {
        if(min > arr[i])
            min=arr[i];
        else if(max < arr[i])
            max=arr[i];
    }
    printf("\n Largest and smallest element of an array is %d %d\n",max,min);
}

void sum_of_array_ele(int *arr,int n)
{
    int i;
    int sum=0;
    
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d\t",sum);
}

void freq_of_element(int arr[],int n)
{
    int count=0,i,m;
    printf("\n Enter the element you want to search in the array:\n");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        if(m==arr[i])
        { 
            count++;
        }
    }
    displaying_Array(arr,n);
    printf("\n No of Occurrence of element '%d' in the array is %d \n",m,count);
}

void del_element(int arr[],int n)
{
    int position, c;
    
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &position);
    
    if ( position >= n+1 )    
    printf("Deletion not possible.\n");
    
    else
    {    
        for ( c = position - 1 ; c < n - 1 ; c++ )
        { 
            arr[c] = arr[c+1];        
        }
        printf("Resultant array is\n");
        
       for( c = 0 ; c < n - 1 ; c++ )        
        printf("%d\n", arr[c]); 
    }    
    
}

void array_reverse()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

   displaying_Array(arr,num);
   
/*
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));*/
}

void main()
{
    int arr[]={ 1,2,3 };
    int n=sizeof(arr)/sizeof(arr[0]);      

    // printf("\n Original array:\n ");
    // displaying_Array(arr,n);

    // printf("\n Ascending Order of an array is  \n");
    // ascending_order(arr,n);
    // displaying_Array(arr,n);

    // printf("\n Decending Order of an array is  \n");
    decending_order(arr,n);
    displaying_Array(arr,n);

    // printf("\n Sum of array Elements are: \n");
    // sum_of_array_ele(arr,6);

    // smallest_ele_largest_ele(arr,n);
    // freq_of_element(arr,n);
    
    // del_element(arr,n);
    // array_reverse();
}