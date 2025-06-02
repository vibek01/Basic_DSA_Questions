#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<int> s, minStack;

public:
    void push(int x) {
        s.push(x);
        if (minStack.empty() || x <= minStack.top())
            minStack.push(x);
    }

    void pop() {
        if (s.top() == minStack.top())
            minStack.pop();
        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return minStack.top();
    }
};

int main() {
    MinStack s;
    s.push(3);
    s.push(5);
    s.push(2);
    s.pop();
    cout << "Min: " << s.getMin() << endl;
    return 0;
}
