#include<stdio.h>
int main(){
    int n,i,m,index,a[25];
    
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    m=n;

    printf("Enter elements in the array : ");

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nEnter the index of the element you want to delete : ");
    scanf("%d", &index);

    printf("The Original Array is : \n");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    //Deleting elements
    while(index!=m-1){
       a[index] = a[index + 1]; 
       index++;
    }

    printf("\nArray after deletion : \n");
    for(i=0; i<n-1; i++){
        printf("%d ", a[i]);
    }
}