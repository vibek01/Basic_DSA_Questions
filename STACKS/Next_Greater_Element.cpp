#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreater(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1);
    stack<int> st;  // store indices

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && arr[i] > arr[st.top()]) {
            result[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    return result;
}

int main() {
    vector<int> arr = {4, 5, 2, 25};
    vector<int> ans = nextGreater(arr);

    cout << "Next greater elements: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
