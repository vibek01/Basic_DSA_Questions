#include <iostream>
#include <string>
#include <stack>
using namespace std;

string removeDuplicates(const string& s) {
    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() == c) {
            st.pop();
        } else {
            st.push(c);
        }
    }
    string result;
    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string s = "abbaca";
    cout << "Result: " << removeDuplicates(s) << endl;  // "ca"
    return 0;
}
