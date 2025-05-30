#include<iostream>
using namespace std;

void reverseArrayUsingPointer(int *arr, int size){
    int start = 0, end = size-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int n = 5;
    int arr[4] = {1,2,3,4};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    // cout << *ptr;
    reverseArrayUsingPointer(arr, arrSize);
    for(int i=0; i<arrSize; i++){
        cout << arr[i] << " ";
    }
}