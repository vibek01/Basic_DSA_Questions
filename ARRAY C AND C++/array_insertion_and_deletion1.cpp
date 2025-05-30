#include<iostream>
using namespace std;
int main()
{
    int i,n,dindex,sw;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements in the array : ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    abc:
    cout<<"Press 1 for deletion and 2 for displaing the array : ";
    cin>>sw;
    if(sw==1)
    {
        cout<<endl<<"Enter the index of the element to be deleted : ";
        cin>>dindex;
        if(dindex >= n)
        {
            cout<<endl<<"INDEX NUMBER CAN'T BE GREATER THAN ARRAY SIZE"<<endl<<endl;
            goto abc;
        }
        for(i=dindex; i<n; i++)
        {
            a[i] = a[i+1];
        }
        cout<<endl<<"The array is : ";
        for(i=0; i<n-1; i++)
        {
            cout<<a[i]<<" ";
        }
    }
    if(sw==2)
    {
        cout<<endl<<"The array is : ";
        for(i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<endl<<endl;
    return 0;
}