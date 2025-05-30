#include<iostream>
using namespace std;
int main()
{
    int i,s=0,a[6];
    cout<<"Enter elements in the array : ";
    for(i=0; i<6; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<6; i++)
    {
        s = s + a[i];
    }
    cout<<"The sum is : "<<s;
    return 0;
}