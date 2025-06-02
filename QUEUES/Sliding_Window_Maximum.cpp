#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> maxSlidingWindow(const vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> result;
    deque<int> dq;  // store indices

    for (int i = 0; i < n; ++i) {
        // remove indices out of this window
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }
        // remove smaller values
        while (!dq.empty() && nums[i] >= nums[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i >= k - 1) {
            result.push_back(nums[dq.front()]);
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> ans = maxSlidingWindow(nums, k);
    cout << "Sliding window max: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
