#include<iostream>
using namespace std;
int product(int arr[],int size){
    int product = 1;
    for(int i=0; i<size; i++){
        product = product * arr[i];
    }
    return product;
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
    x = product(abc,size);
    cout<<endl<<"The product of the elements is : "<<x;
    return 0;
}