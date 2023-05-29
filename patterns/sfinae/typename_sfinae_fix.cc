#include <iostream>

struct Bar {
    typedef double internalType;  
};

template <typename T> 
typename T::internalType foo(const T& t) { 
    std::cout << "foo<T>\n"; 
    return 0; 
}

int foo(int i) { std::cout << "foo(int)\n"; return 0; }

int main() {
    foo(Bar());
    foo(0); // Now fixed
}
