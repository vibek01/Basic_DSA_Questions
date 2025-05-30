#include<iostream>
using namespace std;
int main(){
    string str = "Vibek Prasad Bin";
    cout<<str;
    int n = str.length();
    cout<<endl<<n;
    // for(int i=0; i<n; i=i+2){
    //     str[i]= 'a';
    // }
    cout<<endl;
    for(int i=0; i<n; i++){
        if(i%2 == 0){
            str[i] = 'a';
        }
        cout<<str[i];
    }
    return 0;
}