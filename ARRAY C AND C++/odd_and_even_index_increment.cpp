#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements in the array : ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(i%2 == 0)
        {
            cout<<a[i] + 10<<"";
        }
        else
        {
            cout<<a[i]*2<<"";
        }
    }
    return 0;
}