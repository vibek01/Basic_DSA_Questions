#include <iostream>
using namespace std;

#define MAX_SIZE 100

class TwoStacks {
    int arr[MAX_SIZE];
    int top1;
    int top2;
public:
    TwoStacks() {
        top1 = -1;
        top2 = MAX_SIZE;
    }

    bool push1(int x) {
        if (top1 + 1 == top2) {
            return false;
        }
        arr[++top1] = x;
        return true;
    }

    bool push2(int x) {
        if (top2 - 1 == top1) {
            return false;
        }
        arr[--top2] = x;
        return true;
    }

    int pop1() {
        if (top1 < 0) {
            return -1;
        }
        return arr[top1--];
    }

    int pop2() {
        if (top2 >= MAX_SIZE) {
            return -1;
        }
        return arr[top2++];
    }
};

int main() {
    TwoStacks ts;
    ts.push1(10);
    ts.push2(20);
    ts.push1(30);
    cout << ts.pop1() << endl;  // 30
    cout << ts.pop2() << endl;  // 20
    return 0;
}
