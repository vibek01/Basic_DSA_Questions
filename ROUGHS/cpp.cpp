#include<iostream>
using namespace std;
void getArray(int arr[], int size){
    for(int i=0; i<size; i++){
         cin>>arr[i];
    }
}
int sumArray(int arr[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int i,j,k;
    cout<<"Enter the size of the array : ";
    cin>>k;
    int a[k];
    cout<<"Enter elements in the array : ";
    getArray(a,k);
    j = sumArray(a,k);
    cout<<endl<<j<<endl<<endl;
    return 0;
}