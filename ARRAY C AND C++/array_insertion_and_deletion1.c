#include <stdio.h>
int main()
{
    int n, sw, dindex, i;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter elements in the array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nPress 1 for deletion and \n2 for displaying of the array : ");
    scanf("%d", &sw);
    if (sw == 1)
    {
        printf("\nEnter the index of the element to be deleted : ");
        scanf("%d", &dindex);
        for (i = dindex; i < n; i++)
        {
            a[i] = a[i + 1];
        }
        printf("\nAfter deletion the array is : ");
        for (i = 0; i < n - 1; i++)
        {
            printf("%d ", a[i]);
        }
    }
    else if (sw == 2)
    {
        printf("\nThe array is : ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}