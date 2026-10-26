#include <iostream>
using namespace std;

long long power(long long a, int n) {
    if (n == 0)
        return 1;

    long long half = power(a, n / 2);

    if (n % 2 == 0)
        return half * half;
    else
        return half * half * a;
}

int main() {
    long long a;
    int n;
    cin >> a >> n;

    cout << power(a, n);
    return 0;
}