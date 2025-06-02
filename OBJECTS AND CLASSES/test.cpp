#include<iostream>
using namespace std;

// A CONSTRUCTOR IS CALLED TO INITIALIZE THE DATA MEMBERS OF THE CLASS,
// NOT TO CREATE NEW OBJECTS (REMEMBER)

class Person{
    protected:
    int password = 1;
    public:
    void getPass(){
        cout<<this->password;
    }
};

int main(){
    Person vibek;
    vibek.getPass();
    return 0;
}





































// class test{
//     protected:
//     int a = 1;
//     friend class testKaFriend;
//     public:
//     void func(){
//         cout<<this->a;
//     }
//     int getA(int value){
//         a = value;
//         return a;
//     }
// };
// class testKaFriend{
//         public:
//         void print(test v){
//             cout<<v.a;
//         }
// };

// int main(){
//     // const int a = 5;
//     // test english;
//     // int k = 3;
//     // english.func(k);
//     // cout<<endl;
//     // int d = english.getA(5);
//     // english.func(k);
//     // cout<<endl;
//     // cout<<d;
//     test english;
//     testKaFriend bengali;
//     english.func();
//     cout<<endl;
//     bengali.print(english);
//     return 0;
// }






// class Person{
//     public:
//     // string name = "Vibek Prasad Bin";
//     // int age = 21;
//     string name = "Prasad";
//     int height;
//     int age;
// };

// int main(){
//     Person vibek;
//     cout<<vibek.name<<endl;
//     vibek.name = "BIn";
//     cout<<vibek.name<<endl;
//     // cout<<vibek.age<<endl;
//     cout<<sizeof(vibek);
//     return 0;
// }