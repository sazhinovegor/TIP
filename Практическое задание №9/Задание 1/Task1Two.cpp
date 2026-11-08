
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
        bool found = false;

        for (int j = 0; j < letters.length(); j++) {
            if (tolower((unsigned char)s[i]) == letters[j]) {
                found = true;
                break;
            }
        }

        if (found == false) {
            result += s[i];
        }
    }

    fout << result;

    fin.close();
    fout.close();

    return 0;
}
