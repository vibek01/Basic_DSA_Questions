#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    queue<pair<int,int>> q;
    int fresh = 0;

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (grid[r][c] == 2) {
                q.push(make_pair(r, c));
            } else if (grid[r][c] == 1) {
                ++fresh;
            }
        }
    }

    int minutes = 0;
    vector<vector<int>> dirs = {{-1,0}, {1,0}, {0,-1}, {0,1}};

    while (!q.empty() && fresh > 0) {
        int sz = q.size();
        for (int i = 0; i < sz; ++i) {
            auto [r, c] = q.front();
            q.pop();
            for (auto& d : dirs) {
                int nr = r + d[0];
                int nc = c + d[1];
                if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && grid[nr][nc] == 1) {
                    grid[nr][nc] = 2;
                    q.push(make_pair(nr, nc));
                    --fresh;
                }
            }
        }
        ++minutes;
    }

    if (fresh > 0) {
        return -1;
    }
    return minutes;
}

int main() {
    vector<vector<int>> grid = {
        {2,1,1},
        {1,1,0},
        {0,1,1}
    };
    cout << "Minutes to rot all: " << orangesRotting(grid) << endl;
    return 0;
}
