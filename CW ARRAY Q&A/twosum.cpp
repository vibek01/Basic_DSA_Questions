#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,1,3,6,2,4,8,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x,i,j,count = 0;
    cout<<"Enter a number : ";
    cin>>x;
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(arr[i] + arr[j] == x){
                count = count + 1;
                cout<<"("<<arr[i]<<","<<arr[j]<<")";
            }
        }
    }
    cout<<endl<<count;
    return 0;
}