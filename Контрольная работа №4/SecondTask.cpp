#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    if (!fin.is_open() || !fout.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }

    string str;
    string maxStr;

    while (getline(fin, str)) {
        if (str.length() > maxStr.length()) {
            maxStr = str;
        }
    }

    fout << maxStr;

    cout << "Самая длинная строка записана в output.txt" << endl;
    cout << maxStr << endl;
    fin.close();
    fout.close();

    return 0;
}