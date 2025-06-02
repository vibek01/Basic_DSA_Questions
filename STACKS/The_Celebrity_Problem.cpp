#include <iostream>
#include <vector>
#include <stack>
using namespace std;

/*
  Assume a function knows(a, b) returns true if a knows b.
  Here we simulate via an adjacency matrix.
*/
bool knows(const vector<vector<int>>& M, int a, int b) {
    return M[a][b] == 1;
}

int findCelebrity(const vector<vector<int>>& M, int n) {
    stack<int> st;
    for (int i = 0; i < n; ++i) {
        st.push(i);
    }

    while (st.size() > 1) {
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();

        if (knows(M, a, b)) {
            st.push(b);
        } else {
            st.push(a);
        }
    }

    int candidate = st.top();
    for (int i = 0; i < n; ++i) {
        if (i != candidate) {
            if (knows(M, candidate, i) || !knows(M, i, candidate)) {
                return -1;
            }
        }
    }
    return candidate;
}

int main() {
    vector<vector<int>> M = {
        {0, 1, 1, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0}
    };
    int n = 4;
    int celeb = findCelebrity(M, n);
    if (celeb == -1) {
        cout << "No celebrity found" << endl;
    } else {
        cout << "Celebrity is: " << celeb << endl;
    }
    return 0;
}
