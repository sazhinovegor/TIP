#include <iostream>
using namespace std;

int nod(int a, int b) {
    if (a < b)
        return nod(b, a);

    if (b == 0)
        return a;

    return nod(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << nod(a, b);
    return 0;
}