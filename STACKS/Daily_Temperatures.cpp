#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> dailyTemperatures(const vector<int>& T) {
    int n = T.size();
    vector<int> answer(n, 0);
    stack<int> st;  // indices of days

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && T[i] > T[st.top()]) {
            int prev = st.top();
            st.pop();
            answer[prev] = i - prev;
        }
        st.push(i);
    }

    return answer;
}

int main() {
    vector<int> T = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> ans = dailyTemperatures(T);

    cout << "Days to wait: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
