#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <array>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

template <typename T>
void Loop(const T& t) {
    int cc = 0;
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    for (auto it = t.begin(); it != t.end(); ++it)
        ++cc;
    std::cout << "# of elements = " << cc << std::endl;
}

int main() {
    std::vector<int> c_vector {1, 2, 3, 4};
    std::deque<double> c_deque {1.2, 2.3, 3.4, 5.6};
    std::list<bool> c_list {true, true, false, true};
    std::forward_list<int64_t> c_flist {12345678909876, 23456789098765, 34567890987654, 45678909876543};
    std::array<unsigned long, 4> c_array {{1, 2, 3, 4}};
    std::set<std::string> c_set {"one", "two", "three", "four", "one"};
    std::unordered_set<std::string> c_uset {"one", "two", "three", "four", "one"};
    std::multiset<std::string> c_mset {"one", "two", "one", "four"};
    std::unordered_multiset<std::string> c_umset {"one", "two", "one", "four"};
    std::map<std::string, int> c_map { {"one", 1}, {"two", 2}, {"three", 3} };
    std::unordered_map<const char*, double> c_umap { {"one", 1.2}, {"two", 2.3}, {"three", 3.4} };
    std::multimap<std::string, bool> c_mmap { {"one", true}, {"two", true}, {"three", false}, {"three", true} };
    std::unordered_multimap<std::string, bool> c_ummap { {"one", true}, {"two", true}, {"three", false}, {"three", true} };

    Loop(c_vector);
    Loop(c_deque);
    Loop(c_list);
    Loop(c_flist);
    Loop(c_array);
    Loop(c_set);
    Loop(c_uset);
    Loop(c_mset);
    Loop(c_umset);
    Loop(c_map);
    Loop(c_umap);
    Loop(c_mmap);
    Loop(c_ummap);
    return 0;
}