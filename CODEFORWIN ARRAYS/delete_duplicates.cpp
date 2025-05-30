#include<iostream>
using namespace std;
int main(){
    // int arr[] = {1,2,3,1,4,2,5};
    int arr[] = {1,1,1,2,2,2,3,4,5,5,2,6,2,7,8,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<endl<<size<<endl;
    int i,j,k,count = 0;
    int size1 = size;
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(arr[i] == arr[j] && j<size1){
                // count++;
                cout<<endl<<j<<endl;
                for(k=j; k<size1; k++){
                    arr[k] = arr[k+1];
                }
                cout<<count<<"  ";
                size1--;
                j--;
            }
            // cout<<count<<endl;
        }
    }
    // cout<<endl<<count<<endl;
    // for(k=0; k<size1; k++){
    //     cout<<arr[k]<<" ";
    // }
    return 0;
}