#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nThe original array is : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nArray after incrementation : ");
    for(i=0; i<n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", a[i] + 10);
        }
        else 
        {
            printf("%d ", a[i] * 2);
        }
    }
    return 0;
}