#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int largestRectangleArea(const vector<int>& heights) {
    int n = heights.size();
    stack<int> st;
    int maxArea = 0;

    for (int i = 0; i <= n; ++i) {
        int h = (i == n ? 0 : heights[i]);
        while (!st.empty() && h < heights[st.top()]) {
            int height = heights[st.top()];
            st.pop();
            int width;
            if (st.empty()) {
                width = i;
            } else {
                width = i - st.top() - 1;
            }
            int area = height * width;
            if (area > maxArea) {
                maxArea = area;
            }
        }
        st.push(i);
    }

    return maxArea;
}

int main() {
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout << "Max rectangle area: " << largestRectangleArea(heights) << endl;
    return 0;
}
