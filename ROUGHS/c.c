#include<stdio.h>
int main()
{
    int i,j,k,size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int a[size];
    printf("Enter elements in the array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe array is : ");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0; i<size-1; i++)
    {
        for(j=i; j<size-1-i; j++)
        {
            if(a[j] < a[j+1])
            {
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;      
            }      
        }
    }
    printf("\nThe sorted array is : ");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}