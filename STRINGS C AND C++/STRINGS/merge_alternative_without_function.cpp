#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "abc";
    string gtr = "pqrs";
    int strLength = str.length();
    int gtrLength = gtr.length();
    string merged;
    int mergedLength = strLength + gtrLength;
    int i=0, j=0, k=0;
    if(strLength == gtrLength){
        while(k<mergedLength){
            if(k % 2 == 0){
                merged[k] = str[i];
                i++, k++;
        }
            else{
                merged[k] = gtr[j];
                j++, k++;
            }
        }
    }
    else{
        while(i<strLength && j<gtrLength){
            if(k % 2 == 0){
                merged[k] = str[i];
                i++, k++;
            }
            else{
                merged[k] = gtr[j];
                j++, k++;
            }
        }
    }
    if(strLength > gtrLength){
        while(k < mergedLength){
            merged[k] = str[i];
            i++, k++;    
        }
    }
    else{
        while(k < mergedLength){
            merged[k] = gtr[j];
            j++, k++;
        }
    }
    for(int i=0; i<mergedLength; i++){
        cout<<merged[i]<<" ";
    }
    return 0;
}