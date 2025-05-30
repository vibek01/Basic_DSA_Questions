#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,1,2,2,6,2,1,8,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i,j,k,count,brr[50];
    int size1 = size;
    for(i=0; i<size; i++){
        count = 1;
        for(j=i+1; j<size; j++){
            if(arr[i] == arr[j] && j<size1){
                count++;
                for(k=j; k<size1; k++){
                    arr[k] = arr[k+1];
                }
                size1--;
                j--;
            }
        }
        brr[i] = count;
    }
    cout<<size1<<endl;
    for(i=0; i<size1; i++){
        cout<<arr[i]<<" Occurs "<<brr[i]<<" times"<<endl;
    }

    return 0;
}