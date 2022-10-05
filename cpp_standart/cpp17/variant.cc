#include <iostream>
#include <variant>

int main() {
    std::variant<int, double> v{12};
    std::cout << std::get<int>(v) << std::endl;

    v = 12.5;
    std::cout << std::get<double>(v) << std::endl;
    
}