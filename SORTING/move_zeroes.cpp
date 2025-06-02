#include<iostream>
using namespace std;
// void moveZeroes(int arr[], int size){
//     int i=0, j=size-1;
//     int index = 0;
//     while(i<size){
//         if(arr[i] != 0){
//             arr[index] = arr[i];
//             i++;
//             index++;
//             cout<<"index : "<<index<<endl; 
//         }
//         else{
//             // arr[j] = arr[i];
//             // j--;
//             i++;
//         }
//     }
//     // while(index<size){
//     //     arr[j] = 0;
//     //     j--;
//     // }
//     for(int j=size-1; j>=index; j--){
//         arr[j] = 0;
//     }
// }

void moveZeroes(int arr[], int size){
    int i=0,j=0;
    while(i<size){
        if(arr[i] == 0){
            i++;
        }
        else{
            swap(arr[j],arr[i]);
            i++;
            j++;
        }
    }
}
int main(){
    int arr[5] = {1,2,3,0,4};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    moveZeroes(arr,arrSize);
    for(int i=0; i<arrSize; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}