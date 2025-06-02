#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<string> generateBinary(int n) {
    vector<string> result;
    queue<string> q;
    q.push("1");

    for (int i = 0; i < n; ++i) {
        string s = q.front();
        q.pop();
        result.push_back(s);
        q.push(s + "0");
        q.push(s + "1");
    }

    return result;
}

int main() {
    int n = 5;
    vector<string> binaries = generateBinary(n);
    cout << "First " << n << " binary numbers: ";
    for (const string& s : binaries) {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
