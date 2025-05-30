#include<iostream>
using namespace std;
void insert(int arr[], int size, int index){
    int m = size;
    for(int i=0; i<m; i++){
        arr[m] = arr[m-1];
        m--;
        if(m<index) break;
    }
}
void printArray(int arr[], int size){
        for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n,enter,index,m;
    int a[25];
    cout<<"Enter the size of the array : ";
    cin>>n;
    m=n;
    cout<<"Enter elements in the array : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter the element and index number you want to insert : ";
    cin>>enter>>index;
    cout<<"The original array is : ";
    printArray(a,n);
    insert(a,n,index);
    a[index] = enter;
    cout<<endl<<"Array after insertion : ";
    printArray(a,n+1);
    return 0;
}