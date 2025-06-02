#include<iostream>
#include<string>
using namespace std;
string mergeAlternative(string word1, string word2){
    string merged;
    int length1 = word1.length();
    int length2 = word2.length();
    int mergeLength = length1 + length2;
    merged.resize(mergeLength);
    int i = 0, j = 0, k = 0;
    if(length1 == length2){
        while(k < (length1 + length2)){
            if(k % 2 == 0){
                merged[k] = word1[i];
                i++, k++;
            }
            else{
                merged[k] = word2[j];
                j++, k++;
            }
        }
    }
    else{
        while(i < length1 && j < length2){
            if(k % 2 == 0){
                merged[k] = word1[i];
                i++, k++;
            }
            else{
                merged[k] = word2[j];
                j++, k++;
            }
        }
    } 
        if(length1 > length2){
            while(k < (length1 + length2)){
                merged[k] = word1[i];
                i++, k++;
            }
        }
        else{
            while(k < (length1 + length2)){
                merged[k] = word2[j];
                j++, k++;
            }
        }
        return merged;
    }
int main(){
    string str = "abcd";
    string gtr = "pq";
    // string alternateMerged;
    // alternateMerged = mergeAlternative(str, gtr);
    // for(int i=0; i<(strLength + gtrLength); i++){
    //     cout<<alternateMerged[i]<<" ";
    // }
    // cout<<endl<<merged;
    cout<<mergeAlternative(str, gtr);
    return 0;
}