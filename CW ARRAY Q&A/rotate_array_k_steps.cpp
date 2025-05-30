#include<iostream>
using namespace std;
void partreverse(int arr[], int x, int y){
    while(x<y){
        swap(arr[x],arr[y]);
        x++;
        y--;
    }
}
int main(){
    int array[] = {1,2,3,4};
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    int k;
    cout<<endl<<"Enter steps : ";
    cin>>k;
    while(k>size){
            k = k-size;
        }
    partreverse(array,0,size-k-1);
    partreverse(array,size-k,size-1);
    cout<<endl;
    partreverse(array,0,size-1);
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}