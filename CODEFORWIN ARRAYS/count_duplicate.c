#include<stdio.h>
int main(){
    int arr[] = {1,1,3,4,2,5,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0,i,j;
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}