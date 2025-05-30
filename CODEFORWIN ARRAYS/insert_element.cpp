#include<iostream>
using namespace std;
void insert(int arr[],int element,int index,int size){
    for(int i=size; i>=index; i--){
        arr[i] = arr[i-1];
    }
}
int main(){
    int array[] = {10,20,30,40,50};
    int size = sizeof(array)/sizeof(array[0]);
    cout<<size<<endl;
    int element1,index,i;
    for(i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl<<"Enter element to insert : ";
    cin>>element1;
    cout<<"Enter position/index : ";
    cin>>index;
    if(index>size){
        cout<<endl<<"Position out of bound";
    }
    // for(i=size; i>index; i--){
    //     array[i]=array[i-1];
    // }
    insert(array,element1,index,size);
    array[index] = element1;
    size++;
    for(i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}