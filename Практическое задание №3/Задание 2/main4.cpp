#include "dvoich"
#include <iostream>
using namespace std;
int main() {
  long long a;
  std::cin >> a;

  dvoich d(a);
  cout << d.value() << endl;

  return 0;
}
