#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfsMark(vector<vector<char>>& grid, int i, int j) {
    int rows = grid.size();
    int cols = grid[0].size();
    queue<pair<int,int>> q;
    q.push(make_pair(i, j));
    grid[i][j] = '0';

    vector<vector<int>> dirs = {{-1,0}, {1,0}, {0,-1}, {0,1}};

    while (!q.empty()) {
        auto [r, c] = q.front();
        q.pop();
        for (auto& d : dirs) {
            int nr = r + d[0];
            int nc = c + d[1];
            if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && grid[nr][nc] == '1') {
                grid[nr][nc] = '0';
                q.push(make_pair(nr, nc));
            }
        }
    }
}

int numIslands(vector<vector<char>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (grid[i][j] == '1') {
                ++count;
                bfsMark(grid, i, j);
            }
        }
    }

    return count;
}

int main() {
    vector<vector<char>> grid = {
        {'1','1','1','1','0'},
        {'1','1','0','1','0'},
        {'1','1','0','0','0'},
        {'0','0','0','0','0'}
    };
    cout << "Number of islands: " << numIslands(grid) << endl;
    return 0;
}
