#include<iostream>
#include<limits>
using namespace std;
int main()
{
    int i,n,temp,temp1;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements in the array : ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    temp = a[0];
    for(i=0; i<n; i++)
    {
        if(a[i] > temp)
        {
            temp = a[i];
        }
    }
    for(i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i] < temp && a[i] > a[j])
            {
                temp1 = a[i];
            }
        }
    }
    cout<<endl<<"The largest element is : "<<temp;
    cout<<endl<<"And the second largest element is "<<temp1;
    return 0;
}