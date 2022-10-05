#include <iostream>

template<typename ...Args>
void printer(Args&&... args)
{
    (std::cout << ... << args) << '\n';
}

int main() {
    printer("123", "321", 3, 3.5);
}