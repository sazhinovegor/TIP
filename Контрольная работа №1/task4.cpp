#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    char symbol;

    cout << "Введите a, b, c: ";
    cin >> a >> b >> c;

    cout << "Введите символ (A, t или c): ";
    cin >> symbol;

    switch (symbol) {
        case 'A': {
            cout << "Egor Sazhinov" << endl;
            break;
        }
        case 't': {
            if (a == 0 && b == 0 && c == 0) {
                cout << "Корень x - любое действительное число" << endl;
            } else if (a == 0) {
                if (b == 0) {
                    cout << "Нет решений" << endl;
                } else {
                    cout << "Корень: " << -c / b << endl;
                }
            } else {
                double d = b * b - 4 * a * c;
                
                if (d > 0) {
                    cout << "x1 = " << (-b + sqrt(d)) / (2 * a) << ", x2 = " << (-b - sqrt(d)) / (2 * a) << endl;
                } else if (d == 0) {
                    cout << "x = " << -b / (2 * a) << endl;
                } else {
                    cout << "Корней нет" << endl;
                }
            }
            break;
        }
        case 'c': {
            int age;
            cout << "Введите возраст: ";
            cin >> age;
            
            if (age >= 18) {
                cout << "Можно покупать алкоголь" << endl;
            } else {
                cout << "Нельзя покупать алкоголь" << endl;
            }
            break;
        }
        default: {
            cout << "Неизвестный символ" << endl;
            break;
        }
    }

    return 0;
}