//Let arr[4] = {1,2,3,4} and brr[1] = {6}
//Then the sum/output will be {1,2,4,0} 
//1 2 3 4
//(+)   6
//1 2 4 0 => answer..........

#include<iostream>
using namespace std;
int main(){
    int arr[4] = {1,3,4};
    int brr[1] = {6};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int brrSize = sizeof(brr)/sizeof(brr[0]);
    int crr[4];
    int i,j;
    int carry=0;
    for(i=0,j=1; i<brrSize; i++,j++){
        crr[arrSize-j] = (arr[arrSize-j] + brr[brrSize-j] + carry);
        cout<<"Sum : "<<crr[arrSize-j]<<endl;
        if(crr[arrSize-j] >= 10){
        crr[arrSize-j] = (arr[arrSize-j] + brr[brrSize-j] + carry)%10;
            carry = crr[arrSize-j]/10;
        }
    }
    int remaining = arrSize-brrSize;
    int k=0;
    while(k<remaining){
        crr[k] = arr[k];
        k++;
    }
    for(int i=0; i<arrSize; i++){
        cout<<crr[i]<<" ";
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     abc:
//     cout<<"Enter a : ";
//     cin>>a;
//     // cout<<"Enter b : ";
//     // cin>>b;
//     cout<<(a/10)<<endl;
//     goto abc;
//     return 0;
// }