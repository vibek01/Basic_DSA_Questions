#include<iostream>
using namespace std;
int main()
{
    int i,n,m,count = 0;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements in the array : ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"Enter a number : ";
    cin>>m;
    for(i=0; i<n; i++)
    {
        if(a[i] > m)
        {
            count++;
        }
    }
    cout<<endl<<"Number of elements greater than "<<m<<" are : "<<count;
    cout<<endl;
    return 0;
}