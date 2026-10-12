#include <iostream>
#include <vector>
#include <string>
using namespace std;

// цикл while
void solveWhile(int A, int B) {
    vector<string> ops;
    int cur = A;

    while (cur > B) {
        if (cur % 2 == 0 && cur / 2 >= B) {
            ops.push_back(":2");
            cur /= 2;
        } else {
            ops.push_back("-1");
            cur -= 1;
        }
    }
    cout << "while" << endl;
    for (int i = 0; i < (int)ops.size(); i++) {
        cout << ops[i] << endl;
    }
}

//цикл do...while
void solveDoWhile(int A, int B) {
    vector<string> ops;
    int cur = A;

    if (cur > B) {
        do {
            if (cur % 2 == 0 && cur / 2 >= B) {
                ops.push_back(":2");
                cur /= 2;
            } else {
                ops.push_back("-1");
                cur -= 1;
            }
        } while (cur > B);
    }
    cout << "do while" << endl;
    for (int i = 0; i < (int)ops.size(); i++) {
        cout << ops[i] << endl;
    }
}

//цикл for
void solveFor(int A, int B) {
    vector<string> ops;
    int cur = A;

    for (; cur > B; ) {
        if (cur % 2 == 0 && cur / 2 >= B) {
            ops.push_back(":2");
            cur /= 2;
        } else {
            ops.push_back("-1");
            cur -= 1;
        }
    }

    cout << "for" << endl;
    for (int i = 0; i < (int)ops.size(); i++) {
        cout << ops[i] << endl;
    }
}

int main() {
    int A = 10;
    int B = 1;
    solveWhile(A, B);
    solveDoWhile(A, B);
    solveFor(A, B);

    return 0;
}
