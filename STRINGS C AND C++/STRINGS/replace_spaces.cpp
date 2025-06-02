// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "ab ab ab";
//     int length = str.length();
//     int i = 0;
//     int j, index;
//     int len = length;
//     while(i < length){
//         if(str[i] == ' '){
//             index = i;
//             for(j = len+2; j>index; j--){
//                 str[j] = str[j-2];
//             }
//             str[index] = '@';
//             str[index + 1] = '4';
//             str[index + 2] = '0';
//             i++;
//             len = len + 2;
//         }
//         else{
//             i++;
//         }
//     }
//     // str.replace(' ', 'a');
//     // cout<<length<<endl;
//     // cout<<len<<endl;
//     // length = len;
//     str.resize(len);
//     cout<<str;
//     // cout<<endl;
//     // for(int k=0; k<len; k++){
//     //     cout<<str[k];
//     // }
//     return 0;
// }


#include<iostream>
#include<string>
using namespace std;
string replaceSpaces(string str){
    string gtr;
	int length = str.length();
	int i=0, j, index;
	int len = length;
	while(i < length){
		if(str[i] == ' '){
			index = i;
			for(j = len+2; j>index; j--){
				str[j] = str[j-2];
			}
			str[index] = '@';
			str[index + 1] = '4';
			str[index + 2] = '0';
			i++;
			len = len + 2;
		}
		else{
			i++;
		}
	}
    // length = len;
    // str.resize(22);
    // cout<<len<<endl;
    gtr = str;
    int len1 = gtr.length();
    len1 = len;
    
    gtr.resize(len);
	return gtr;
}
int main(){
    string str = "My name is Vibek";
    string gtr = replaceSpaces(str);
    // cout<<replaceSpaces(str);
    cout<<gtr;
    return 0;
}











































// int main(){
//     int arr[4] = {1,2,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int index = 2;
//     int i, m = size;
//     for(i=m; i>index; i--){
//         arr[i] = arr[i-1];
//     }
//     arr[index] = 3;
//     size++;
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }