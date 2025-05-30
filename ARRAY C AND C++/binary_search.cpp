// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int num;
//     cout<<"Enter number to search : ";
//     cin>>num;
//     bool flag;
//     for(int i=0; i<size; i++){
//         flag = false;
//         if(arr[i] == num){
//             cout<<"Element found at index "<<i;
//             flag = true;
//             break;
//         }
//     }
//     if(flag == false){
//         cout<<"Element not found";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int num = 1;
//     int mid;
//     for(int i=0; i<(size/2)+1; i++){
        
//     }
// }




// #include<iostream>
// using namespace std;
// int main(){
// int a = 5, b = 2;
// cout<<a/b+1;
// return 0;
// }

#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = (start + end)/2;
    while(start <= end){
            if(arr[mid] == key){
            return mid;
            }
            if(key > arr[mid]){
            start = mid + 1;
            }
            if(key < arr[mid]){
            end = mid - 1;
            }
            mid = (start + end)/2;
        }
        return -1;
    }
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]); 
    int result = binarySearch(arr,size,5);
    cout<<result;
    return 0;
}