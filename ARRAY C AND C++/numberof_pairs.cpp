// Find the total number of pairs whose value is equal to a given 
// value x.
#include<iostream>
using namespace std;
int main(){
    int i,j,n,x,count = 0;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements in the array : ";
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter a number : ";
    cin>>x;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[i] + a[j] == x) {
            count++;
            }
        }
    }
    cout<<endl;
    cout<<endl<<"The total number of pairs is : "<<count;
    return 0;
}