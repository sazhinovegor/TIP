
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> dp(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j]; //введение значение матрицы а - хранит исходные значения
        }
    }

    dp[0][0] = a[0][0]; // начальная точка

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { // проходим снова по элементам матрциы
            if (i == 0 && j == 0) // проверка на начальную точку
                continue; 

            int up = (i > 0) ? dp[i - 1][j] : -1000000000;
            int left = (j > 0) ? dp[i][j - 1] : -1000000000;

            dp[i][j] = a[i][j] + max(up, left); // хранит максимальную сумму пути до текущей точки
        }
    }

    cout << "Максимальная сумма: " << dp[n - 1][m - 1] << endl;

    vector<pair<int, int>> path;

    int i = n - 1;
    int j = m - 1;

    while (true) {
        path.push_back({i, j});

        if (i == 0 && j == 0)
            break;

        if (i > 0 && (j == 0 || dp[i - 1][j] >= dp[i][j - 1])) {
            i--;
        } else {
            j--;
        }
    }

    reverse(path.begin(), path.end());

    cout << "Маршрут:" << endl;

    for (auto p : path) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
