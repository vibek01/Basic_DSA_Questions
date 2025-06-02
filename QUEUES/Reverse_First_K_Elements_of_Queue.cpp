#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseFirstK(queue<int>& q, int k) {
    if (q.empty() || k > q.size()) {
        return;
    }
    stack<int> st;
    for (int i = 0; i < k; ++i) {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
    int rem = q.size() - k;
    for (int i = 0; i < rem; ++i) {
        q.push(q.front());
        q.pop();
    }
}

int main() {
    queue<int> q;
    for (int i = 10; i <= 50; i += 10) {
        q.push(i);
    }
    int k = 3;
    reverseFirstK(q, k);
    cout << "Queue after reversing first " << k << ": ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}
