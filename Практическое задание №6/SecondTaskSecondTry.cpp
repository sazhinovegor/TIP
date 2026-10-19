#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, w;
    cin >> n >> m >> w;

    vector<vector<char>> grid(n, vector<char>(m, '0'));

    for (int i = 0; i < w; ++i) {
        int r, c;
        cin >> r >> c;
        grid[r - 1][c - 1] = '*';
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '*') {
                for (int di = -1; di <= 1; ++di) {
                    for (int dj = -1; dj <= 1; ++dj) {
                        if (di == 0 && dj == 0) continue;
                        int ni = i + di;
                        int nj = j + dj;
                        if (ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] != '*') {
                            grid[ni][nj]++;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << grid[i][j];
        }
        cout << "\n";
    }
    return 0;
}