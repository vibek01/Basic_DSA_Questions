//1st array = {1,3,5,8,9};
//2nd array = {2,4,6};
//output array = {1,2,3,4,5,6,8,9};

#include<iostream>
using namespace std;
#include<windows.h>
void bubbleSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        bool flag = false;
        for(int j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = true;
            }
        }
        //if already sorted
        if(flag == false) break;
    }
}
void mergeTwoArray(int arr[], int brr[], int crr[], int aSize, int bSize){
    //Time Comp. without bubble sort => O(n)
    //With bubble sort O(n^2)
    for(int i=0; i<aSize; i++){
        crr[i] = arr[i];
    }
    for(int j=0; j<bSize; j++){
        crr[j+aSize] = brr[j];
    }
    //Sorting using Bubble Sort...
    // bubbleSort(crr,(aSize+bSize));
}
int main(){
    int arr[1] = {0};
    int brr[4] = {6,1,3,6};
    int crr[100];
    int aSize = sizeof(arr)/sizeof(arr[0]);
    int bSize = sizeof(brr)/sizeof(brr[0]);
    mergeTwoArray(arr,brr,crr,aSize,bSize);
    for(int i=0; i<(aSize + bSize); i++){
        cout<<crr[i]<<" ";
    }
    return 0;
}