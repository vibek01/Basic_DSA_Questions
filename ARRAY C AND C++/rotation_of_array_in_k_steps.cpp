#include<iostream>
using namespace std;
int main()
{
    int i,n,k;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n], b[n];
    cout<<"Enter elements in the array : ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        b[i] = a[i];
    }
    cout<<endl<<"Enter number of steps : ";
    cin>>k;
    for(i=0; i<k; i++)
    {
        b[i] = a[n-1];
    }
    for(i=0; i<n; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}