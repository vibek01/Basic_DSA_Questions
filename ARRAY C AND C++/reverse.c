#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n],b[n];
    printf("Enter elements in the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The .... array is : ");
    for(i=0; i<n; i++)
    {
        b[i] = a[n-1-i];
        printf("%d ", b[i]);
    }
    return 0;
}