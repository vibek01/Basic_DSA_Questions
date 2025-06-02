#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

string simplifyPath(const string& path) {
    stack<string> st;
    int i = 0;
    int n = path.length();

    while (i < n) {
        if (path[i] == '/') {
            ++i;
            continue;
        }
        string part;
        while (i < n && path[i] != '/') {
            part.push_back(path[i]);
            ++i;
        }
        if (part == "." || part.empty()) {
            // ignore
        } else if (part == "..") {
            if (!st.empty()) {
                st.pop();
            }
        } else {
            st.push(part);
        }
    }

    string result;
    while (!st.empty()) {
        result = "/" + st.top() + result;
        st.pop();
    }
    if (result.empty()) {
        result = "/";
    }
    return result;
}

int main() {
    string path = "/a//b////c/d//././/..";
    cout << simplifyPath(path) << endl;  // "/a/b/c"
    return 0;
}
