#include <iostream>
#include <stack>
using namespace std;

string reverseString(string str) {
    stack<char> s;
    for (char ch : str) s.push(ch);

    string rev = "";
    while (!s.empty()) {
        rev += s.top();
        s.pop();
    }
    return rev;
}

int main() {
    string str = "hello";
    cout << reverseString(str) << endl;  // "olleh"
    return 0;
}
