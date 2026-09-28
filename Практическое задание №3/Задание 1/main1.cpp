#include <cmath>
#include <iostream>
using namespace std;
double hypoten(double a, double b) {
  return sqrt(pow(a, 2) + pow(b, 2));
}

int main() {
  double a, b;
  cin >> a;
  cin >> b;

  cout << hypoten(a, b) << endl;
}
