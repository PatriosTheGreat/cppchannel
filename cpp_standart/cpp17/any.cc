#include <iostream>
#include <any>

int main() {
    std::any x{5};
    std::cout << std::any_cast<int>(x) << std::endl;
}