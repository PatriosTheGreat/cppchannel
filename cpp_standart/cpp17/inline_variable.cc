#include "inline_variable.h"
#include <iostream>

int main() {
    std::cout << A::a << std::endl;
    A::a = 3;
    std::cout << A::a << std::endl;
    std::cout << A::b << std::endl;
}