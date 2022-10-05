#include <iostream>
#include <string>
#include <tuple>
#include <unordered_map>

std::tuple<std::string, int> GetInfo() {
    return { "Levon", 30 };
}


int main() {
    // Before C++ 17
    auto p = GetInfo();
    std::string& name_get = std::get<0>(p);
    int age_get = std::get<1>(p);

    std::string name_tie;
    int age_tie;
    std::tie(name_tie, age_tie) = GetInfo();

    // After C++ 17
    auto[name, age] = GetInfo();
    std::unordered_map<std::string, int> mapping {
        {"a", 1},
        {"b", 2},
        {"c", 3}
    };

    for (const auto& [key, value] : mapping) {}
}