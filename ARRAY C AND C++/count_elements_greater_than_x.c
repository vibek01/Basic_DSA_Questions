#include<stdio.h>
int main()
{
    int n,i,count = 0,m;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter a number : ");
    scanf("%d", &m);
    for(i=0; i<n; i++)
    {
        if(a[i] > m)
        {
            count++;
        }
    }
    printf("\nNumber of elements greater than %d are : %d\n",m,count);
    return 0;
}