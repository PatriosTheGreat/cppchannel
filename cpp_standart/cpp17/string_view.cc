#include <iostream>
#include <string_view>

void print_string(const std::string_view &value) {
    std::cout << value << std::endl;
}


int main() {
    print_string("string");
    constexpr auto str = std::string_view("string");
    print_string(str);
}