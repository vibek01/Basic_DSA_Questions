#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int>& st, int x) {
    if (st.empty() || x > st.top()) {
        st.push(x);
        return;
    }
    int temp = st.top();
    st.pop();
    sortedInsert(st, x);
    st.push(temp);
}

void sortStack(stack<int>& st) {
    if (!st.empty()) {
        int x = st.top();
        st.pop();
        sortStack(st);
        sortedInsert(st, x);
    }
}

int main() {
    stack<int> st;
    st.push(30);
    st.push(-5);
    st.push(18);
    st.push(14);
    st.push(-3);

    sortStack(st);

    cout << "Sorted stack (top to bottom): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}
