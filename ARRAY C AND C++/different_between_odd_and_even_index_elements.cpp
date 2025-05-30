//Find the difference between sum of odd indices and sum of
//even indices elements.
#include<iostream>
using namespace std;
int main()
{
    int i,n,sumodd = 0,sumeven = 0;
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
            sumeven+=a[i];
        }
        else
        {
            sumodd+=a[i];
        }
    }
    cout<<"The sum of even index  elements is : "<<sumeven;
    cout<<endl<<"The sum of odd index elements is : "<<sumodd;
    cout<<endl<<"And the difference is : "<<sumeven-sumodd;
    return 0;
}