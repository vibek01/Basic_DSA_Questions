#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char> arr;
    arr.push_back(2);
    arr.push_back('b');
    arr.push_back('c');
    int size = arr.size();
    for(int i=0; i<size; i++)
    {
    cout<<arr[i]<<" ";
    }
}