#include <iostream>
#include <string>
#include <stack>
using namespace std;

int longestValidParentheses(const string& s) {
    int maxLen = 0;
    stack<int> st;
    st.push(-1);

    for (int i = 0; i < (int)s.length(); ++i) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            st.pop();
            if (st.empty()) {
                st.push(i);
            } else {
                int length = i - st.top();
                if (length > maxLen) {
                    maxLen = length;
                }
            }
        }
    }

    return maxLen;
}

int main() {
    string s = "(()())";
    cout << "Longest valid parentheses: " << longestValidParentheses(s) << endl;  // 6
    return 0;
}
