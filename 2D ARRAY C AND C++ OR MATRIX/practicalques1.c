#include<stdio.h>
int main(){
    int a[3][2];
    int i,j;
    printf("Enter elements in the 2d array : \n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("Enter element in the %d %d postion : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Elements in the 2d array are : \n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%d\t", a[i][j]);
        }
        if(j==2) printf("\n");
    }
    return 0;
}