#include <iostream>
#include <tuple>

int mult(int a, int b) {
    return a * b;
}

int main() {
    std::cout << std::apply(mult, std::make_tuple(1, 2)) << std::endl;
}