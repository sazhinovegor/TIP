
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> maze(n);

    for (int i = 0; i < n; i++) {
        cin >> maze[i];
    }

    vector<vector<bool>> visited(n, vector<bool>(m, false));

    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    queue<pair<int, int>> q;

    q.push({0, 0});
    visited[0][0] = true;

    int pdf = 0;
    bool exitFound = false;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (maze[x][y] == 'P') {
            pdf++;
        }

        if (maze[x][y] == 'E') {
            exitFound = true;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n &&
                ny >= 0 && ny < m &&
                !visited[nx][ny] &&
                maze[nx][ny] != '1') {

                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }

    if (exitFound) {
        cout << pdf << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
