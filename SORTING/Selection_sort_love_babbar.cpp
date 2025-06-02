#include<iostream>
using namespace std;
//SWAP KAAM NAHIN KARTA VS CODE MAIN KHUD BANANA PARA...-_-  
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void selectionSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        int minIndex = i;
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){
    int arr[5] = {6,8,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}