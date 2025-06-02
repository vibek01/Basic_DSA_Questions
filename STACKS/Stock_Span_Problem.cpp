#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> calculateSpan(const vector<int>& prices) {
    int n = prices.size();
    vector<int> span(n);
    stack<int> st;  // store indices

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && prices[i] >= prices[st.top()]) {
            st.pop();
        }
        if (st.empty()) {
            span[i] = i + 1;
        } else {
            span[i] = i - st.top();
        }
        st.push(i);
    }

    return span;
}

int main() {
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    vector<int> spans = calculateSpan(prices);

    cout << "Spans: ";
    for (int x : spans) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
