#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int size,x;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int abc[size];
    cout<<"Enter elements in the array : ";
    for(int i=0; i<size; i++){
        cin>>abc[i];
    }
    x = sum(abc,size);
    cout<<endl<<"The sum of the elements is : "<<x;
    return 0;
}