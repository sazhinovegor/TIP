#include "dvoicn.h"

Dvoich::Dvoich(long long a) : a_(a) {}

int Dvoich::value() const { return static_cast<int>(a_ / 10 % 10); }
