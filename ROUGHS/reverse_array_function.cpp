#include<iostream>
using namespace std;
void printarray(int arr[], int size){
    cout<<"The array is : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
void reversearray(int arr[],int size){
    cout<<endl<<"The reverse array is : ";
    for(int i=size-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int hp[5] = {1,2,3,4,5};
    printarray(hp,5);
    reversearray(hp,5);
    return 0;
}