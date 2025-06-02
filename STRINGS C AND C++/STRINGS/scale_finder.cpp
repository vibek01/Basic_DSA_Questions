#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "ABCDEFGHIJKLABCDEFGHIJKL";
    string str = "AA#BCC#DD#EFF#GG#AA#BCC#DD#EFF#GG#";
    int length = str.length();
    int index = 4;
    int mV = index;
    int j = 0;
    int count = 0, i = 0;
    int arr[8] = {3,3,1,3,3,3,1};
    while(count <= 7){
        // cout<<"Scales are "<<str[mV]<<" ";
        // cout<<str[mV]<<" ";
        if(str[mV] == '#'){
            cout<<str[mV-1];
            cout<<str[mV]<<" ";
        }
        else{
            cout<<str[mV]<<" ";
        }
        mV = j + arr[i] + index;
        if(arr[i] == 3){
            j = j + 3;
        }
        else{
            j++;
        }
        // cout<<"mV : "<<mV<<endl;
        // cout<<j<<endl;
        i++;
        count++;
    }
    // cout<<str[index];
    return 0;
}