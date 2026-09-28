#include "hello"
#include <iostream>
using namespace std;
int main() {
  double a, b;
  cin >> a;
  cin >> b;

  hello h(a, b);
  std::cout << h.calculate() << std::endl;
}
