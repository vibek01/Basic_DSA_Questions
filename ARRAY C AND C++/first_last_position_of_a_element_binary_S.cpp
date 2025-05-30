#include<iostream>
using namespace std;
int firstOccurence(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;
    int ans = -1;
    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;// for last occurence it will be start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return ans;
}
int main(){
    int a[6] = {1,1,2,2,5,5};
    int size = sizeof(a)/sizeof(a[0]);
    int b[4] = {1,1,3,4};
    int bSize = sizeof(b)/sizeof(b[0]);
    int c[2] = {1,1};
    int cSize = sizeof(c)/sizeof(c[0]);
    int d[7] = {1,1,2,3,4,4,4};
    int dSize = sizeof(d)/sizeof(d[0]);
    int e[1] = {0};
    int eSize = sizeof(e)/sizeof(e[0]);
    int resulta = firstOccurence(a,size,2);//2
    int resultb = firstOccurence(b,bSize,1);//0
    int resultc = firstOccurence(c,cSize,0);//-1
    int resultd = firstOccurence(d,dSize,4);//4
    int resulte = firstOccurence(e,eSize,0);//0
    if(resulta == 2){
        cout<<"Test Success"<<endl;
    }
    if(resultb == 0){
        cout<<"Test Success"<<endl;
    }
    if(resultc == -1){
        cout<<"Test Success"<<endl;
    }
    if(resultd == 4){
        cout<<"Test Success"<<endl;
    }
    if(resulte == 0){
        cout<<"Test Success"<<endl;
    }
    // cout<<resulta<<endl;
    // cout<<resultb<<endl;
    // cout<<resultc<<endl;
    // cout<<resultd<<endl;
    // cout<<resulte<<endl;
    return 0;
}