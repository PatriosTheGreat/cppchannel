#include <iostream>
#include <type_traits>

template <class T>
typename std::enable_if_t<std::is_arithmetic_v<T>, T> // << shorter!
foo(T t) {
  std::cout << "foo<arithmetic T>\n";
  return t;
}

template <class T>
typename std::enable_if_t<!std::is_arithmetic_v<T>, void>
foo(T t) {
  std::cout << "foo fallback\n";
}

int main() {
    foo(0);
    foo(std::string{});
}
