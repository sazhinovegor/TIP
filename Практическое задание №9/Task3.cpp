
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

string toBinary(string number) {
    string binary = "";

    while (number != "0") {
        string quotient = "";
        int remainder = 0;

        for (int i = 0; i < number.length(); i++) {
            int current = remainder * 10 + (number[i] - '0');

            quotient += char('0' + current / 2);
            remainder = current % 2;
        }

        int pos = 0;
        while (pos < quotient.length() - 1 && quotient[pos] == '0') {
            pos++;
        }

        quotient = quotient.substr(pos);

        binary += char('0' + remainder);
        number = quotient;
    }

    reverse(binary.begin(), binary.end());

    return binary;
}

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    string s;
    getline(fin, s);

    string result = "";
    string number = "";

    for (int i = 0; i < s.length(); i++) {
        if (isdigit((unsigned char)s[i])) {
            number += s[i];
        }
        else {
            if (number != "") {
                result += toBinary(number);
                number = "";
            }

            result += s[i];
        }
    }

    if (number != "") {
        result += toBinary(number);
    }

    fout << result;

    fin.close();
    fout.close();

    return 0;
}
