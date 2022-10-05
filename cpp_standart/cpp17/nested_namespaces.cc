#include <iostream>

namespace A::B::C {
  int v = 0;
}

int main() {
    std::cout << A::B::C::v << std::endl;
}