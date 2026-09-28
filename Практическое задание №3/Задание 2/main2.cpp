#include <iostream>
using namespace std;
int nice(long long a) { return a / 10 % 10; }

int main() {
  long long a;
  cin >> a;

  cout << nice(a) << endl;

  return 0;
}
