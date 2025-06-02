// #include<iostream>
// using namespace std;
// void swaap(int a, int b){
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// int minimum(int arr[], int size){
//     int min = arr[0];
//     int k;
//     for(int i=0; i<size; i++){
//         if(arr[i] < min){
//             min = arr[i];
//             k = i;
//         }
//     }
//     return min;
// }
// int main(){
//     int arr[5] = {0,2,5,4,-6};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int result = minimum(arr,size);
//     // swaap(result,arr[0]);
//     arr[0] = result;

//     for(int i=0; i<size; i++){
//         cout<<arr[i];
//     }
//     cout<<endl<<result;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {5,2,3,4,1};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<size; i++){
//         i
//     }
// }

#include<iostream>
using namespace std;
// int minimum(int arr[], int size){
//     int min = arr[0];
//     int k = 0;
//     int j = 0;
//     for(int i=j; i<size; i++){
//         if(arr[i] < min){
//             min = arr[i];
//             k = i;
//         }
//     }
//     j++;
//     return min;
// }
int main(){
    int arr[5] = {5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i;
    int temp;
    int k = 0;
    int result;
    int j = 0;
    int m = 0;
    for(int a=0; a<size-1; a++){
        int min = arr[j];
        for(i=j; i<size; i++){
            if(arr[i] < min){
                min = arr[i];
                k = i;
            }
        }
        j++;
        temp = arr[a];
        arr[a] = min;
        arr[k] = temp;
        k = i;
        cout<<endl<<"Value of k is : "<<k<<endl;
    }
    // temp = arr[0];
    // arr[0] = min;
    // arr[k] = temp;
    for(i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    // cout<<endl<<min<<endl;
    // cout<<i<<endl;
    // cout<<k<<endl;
    return 0;
}