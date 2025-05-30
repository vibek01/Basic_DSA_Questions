#include<iostream>
using namespace std;
int main(){
    int size,x;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements in the array : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int mx = arr[0];
    int mx2 = -44132165;
    for(int i=1; i<size; i++){
        mx = max(mx,arr[i]);
    }
    for(int i=0; i<size; i++){
        if(arr[i] != mx){
            mx2 = max(mx2, arr[i]);
        }
    }
    cout<<endl<<"The largest element is : "<<mx;
    cout<<endl<<"The second largest element is : "<<mx2;
}