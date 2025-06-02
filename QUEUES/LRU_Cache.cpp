#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

class LRUCache {
    int capacity;
    list<pair<int,int>> dll;  // key, value pairs
    unordered_map<int, list<pair<int,int>>::iterator> mp;

public:
    LRUCache(int cap) {
        capacity = cap;
    }

    int get(int key) {
        if (mp.find(key) == mp.end()) {
            return -1;
        }
        auto it = mp[key];
        int val = it->second;
        dll.erase(it);
        dll.push_front(make_pair(key, val));
        mp[key] = dll.begin();
        return val;
    }

    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            dll.erase(mp[key]);
            dll.push_front(make_pair(key, value));
            mp[key] = dll.begin();
        } else {
            if (dll.size() == capacity) {
                auto last = dll.back();
                mp.erase(last.first);
                dll.pop_back();
            }
            dll.push_front(make_pair(key, value));
            mp[key] = dll.begin();
        }
    }
};

int main() {
    LRUCache cache(2);
    cache.put(1, 1);
    cache.put(2, 2);
    cout << cache.get(1) << endl;   // returns 1
    cache.put(3, 3);                // evicts key 2
    cout << cache.get(2) << endl;   // returns -1 (not found)
    cache.put(4, 4);                // evicts key 1
    cout << cache.get(1) << endl;   // returns -1
    cout << cache.get(3) << endl;   // returns 3
    cout << cache.get(4) << endl;   // returns 4
    return 0;
}
