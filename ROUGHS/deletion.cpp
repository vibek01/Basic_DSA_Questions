#include<iostream>
using namespace std;
int main(){
    int enter,m,n,index,i;
    int a[25];
    cout<<"Enter the size of the array : ";
    cin>>n;
    m=n;
    cout<<"Enter elements in the array : ";
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter the index of the element to be deleted : ";
    cin>>index;
    cout<<"The original array is : ";
    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    //for(i=0; i<n; i++){
        while(index!=m){
            a[index] = a[index + 1];
            index++;
        }
        cout<<endl<<"Array after deletion : ";
        for(i=0; i<n-1; i++){
            cout<<a[i]<<" ";
        }
    return 0;
}