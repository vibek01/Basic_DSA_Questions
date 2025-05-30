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
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is : \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}