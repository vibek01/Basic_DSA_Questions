#include<stdio.h>
int main()
{
    int i,a[5],s=0;
    printf("Enter elements in the array : ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++)
    {
        s = s + a[i];
    }
    printf("The sum is : %d", s);
    return 0;
}