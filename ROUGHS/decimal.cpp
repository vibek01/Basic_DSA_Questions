#include<iostream>
#include<string>
using namespace std;
// int main(){
//     string str = "1254.4215";
//     int size = str.length();
//     cout<<"Numbers before decimal : ";
//     for(int i=0; i<size; i++){
//         if(str[i] == '.'){
//             cout<<endl<<"Numbers after decimal : ";
//             continue;
//         }
//         cout<<str[i]<<" ";
//     }
//     return 0;
// }
int OddishOrEvenish(int number){
    int i,sum = 0;
    while(number != 0){
        i = number % 10;
        sum = sum + i;
        number = number / 10;
    }
    if(sum % 2 == 0){
        cout<<"Evenish"<<endl;
    }
    else{
        cout<<"Oddish"<<endl;
    }
    return sum;
}
int main(){
    int x = OddishOrEvenish(43);
    int y = OddishOrEvenish(64);
    int z = OddishOrEvenish(0);
    cout<<endl<<x;
    cout<<endl<<y;
    cout<<endl<<z;
    return 0;
}
/*
function OddishOrEvenish(number){
    let i, sum = 0;
    while(number != 0){
        i = number % 10;
        sum = sum + i;
        number = Math.trunc(number) / 10;
    }
}
*/