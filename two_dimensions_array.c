#include<stdio.h>
//#include<stdlib.h>
int main()
{
    int rows1,col1;
    int rows2,col2;
    int arr[3][3];
    int arr1[3][3];
    int c[3][3];
    int i,j,k;
    printf("enter the 1st rows and coloumns value:\n");
    scanf("%d%d",&rows1,&col1);

    printf("enter the 2nd rows and coloumns value:\n");
    scanf("%d%d",&rows2,&col2);
    
    if(col1==rows2)
    {
        printf("\n Enter the 1st array elements:\n");
        for(i=0;i<rows1;++i)
        {
            for(j=0;j<col1;++j)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        printf("\n Enter the 2nd array elements:\n");
        for(i=0;i<rows2;++i)
        {
            for(j=0;j<col2;++j)
            {
                scanf("%d",&arr1[i][j]);
            }
        }  

        for(i=0;i<rows1;++i)
        {
            for(j=0;j<col2;++j)
            {
                // c[i][j] =0;
                // for(k=0;k<col2;++k)
                // {
                c[i][j] += (arr[i][j]) * (arr1[j][i]);
                // }
            }
        }
        for(i=0;i<rows1;++i)
        {
            for(j=0;j<col2;++j)
            {
                printf("%d\n",c[i][j]);
            }
        }
    }
    return 0;
}