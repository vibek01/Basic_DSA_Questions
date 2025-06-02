#include<iostream>
using namespace std;
void reverseArray(int arr[], int size, int startIndex, int endIndex){
    int i=startIndex; int j=endIndex;
    while(i<j){
        swap(arr[i],arr[j]);
        i++, j--;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,size,1,4);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}