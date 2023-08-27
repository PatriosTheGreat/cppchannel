#include <cstdint>
#include <cstring>
#include <iostream>

struct Person {
  int age;
  char cityInfo[4];
};

struct City {
  long id;
};

int main() {
    Person me;
    City city;
    std::memcpy(&city, &me.cityInfo, sizeof(City));
    std::cout << city.id << std::endl;
    return 0;
}
