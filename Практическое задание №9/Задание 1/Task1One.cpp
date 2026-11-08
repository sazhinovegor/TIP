
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    string s;
    getline(fin, s);

    string letters = "useragreement";
    string result = "";

    for (int i = 0; i < s.length(); i++) {
        char c = tolower((unsigned char)s[i]);

        if (letters.find(c) == string::npos) { // проверка на отсутствие буквы
            result += s[i];
        }
    }

    fout << result;

    fin.close();
    fout.close();

    return 0;
}
