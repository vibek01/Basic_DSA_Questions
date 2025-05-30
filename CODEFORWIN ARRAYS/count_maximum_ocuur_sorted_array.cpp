#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,1,1,2,2,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count=0,i,j,k;
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(arr[i] == arr[j]){
                while(arr[i] == arr[j]){
                    count++;
                    i++;
                    j++;
                }
                break;
            }
        }
    }
    cout<<count;
    return 0;
}