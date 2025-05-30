#include<iostream>
using namespace std;
int main(){
    int i,j,k,n,arr[20],a=0;
    cout<<"Enter a number : ";
    cin>>n;
    for(i=0; i<=n; i++){
        k=0;
        for(j=1; j<=i; j++){
            if(i%j==0){
                k=k+1;
            }
        }
        if(k==2){
            arr[a] = i;
            a=a+1;
        }
    }
    cout<<endl<<"The prime number are : ";
    for(int i=0; i<20; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}