#include<iostream>
using namespace std;
void printarray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {2,4,6,8};
    int size1 = sizeof(arr)/sizeof(arr[0]);
    int even[50],odd[50];
    int i,j,k,count1=0,count2=0;
    for(i=0; i<size1; i++){
        if(arr[i] % 2 == 0){
            even[count1] = arr[i];
            count1++;
        }
        else{
            odd[count2] = arr[i];
            count2++;
        }
    }
    printarray(even,count1);
    cout<<endl;
    printarray(odd, count2);
    return 0;
}