#include<iostream>
using namespace std;
void reverseArray(int arr[], int size, int startIndex, int endIndex){
    int i=startIndex; int j=endIndex;
    while(i<j){
        swap(arr[i],arr[j]);
        i++, j--;
    }
}
void rotateArray(int arr[],int size, int k){
    reverseArray(arr,size,(size-k),(size-1));
    reverseArray(arr,size,0,(size-k-1));
    reverseArray(arr,size,0,(size-1));
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    rotateArray(arr,size,k);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
    // reverseArray(arr,size,(size-k),(size-1));
    // reverseArray(arr,size,0,(size-k-1));
    // reverseArray(arr,size,0,(size-1));