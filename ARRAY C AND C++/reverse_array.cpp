#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n],b[n];
    cout<<"Enter elements in the array : ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"The reverse of the array is : ";
    for(i=0; i<n; i++)
    {
        b[i] = a[n-1-i];
        cout<<b[i]<<" ";
    }
    return 0;
}