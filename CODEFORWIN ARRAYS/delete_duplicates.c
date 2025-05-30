#include<stdio.h>
// void delete_element(int xyz, int index, int size){

// }
int main(){
    int arr[] = {1,2,1,3,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i,j,k;
    int size1 = size;
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(arr[i] == arr[j]){
                for(k=arr[j]; k<size1; k++){
                    arr[k] = arr[k+1];
                }
                printf("\n");
                for(i=0; i<size1; i++){
                printf("%d ",arr[i]);
                }
                size1--;
                printf("\n%d\n",size1);
            }
        }
    }
    printf("\n");
    for(i=0; i<size1; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}