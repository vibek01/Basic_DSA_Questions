#include<stdio.h>
int main()
{
    int i,j,r,c,sum = 0;
    printf("Enter the number of rows and columns : ");
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
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            sum = sum + a[i][j];
        }
    }
    printf("The sum is : %d", sum);
    return 0;
}