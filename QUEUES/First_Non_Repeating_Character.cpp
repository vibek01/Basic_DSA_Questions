#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<char> firstNonRepeating(const string& stream) {
    vector<int> freq(256, 0);
    queue<char> q;
    vector<char> result;

    for (char c : stream) {
        freq[c]++;
        q.push(c);

        while (!q.empty()) {
            if (freq[q.front()] > 1) {
                q.pop();
            } else {
                result.push_back(q.front());
                break;
            }
        }

        if (q.empty()) {
            result.push_back('#');
        }
    }

    return result;
}

int main() {
    string s = "aabc";
    vector<char> ans = firstNonRepeating(s);
    cout << "Stream output: ";
    for (char c : ans) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}
