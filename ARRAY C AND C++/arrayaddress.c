#include<stdio.h>
int main()
{
    int a[5], *j, i;
    printf("Enter elements in the array : ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++)
    {
       *j = &a[i];
    }
    for(i=0; i<5; i++)
    {
        printf("The element is : %d\nThe address is : %u\n", a[i], j);
    }
    return 0;
}