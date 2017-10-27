#include <iostream>
#include <algorithm>
#include <array>
#include "json.hpp"

using json = nlohmann::json;

int main() {
    std::array<int, 10> s1 = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3}; 
    std::sort(s1.begin(), s1.end(), std::greater<int>());

    std::array<int, 10> s2 = {9, 6, 7, 5, 3, 2, 1, 0, 8, 4};
    std::sort(s2.begin(), s2.end(), [](int a, int b) { return b < a; });

    json js1(s1);
    json js2(s2);

    std::cout << "s1:" << std::endl
              << js1.dump() << std::endl
              << "s2: " << std::endl
              << js2.dump() << std::endl;

    std::vector<int> s12;
    std::merge(s1.begin(), s1.end(), s2.begin(), s2.end(), std::back_inserter(s12),
               std::greater<int>());

    json js12(s12);
    std::cout << "merge result: "
              << js12.dump() << std::endl;
}