#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
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
int main(){ 
    int arr[5] = {1,2,4,5,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
