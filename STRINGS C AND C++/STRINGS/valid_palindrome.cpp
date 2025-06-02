// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "My name is Vibek";
//     string ctr;
//     int length = str.length();
//     int i,j;
//     for(i=length,j=0; i>=0; i--,j++){
//         if(str[i] != ' '){
//             // ctr[j] = str[i];
//             // cout<<ctr[j];
//             // cout<<"value of j : "<<j<<endl;
//         }
//         else{
//             // ctr[j] = str[i];
//             // cout<<ctr[j];
//             cout<<"Value of j : "<<j<<endl;
//         }
//     }
//     cout<<endl<<ctr<<endl;
//     cout<<endl<<str;
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "My name is Vibek";
    int length = str.length();
    int count = 1;
    for(int i=0; i<length; i++){
        if(str[i] == ' '){
            count++;
        }
    }
    int j=length-1;
    for(int i=1; i<=count; i++){
        cout<<i<<" th Word is : ";
        while(str[j] != ' ' && j>=0){
            cout<<str[j];
            j--;
        }
        j--
        ;
        cout<<endl;   
        // if(j>=length) break;
    }
    cout<<endl<<"j is "<<j;
    cout<<endl<<str;
    // cout<<count;
    return 0;
}