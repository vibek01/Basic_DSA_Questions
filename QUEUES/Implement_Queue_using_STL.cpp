#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> stlQueue;
    
    stlQueue.push(5);
    stlQueue.push(15);
    stlQueue.push(25);
    
    cout << "Front element in STL queue: " << stlQueue.front() << endl;  // 5
    
    stlQueue.pop();
    cout << "Front element after one pop: " << stlQueue.front() << endl;  // 15
    
    cout << "Current queue size: " << stlQueue.size() << endl;  // 2
    
    while (!stlQueue.empty()) {
        cout << "Dequeued: " << stlQueue.front() << endl;
        stlQueue.pop();
    }
    
    cout << "Is STL queue empty? " << (stlQueue.empty() ? "Yes" : "No") << endl;
    return 0;
}
