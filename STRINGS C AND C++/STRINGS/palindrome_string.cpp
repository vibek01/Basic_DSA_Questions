#include<iostream>
using namespace std;
int getLength(char str[]){
    int count = 0, i = 0 ;
    while(str[i] != '\0'){
        count++, i++;
    }
    return count;
}
//IF THE STRING IS NOT CASE SENSTITIVE...
char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = (ch - 'A') + 'a';
        // temp = (ch - 65) + 97;
        return temp;
    }
}
bool checkPalindrome(char str[], int length){
    int start = 0, end = (length-1);
    while(start<=end){
        if(toLowerCase(str[start]) != toLowerCase(str[end])){
            return false;    
        }
        else{
            start++, end--;
        }
    }
    return true;
}

int main(){
    char str[20] = "zooz";
    int length = getLength(str);
    if(checkPalindrome(str,length) == true){
        cout<<"Yes";
    }
    else cout<<"No";
    cout<<endl<<str;
    return 0; 
}