#include<iostream>
using namespace std;
int greatest(int a,int b,int c,int d){
    int arr[4] = {a,b,c,d},temp = arr[0];
    for(int i=0; i<4; i++){
        if(arr[i] > temp){
            temp = arr[i];
        }
    }
    return temp;
}
int main(){
    int s,t,u,v;
    cout<<"Enter four integers : ";
    cin>>s>>t>>u>>v;
    int x = greatest(s,t,u,v);
    cout<<x;
    return 0;
}