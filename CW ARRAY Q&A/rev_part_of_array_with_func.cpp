#include<iostream>
using namespace std;
void reversepart(int arr[],int x,int y){
    while(x<y){
            swap(arr[x],arr[y]);
            x++;
            y--;
    }
}
int main(){
    int array[] = {1,2,3,4,5,6};
    int size = sizeof(array)/sizeof(array[0]);
    int a,b;
    cout<<"Enter 1st index : ";
    cin>>a;
    cout<<"Enter 2nd index : ";
    cin>>b;
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    reversepart(array,a,b);
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}