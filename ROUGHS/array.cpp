#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<endl;
    int i=0;
    while(i<5){
        cout<<arr[i]<<" ";
        i++;
    }
    return 0;
}