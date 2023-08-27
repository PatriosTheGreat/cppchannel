#include <iostream>

struct Person {
  int age;
  char cityInfo[4] __attribute__ ((aligned (8)));
};

struct City {
  long id;
};

int main() {
    Person me;
    City *city = (City*) &me.cityInfo;
    std::cout << city->id << std::endl;
    return 0;
}
