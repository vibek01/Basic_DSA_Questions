#include<iostream>
using namespace std;
int main(){
    // int arr[] = {2,2,6,2,1,8,0};
    int arr[] = {1,1,2,3};
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
    int temp = -465481345,a;
    for(i=0; i<size1; i++){
        if(brr[i] > temp){
            temp = brr[i];
            a = i;
        }
    }
    cout<<temp<<endl;
    cout<<"Maximum occuring element is "<<arr[a]<<endl;
    return 0;
}