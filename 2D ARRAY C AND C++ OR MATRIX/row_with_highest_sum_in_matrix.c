#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter number of rows and columns : ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter elements in the matrix : ");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nThe matrix is : \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    int sum1 = 0, sum2 = 0, sum3 = 0,sum4 = 0;
    for(i=0; i<1; i++)
    {
        for(j=0; j<c; j++)
        {
            sum1 = sum1 + a[i][j];
        }
    }
    for(i=1; i<2; i++)
    {
        for(j=0; j<c; j++)
        {
            sum2 = sum2 + a[i][j];
        }
    }
    for(i=2; i<3; i++)
    {
        for(j=0; j<c; j++)
        {
            sum3 = sum3 + a[i][j];
        }
    }
    printf("\n%d %d %d %d",  sum1,sum2,sum3,sum4);
    return 0;
}