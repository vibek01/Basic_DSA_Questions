#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,1,2,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count;
    for(int i=0; i<size; i++){
        count = 1;
        for(int j=i+1; j<size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}