#include <iostream>
#include <queue>
using namespace std;

class MyStack {
    queue<int> q1;
    queue<int> q2;
public:
    void push(int x) {
        q1.push(x);
    }

    int pop() {
        if (q1.empty()) {
            return -1;
        }
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int topVal = q1.front();
        q1.pop();
        swap(q1, q2);
        return topVal;
    }

    int top() {
        if (q1.empty()) {
            return -1;
        }
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int topVal = q1.front();
        q2.push(topVal);
        q1.pop();
        swap(q1, q2);
        return topVal;
    }

    bool empty() {
        return q1.empty();
    }
};

int main() {
    MyStack st;
    st.push(5);
    st.push(10);
    cout << st.top() << endl;  // 10
    cout << st.pop() << endl;  // 10
    cout << st.empty() << endl; // 0 (false)
    return 0;
}
