// Given an array of marks of students, if the mark of any student is less than 35
// print its roll number.
#include<stdio.h>
int main()
{
    int i,a[5];
    printf("Enter elements in the array : ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Less than 35 elements are : \n");
        for(i=0; i<5; i++)
        {
            if(a[i] < 35)
            {
                printf("%d\n", a[i]);
            }
        }
    return 0;
}