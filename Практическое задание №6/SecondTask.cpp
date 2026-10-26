#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, m, w;
    if (!(cin >> n >> m >> w)) return 0;

    vector<string> grid(n, string(m, '0'));

    for (int i = 0; i < w; ++i) { 
        int r, c;   // r - строка c - столбец
        cin >> r >> c;
        grid[r - 1][c - 1] = '*';
    }

    int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1}; //массивы смещений
    int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {   // для перебора каждой клетки
            if (grid[i][j] == '*') continue;  // если гриб - пропуск
            
            int count = 0; 
            for (int k = 0; k < 8; ++k) {
                int ni = i + dr[k];
                int nj = j + dc[k]; // коорд соседей
                if (ni >= 0 && ni < n && nj >= 0 && nj < m && grid[ni][nj] == '*') { // не вылезли ли мы за пределы поля
                    count++;
                }
            }
            grid[i][j] = '0' + count; 
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << grid[i] << "\n";
    }
    return 0;
}