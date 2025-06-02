#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Top: " << s.top() << endl;
    s.pop();
    cout << "After pop, Top: " << s.top() << endl;

    cout << "Is Empty: " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}
