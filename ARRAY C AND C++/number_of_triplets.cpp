#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,x,count = 0;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements in the array : ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter a number : ";
    cin>>x;
    cout<<endl<<"The triplets are : ";
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            for(k=j+1; k<n; k++)
            {
                if(a[i] + a[j] + a[k] == x)
                {
                    count++;
                    cout<<"("<<a[i]<<", "<<a[j]<<", "<<a[k]<<") ";
                }
            }
        }
    }
    cout<<endl<<"Number of triplets : "<<count;
    return 0;
}