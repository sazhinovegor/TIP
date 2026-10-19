#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    // Первый способ
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i + j < n - 1) {
                cout << "0 ";
            } else if (i + j == n - 1) {
                cout << "1 ";
            } else {
                cout << "2 "; 
            }
        }
        cout << "\n";
    }


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            cout << "0 ";
        }

        cout << "1";
        for (int j = 0; j < i; ++j) {
            cout << " 2";
        }
        cout << "\n";
    }
     return 0;
}