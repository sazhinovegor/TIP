
#include <iostream>
#include <stack>
using namespace std;

stack<int> a, b;


void push(int x) {
    a.push(x);

    if (b.empty() || x <= b.top()) {
        b.push(x);
    }
}


void pop() {
    if (a.empty())
        return;

    if (a.top() == b.top()) {
        b.pop();
    }

    a.pop();
}


int getMin() {
    return b.top();
}

bool empty() {
    return a.empty();
}

int main() {
    push(5);
    push(3);
    push(7);
    push(2);

    cout << getMin() << endl;

    pop();

    cout << getMin() << endl;

    return 0;
}
