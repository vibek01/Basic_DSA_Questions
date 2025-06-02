#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "My name is Vibek";
    int length = str.length();
    int arr[100];

    int temp = -1;
    char ch;
    int j;
    for(int i=0; i<length; i++){
        int count = 0;
        for(j=i+1; j<length; j++){
            if(str[i] == str[j] && str[j] != ' '){
                count++;
            }
            if(count > temp){
                temp = count;
                ch = str[j];
            }
            // arr[i] = count;
        }
        // cout<<"Count is : "<<count<<endl;
    }
    cout<<ch<<endl;
    cout<<temp;
    // int temp = arr[0];
    // for(int i=0; i<length; i++){
    //     cout<<arr[i]<<" ";
    // }
    // for(int i=0; i<length; i++){
    //     if(arr[i] > temp){
    //         temp = arr[i];
    //     }
    // }
    // cout<<temp;
    return 0;
}