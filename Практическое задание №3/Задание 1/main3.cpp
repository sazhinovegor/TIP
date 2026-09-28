#include "hello.h"
#include <iostream>
using namespace std;
int main() {
  double a, b;
  cin >> a;
  cin >> b;

  hello h(a, b);
  cout << hello.calculate() << endl;
}
