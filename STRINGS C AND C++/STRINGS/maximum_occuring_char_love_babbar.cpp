//THE CODE I MADE HAD A TC OF O(N^2)
//BUT LOVE BABBAR CODE HAS TC OF O(N)

#include<iostream>
// #include<string>
using namespace std;
char maxOccuringCharacter(string str, int length){
    int arr[26] = {0};
    for(int i=0; i<length; i++){
        int index;
        index = str[i] - 'a';
        arr[index]++;
    }
    int max = -1                ;
    char ch;
    for(int i=0; i<26; i++){    
        if(arr[i] > max){
            max = arr[i];
            ch = i + 'a';
        }
    }
    return ch;
}
int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin,str);
    int length = str.length();
    char chh = maxOccuringCharacter(str, length);
    cout<<chh;
    return 0;
}