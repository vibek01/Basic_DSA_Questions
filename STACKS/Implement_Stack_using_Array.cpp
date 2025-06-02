#include <iostream>
using namespace std;

#define MAX 1000

class Stack {
    int top;
    int arr[MAX];
public:
    Stack() { top = -1; }

    bool push(int x) {
        if (top >= MAX - 1) return false;
        arr[++top] = x;
        return true;
    }

    int pop() {
        if (top < 0) return -1;
        return arr[top--];
    }

    int peek() {
        if (top < 0) return -1;
        return arr[top];
    }

    bool empty() {
        return top < 0;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    cout << s.pop() << endl;  // 20
    cout << s.peek() << endl; // 10
    return 0;
}
