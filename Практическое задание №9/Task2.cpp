
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin1("input1.txt");
    ifstream fin2("input2.txt");
    ofstream fout("output.txt");

    string x, y;

    getline(fin1, x);
    getline(fin2, y);

    if (x.find(y) != string::npos) { // содержится ли y в x
        fout << "yes";
    }
    else {
        fout << "no";
    }

    fin1.close();
    fin2.close();
    fout.close();

    return 0;
}
