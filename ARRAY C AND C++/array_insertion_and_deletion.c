#include<stdio.h>
int main()
{
    int n,sw,dindex,i;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the elements in the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    def:
    printf("\nPress 1 for deletion and \t 3 for displaing the array : ");
    scanf("%d", &sw);
    switch(sw)
    {
        case 1:
        {
            printf("\nEnter the index of the element to be deleted : ");
            scanf("%d", &dindex);
            for(i=dindex; i<n; i++)
            {
                a[i] = a[i+1];
            }
            abc:
             if(sw==2)
            {
                printf("\nThe array is ");
                for(i=0; i<n; i++)
                    {
                        printf("%d", a[i]);
                    } 
            }
            goto def;
        }
        case 2:
        {
            goto abc;
        }
    }
    return 0;
}