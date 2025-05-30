#include<stdio.h>
int main() 
    {
    int i, n, so = 0, se = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in the array : ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) 
    {
        if (i%2 == 0) 
        {
            se += a[i];
        } 
        else 
        {
            so += a[i];
        }
    }
    printf("The ..... is : %d\n", se);
    printf("The ..... is : %d\n", so);
    printf("And the difference is : %d\n", se - so);
    return 0;
}