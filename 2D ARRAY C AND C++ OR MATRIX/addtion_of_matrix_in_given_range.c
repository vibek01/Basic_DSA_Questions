#include<stdio.h>
int main()
{
    int i,j,r,c,r1,r2,c1,c2,sum = 0;
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
    printf("\nThe matrix is : \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter r1 and c1 : ");
    scanf("%d %d",&r1, &c1);
    printf("\nEnter r2 and c2 : ");
    scanf("%d %d",&r2, &c2);
    for(i=r1; i<=r2-r1+1; i++)
    {
        for(j=c1; j<=c2-c1+1; j++)
        {
            sum = sum + a[i][j];
        }
    }
    printf("\nThe sum is : %d", sum);
    return 0;
}