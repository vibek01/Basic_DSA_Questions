#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int snakesAndLadders(vector<vector<int>>& board) {
    int n = board.size();
    vector<int> moves(n * n + 1, -1);
    int idx = 1;
    bool leftToRight = true;

    for (int r = n - 1; r >= 0; --r) {
        if (leftToRight) {
            for (int c = 0; c < n; ++c) {
                moves[idx++] = board[r][c];
            }
        } else {
            for (int c = n - 1; c >= 0; --c) {
                moves[idx++] = board[r][c];
            }
        }
        leftToRight = !leftToRight;
    }

    vector<bool> visited(n * n + 1, false);
    queue<pair<int,int>> q;
    q.push(make_pair(1, 0));
    visited[1] = true;

    while (!q.empty()) {
        auto [cell, dist] = q.front();
        q.pop();
        if (cell == n * n) {
            return dist;
        }
        for (int dice = 1; dice <= 6; ++dice) {
            int nextCell = cell + dice;
            if (nextCell > n * n) {
                break;
            }
            if (moves[nextCell] != -1) {
                nextCell = moves[nextCell];
            }
            if (!visited[nextCell]) {
                visited[nextCell] = true;
                q.push(make_pair(nextCell, dist + 1));
            }
        }
    }

    return -1;
}

int main() {
    vector<vector<int>> board = {
        {-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1},
        {-1,-1,-1,-1,-1,-1},
        {-1,35,-1,-1,13,-1},
        {-1,-1,-1,-1,-1,-1},
        {-1,15,-1,-1,-1,-1}
    };
    cout << "Min moves to reach end: " << snakesAndLadders(board) << endl;
    return 0;
}
