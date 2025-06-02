#include <iostream>
#include <stack>
#include <string>
using namespace std;

class BrowserHistory {
    stack<string> backStack;
    stack<string> forwardStack;
    string current;
public:
    BrowserHistory(const string& homepage) {
        current = homepage;
    }

    void visit(const string& url) {
        backStack.push(current);
        while (!forwardStack.empty()) {
            forwardStack.pop();
        }
        current = url;
    }

    string back(int steps) {
        while (steps > 0 && !backStack.empty()) {
            forwardStack.push(current);
            current = backStack.top();
            backStack.pop();
            --steps;
        }
        return current;
    }

    string forward(int steps) {
        while (steps > 0 && !forwardStack.empty()) {
            backStack.push(current);
            current = forwardStack.top();
            forwardStack.pop();
            --steps;
        }
        return current;
    }
};

int main() {
    BrowserHistory bh("leetcode.com");
    bh.visit("google.com");
    bh.visit("facebook.com");
    bh.visit("youtube.com");
    cout << bh.back(1) << endl;        // facebook.com
    cout << bh.back(1) << endl;        // google.com
    cout << bh.forward(1) << endl;     // facebook.com
    bh.visit("linkedin.com");
    cout << bh.forward(2) << endl;     // linkedin.com (no forward)
    cout << bh.back(2) << endl;        // google.com
    cout << bh.back(7) << endl;        // leetcode.com
    return 0;
}
