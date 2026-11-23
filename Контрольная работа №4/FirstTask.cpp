#include <iostream>
#include <cstdlib>
using namespace std;


int NOD(int a, int b) {
    if (b == 0) {
        return abs(a);
    }

    return NOD(b, a % b);
}


int NOK(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }

    return abs(a / NOD(a, b) * b);
}

int main() {
    int a, b; % b);

    cout << "Введите два числа: ";
    cin >> a >> b;

    cout << "НОК = " << NOK(a, b) << endl;

    return 0;
}