#include<iostream>
using namespace std;
int main(){
    int k;
    abc:
    cout<<"Enter k : ";
    cin>>k;
    int a;
    a = k % 2;
    cout<<a<<endl;
    goto abc;
    return 0;
}