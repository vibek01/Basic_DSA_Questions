#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    // char *ch1 = a[0];
    // char *ch2 = a[4];
    // int *p1 = a[0];
    // int *p2 = a[4];
    // printf("%d",p2 - p1);
    // printf("\n%d", ch2-ch1);
    int *p1 = &a;
    printf("%p",&p1);
    return 0; 
}