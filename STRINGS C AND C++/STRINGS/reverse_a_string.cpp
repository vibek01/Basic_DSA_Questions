#include<iostream>
using namespace std;
void stringReverse(char ch[], int length){
    int i=0, j=(length-1);
    while(i<j){
        
        swap(ch[i], ch[j]);
        i++,j--;
    }
}

int getLength(char str[]){
    int count = 0;
    for(int i=0; str[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char str[20] = "Vibek";
    int length = getLength(str);
    stringReverse(str,length);
    cout<<str;
    return 0;
}