#include<iostream>
using namespace std;
int main(){
    char ch[] = "ab";
    int size = sizeof(ch)/sizeof(ch[0]);
    cout<<"size is : "<<size<<endl;
    int i = 0, j = 1, k = 0, count = 0, n = 0;
    int arr[100] = {0};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    while(j < size){
        if(ch[i] == ch[j]){
            count++;
            j++;
            arr[k] = count;
        }
        else{
            if(count>10){
                int m = count;
                ch[j-2] = m - (m - 1) + 48;
                ch[j - 1] = count - (count - 2) + 48;
                count = 0;
                i = j;
                k++;
            }
            else{
                ch[n] = ch[i];
                cout<<"n here : "<<n<<endl;
                ch[n + 1] = count + 48;
                cout<<"n here after n + 1 : "<<n<<endl;
                n = n + 2;
                count = 0;
                i = j;
                k++;
            }
        }
    }
    cout<<n<<endl;
    for(int i=0; i<n; i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;
    cout<<"Value of k is : "<<k<<endl;
    cout<<arrSize<<endl;
    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}