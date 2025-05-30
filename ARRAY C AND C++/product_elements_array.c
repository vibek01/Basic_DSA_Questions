#include<stdio.h>
int main()
{
    int i,n,pro = 1;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        pro = pro * a[i];
    }
    printf("\nThe product is : %d", pro);
    return 0;
}