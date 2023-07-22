#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int r1, c1, r2, c2;
    int a[r1][c1];
    int b[r2][c2];
    int c[r1][c2];
    int i, j;
    printf("enter row1 and col1:\n");
    scanf("%d%d", &r1, &c1);
    printf("enter row2 and col2:\n");
    scanf("%d%d", &r2, &c2);
    if (c1 == r2) 
    {
        printf("enter element of 1st matrix:");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        printf("\n-----------------");
        printf("enter element of 2nd matrix:");
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                scanf("%d", &b[i][j]);
            }
        }
    
        printf("the resultant matrix is:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                c[i][j] += a[i][j] * b[j][i];
            }
        }
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                printf("%d\t", c[i][j]);
            }
            printf("\n\n");
        }
    }
    return 0;
}