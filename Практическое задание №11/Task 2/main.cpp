
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check(vector<int>& a, int n, int d, int x) {
    int days = 1;
    int mn = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] - mn > x) {
            days++;
            mn = a[i];
        }
    }

    return days <= d;
}

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int left = 0;
    int right = a[n - 1] - a[0];

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (check(a, n, d, mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    cout << left << endl;

    return 0;
}
