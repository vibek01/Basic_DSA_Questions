#include<iostream>
using namespace std;
void mergeTwoArray(int arr[], int brr[], int crr[], int size1, int size2){
    int i=0, j=0;
    int index = 0;
    while(i < size1 && j < size2){
        if(arr[i] < brr[j]){
            crr[index] = arr[i];
            index++, i++;
            // cout<<"Value of i is : "<<i<<endl;
        }
        else{
            crr[index] = brr[j];
            index++, j++;
            // cout<<"Value of j is : "<<j<<endl;
        }
    }
    if(i < size1){
        while(i<size1){
            crr[index] = arr[i];
            index++, i++;
            // cout<<"Value of i is (if cond.) : "<<i<<endl; 
        }
    }
    else{
        while(j<size2){
            crr[index] = brr[j];
            index++, j++;
            // cout<<"Value of j is (if cond.) : "<<j<<endl; 
        }
    }
}
int main(){
    int arr[5] = {1,2,5,6,8};
    int brr[4] = {0,1,2,3};
    int crr[100];
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int brrSize = sizeof(brr)/sizeof(brr[0]);
    mergeTwoArray(arr,brr,crr,arrSize,brrSize);
    for(int i=0; i<(arrSize+brrSize); i++){
        cout<<crr[i]<<" ";
    }
    return 0;
}