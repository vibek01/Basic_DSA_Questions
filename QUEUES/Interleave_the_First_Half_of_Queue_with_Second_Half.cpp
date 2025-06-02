#include <iostream>
#include <queue>
using namespace std;

void interleaveQueue(queue<int>& q) {
    int n = q.size();
    if (n % 2 != 0) {
        return;  // assume even size for simplicity
    }
    int half = n / 2;
    queue<int> firstHalf;

    for (int i = 0; i < half; ++i) {
        firstHalf.push(q.front());
        q.pop();
    }

    while (!firstHalf.empty()) {
        int x = firstHalf.front();
        firstHalf.pop();
        q.push(x);

        int y = q.front();
        q.pop();
        q.push(y);
    }
}

int main() {
    queue<int> q;
    for (int i = 1; i <= 6; ++i) {
        q.push(i);
    }
    interleaveQueue(q);
    cout << "Interleaved: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}
