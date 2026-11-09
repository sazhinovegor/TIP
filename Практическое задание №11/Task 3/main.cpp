
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l;
    cin >> n >> k >> l;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    int sum = 0;
    int count = 0;
    int same = 0;
    int previous = -1000000000;

    for (int i = 0; i < n && count < k; i++) {
        if (a[i] == previous) {
            if (same == l)
                continue;

            same++;
        } else {
            previous = a[i];
            same = 1;
        }

        sum += a[i];
        count++;
    }

    if (count < k) {
        cout << -1 << endl;
    } else {
        cout << sum << endl;
    }

    return 0;
}
