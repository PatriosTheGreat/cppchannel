#include <tuple>
#include <functional>
#include <iostream>

void test() {

}

void test2(int a, char b) {
    std::cout << a << " " << b << std::endl;
}
template<class T>
struct A
{
    A(T a, T b) {

    }
};

int main() {
    // C++14
    std::tuple<int, int> old_tuple(1, 2);
    std::function<void()> old_test(&test);
    std::function<void(int, char)> old_test_2(&test2);
    auto old_a = new A<int>{1, 2};

    // C++17
    std::tuple new_tuple(1, 2);
    std::function new_test(&test);
    std::function new_test2(&test2);
    auto new_a = new A{1, 2};
}