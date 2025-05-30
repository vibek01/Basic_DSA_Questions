#include<iostream>
using namespace std;
// void copyarray(int crr[],int abc[], int size11, int size22){
//     for(int i=size11; i<size22; i++){
//         crr[i] = abc[i];
//     }
// }
int main(){
    int arr[] = {1,2,3,4};
    int size1 = sizeof(arr)/sizeof(arr[0]);
    int brr[] = {7,8,9,10,11};
    int size2 = sizeof(brr)/sizeof(brr[0]);
    int size3 = size1+size2;
    int merge[size3];
    int i;
    for(i=0; i<size1; i++){
        merge[i] = arr[i];
    }
    for(i=size1; i<size3; i++){
        merge[i] = brr[i-size1];
    }
    for(int i=0; i<size3; i++){
        cout<<merge[i]<<" ";
    }
    return 0;
}