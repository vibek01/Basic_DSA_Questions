#include<iostream>
using namespace std;
int main(){
    int a[5] = {1,2,3,4,5};
    int b[5];
    int n = 5;
    for(int i=0; i<n; i++){
        b[i] = a[n-i-1];
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
    }
    return 0;
}