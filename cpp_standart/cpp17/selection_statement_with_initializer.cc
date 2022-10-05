#include <iostream>

int main() {
    if (int a = 0; a == 0) {
        std::cout << a << std::endl;
    }

    switch(int a = 0; a) {
        case 0:
            std::cout << a << std::endl;
        break;
        default:
            break;
    }
}