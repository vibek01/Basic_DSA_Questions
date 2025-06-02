#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int k=0; k<size; k++){
        cout<<arr[k]<<" ";
    }
    int i,j=size,temp;
    for(i=2; i<size; i++){
        temp = arr[j-1];
        arr[j-1] = arr[i];
        arr[i] = temp;
        j--;
        // cout<<i<<" "<<j<<endl;
        if(i==j || i==j-1) break;
      }
    cout<<endl;
    for(int k=0; k<size; k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}