#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char c) {
    if (c == '+' || c == '-') {
        return 1;
    }
    if (c == '*' || c == '/') {
        return 2;
    }
    return 0;
}

string infixToPostfix(const string& expr) {
    stack<char> st;
    string result;

    for (char c : expr) {
        if (isalnum(c)) {
            result.push_back(c);
        } else if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result.push_back(st.top());
                st.pop();
            }
            if (!st.empty() && st.top() == '(') {
                st.pop();
            }
        } else {
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                result.push_back(st.top());
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }

    return result;
}

int main() {
    string infix = "a+b*(c^d-e)^(f+g*h)-i";
    // Note: This code treats '^' as lowest precedence (like any other non-handled char)
    cout << "Postfix: " << infixToPostfix(infix) << endl;
    return 0;
}
