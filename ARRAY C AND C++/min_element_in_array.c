#include<stdio.h>
int main()
{
    int n,i,temp;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    temp = a[i];
    for(i=0; i<n; i++)
    {
        if(a[i] < temp)
        {
            temp = a[i];   
        }
    }
    printf("\nThe smallest element in the array is : %d", temp);
    return 0;
}