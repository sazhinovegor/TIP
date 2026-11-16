
#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    set<string> words;
    string word;

    for (char &c : s) {
        if (ispunct((unsigned char)c)) // проверка на знаки препинания
            c = ' ';
        else
            c = tolower((unsigned char)c); // в нижний регистр
    }

    stringstream ss(s);

    while (ss >> word) { 
        words.insert(word);
    }

    for (string w : words) {
        cout << w << endl;
    }

    return 0;
}
