#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>
#include "json.hpp"

using json = nlohmann::json;

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cout << "Usage: " << argv[0] << " ${number of records} ${first id}" << std::endl;
    return 1;
  }  
  int n = 0, id = 1;
  auto string_to_int = [] (const std::string& s, int& out) {
    std::istringstream ss(s);
    ss >> out;
  };
  string_to_int(argv[1], n);
  if (argc > 2) {
    string_to_int(argv[2], id);
  }

  std::srand(std::time(0));
  auto gen_CH = [] () {
    return 'A' + std::rand() % 26;
  };

  auto gen_ch = [] () {
    return 'a' + std::rand() % 26;
  };

  auto gen_name = [&gen_ch, &gen_CH] () {
    int len = 2 + std::rand() % 9;
    std::string name(len, ' ');
    name[0] = gen_CH();
    std::generate(name.begin() + 1, name.end(), gen_ch);
    return name;
  };

  auto gen_family_name = [&gen_name] () {
    return gen_name() + " " + gen_name();
  };

  auto gen_grade = [] () {
    return 3.5 + std::rand() % 7 + 0.5 * (std::rand() % 2);
  };

  json root = R"({"SV": []})"_json;  
  json& sv = root["SV"];
  for (int i = 0; i < n; ++i) {
    json j = R"({})"_json;
    j["id"] = id++;
    j["name"] = gen_name();
    j["family name"] = gen_family_name();
    j["grade"] = gen_grade();
    sv += j;
  }

  std::cout << root.dump(2) << std::endl;
}