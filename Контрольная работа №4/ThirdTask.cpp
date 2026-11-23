#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    double sum = 0;

    cout << "Введите количество элементов: ";
    cin >> n;

    if (n <= 0) {
        cout << "Количество элементов должно быть больше нуля." << endl;
        return 1;
    }

    vector<double> a(n);

    cout << "Введите элементы массива:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    double average = sum / n;

    cout << "Среднее арифметическое = " << average << endl;

    return 0;
}