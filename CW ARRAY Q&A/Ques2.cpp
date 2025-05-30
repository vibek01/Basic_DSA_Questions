#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;
    int arr[size];
    for(int i=1; i<=size; i++){
        cout<<"Enter element : ";
        cin>>arr[i];
        cout<<endl<<"The element is : ";
        cout<<arr[i]<<endl;
    }
    return 0;
}