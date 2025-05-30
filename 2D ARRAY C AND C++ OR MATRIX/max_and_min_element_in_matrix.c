#include<stdio.h>
#include<limits.h>
int main()
{
    int i,j,r,c,ma1,ma2,mi1,mi2;
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
    int max = INT_MIN, min = INT_MAX;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(max<a[i][j])
            {
                max = a[i][j];
                ma1 = i; ma2= j;
            }
            if(min>a[i][j])
            {
                min = a[i][j];
                mi1= i; mi2= j;
            }
        }
    }
    printf("\nMaximum element is : %d And the index is : (%d, %d)", max,ma1,ma2);
    printf("\nThe Minimum element is : %d And the index is : (%d, %d)", min,mi1,mi2);
    return 0;
}