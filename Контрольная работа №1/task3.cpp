#include <iostream>

using namespace std;

int main() {
   
    double t;
    double result;
    cout << "Egor Sazhinov" << endl;
    cout << "Введите значение коэффициента t: ";
    cin >> t;

    
    result = 11.6 + 0.7 * t;

    cout << "Упрощенное выражение: 11.6 + 0.7t" << endl;
    cout << "Результат при t = " << t << " равен " << result << endl;

    return 0;
}