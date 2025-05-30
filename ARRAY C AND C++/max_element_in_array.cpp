#include<iostream>
using namespace std;
int main()
{
    int i,n,temp = 0;
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
        if(a[i] > temp)
        {
            temp = a[i];
        }
    }
    cout<<endl<<"The greatest element in the array is : "<<temp;
    return 0;
}