#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    arr[5] = 6;
    arr[6] = 7;
    cout<<endl;


    // arr[size+1];
    arr[5] = 6;
    arr[6] = 7;
    cout<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
