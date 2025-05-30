#include<iostream>
using namespace std;
void deleteElement(int xyz[], int index, int size){
    for(int i=index; i<size; i++){
        xyz[i] = xyz[i+1];
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i,index1;
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Enter the element (index) you want to delete : ";
    cin>>index1;
    if(index1>=size){
        cout<<endl<<"Index out of bound";
    }
    else{
        deleteElement(arr,index1,size);
        size--;
        cout<<endl;
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
     }
    } 
return 0;
}