#include <cmath>
#include <iostream>
using namespace std;
double hypotenuse(double a, double b) {
  return sqrt(std::pow(a, 2) + pow(b, 2));
}

int main() {
  double a, b;
  cin >> a;
  cin >> b;

  cout << hypotenuse(a, b) << endl;
}
