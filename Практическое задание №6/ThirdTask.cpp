#include <iostream>
#include <string>

using namespace std;

int main() {
    string current;
    int n;
    if (!(cin >> current >> n)) return 0;

    for (int step = 1; step < n; ++step) { // цикл преобразований 
        string next_str = ""; // собираем новую строку
        int count = 1;
        
        for (int i = 1; i < current.length(); ++i) {    //проходим по строке
            if (current[i] == current[i - 1]) {
                count++; // если след символ равен тек += 1
            } else {
                next_str += to_string(count) + current[i - 1]; // если символ изменился сбарсываем счетчик до 1
                count = 1;
            }
        }

        next_str += to_string(count) + current.back(); // берет последний символ и дописывает его конец
        
        current = next_str;
    }

    cout << current << "\n";
    return 0;
}