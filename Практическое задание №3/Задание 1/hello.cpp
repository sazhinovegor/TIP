#include "hello.h"
#include <cmath>
using namespace std;
hello::hello(double a, double b) : a_(a), b_(b) {}

double hello::calculate() const {
  return sqrt(pow(a_, 2) + pow(b_, 2));
}
