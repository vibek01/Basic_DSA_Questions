/* File Handling with C++ using ifstream & ofstream class object*/
/* To write the Content in File*/
/* Then to read the content of file*/
#include <iostream>

/* fstream header file for ifstream, ofstream, 
fstream classes */
#include <fstream>

using namespace std;

// Driver Code
int main()
{
	// Creation of ofstream class object
	ofstream fout;

	string line;

	// by default ios::out mode, automatically deletes
	// the content of file. To append the content, open in ios:app
	// fout.open("sample.txt", ios::app)
	fout.open("sample.txt");

	// Execute a loop If file successfully opened
	while (fout) {

		// Read a Line from standard input
		getline(cin, line);

		// Press -1 to exit
		if (line == "-1")
			break;

		// Write line in file
		fout << line << endl;
	}

	// Close the File
	fout.close();

	// Creation of ifstream class object to read the file
	ifstream fin;

	// by default open mode = ios::in mode
	fin.open("sample.txt");

	// Execute a loop until EOF (End of File)
	while (getline(fin, line)) {
	
		// Print line (read from file) in Console
		cout << line << endl;
	}

	// Close the file
	fin.close();

	return 0;
}










// #include<iostream>
// using namespace std;

// class Father{
//     private:
//     int hairColor = 10;
//     int height = 20;
//     public:
//     void getHairColor(){
//         cout<<"Hair color : "<<hairColor<<endl;
//     }
//     void getHeight(){
//         cout<<"Height : "<<height<<endl;
//     }
//     int solve(int input){
//         height = input;
//         hairColor = height / 2;
//         return hairColor;
//     }
// };

// class Mother{
//     public:
//     int hairColor = 0;
//     int height;
// };

// class Child: public Father, public Mother{
//     public:
//     // int age = Father::hairColor;
//     public:
//     void getAge(){
//         // cout<<"inside child : "<<age;
//     }
// };

// int main(){

//     Father vibek;
//     vibek.getHairColor();
//     vibek.getHeight();
//     int get = vibek.solve(2);
//     cout<<get;
//     cout<<endl;
//     vibek.getHairColor();
//     vibek.getHeight();




//     // Child vibek;
//     // // int var = vibek.Father::hairColor;
//     // cout<<var<<endl;
//     // cout<<vibek.Mother::hairColor<<endl;
//     // vibek.getAge();
//     return 0;
// }






































// // class Human{
// //     public:
// //     int height;
// //     int age = 21;
// //     void getAge(int age){
// //         cout<<"private age : "<<this->age<<endl;
// //         cout<<"age inside getAge : "<<age<<endl;
// //         this->age= age;
// //         cout<<"updated private age : "<<this->age<<endl;
// //     }
// // };

// // class Male: public Human{
// //     public:
// //     void setAgeOfHuman(int ageValue){
// //         this->age = ageValue;
// //         cout<<ageValue;
// //     }
// // };

// // int main(){
// //     Human vibek;
// //     vibek.getAge(42);
// //     Male ramesh;
// //     ramesh.getAge(12);
// //     cout<<"Setting age of Human"<<endl;
// //     ramesh.setAgeOfHuman(1);
// //     return 0;
// // }