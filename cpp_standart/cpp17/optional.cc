#include <iostream>
#include <optional>

std::optional<std::string> create(int flag) {
    if (flag) {
        return "value";
    }
    return {};
}

int main() {
    std::cout << create(false).value_or("empty") << std::endl;
    std::cout << create(true).value_or("empty") << std::endl;
}