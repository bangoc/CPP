#include <algorithm>
#include <atomic>
#include <chrono>
#include <iostream>
#include <fstream>
#include <future>
#include <thread>
#include <sstream>

#include "json.hpp"
using json = nlohmann::json;

std::atomic<long> sv_gioi;
std::atomic<long> sv_kha;
std::atomic<long> sv_tb;

template<typename T>
void DoCount(T begin, T end) {
  for (T it = begin; it != end; ++it) {
    auto &o = *it;
    if (o["grade"] >= 8.5) {
            ++sv_gioi;
        } else if (o["grade"] >= 6.5) {
            ++sv_kha;
        } else if (o["grade"] >= 5.5) {
            ++sv_tb;
        }
  }
}

int main(int argc, char* argv[]) {
  auto start = std::chrono::system_clock::now();

  if (argc != 2) {
    std::cout << "./p #threads" << std::endl;
    return 1;
  }

  json sv1, sv2;
  {
    std::ifstream inp1("sv1.json");
    inp1 >> sv1;
    std::ifstream inp2("sv2.json");
    inp2 >> sv2;
  }  // close inp1 and inp2

  auto cmp = [] (const json& o1, const json& o2) {
      if (o1["name"] < o2["name"]) {
            return true;
        } else if (o1["name"] > o2["name"]) {
            return false;
        }
        return o1["family name"] < o2["family name"];
    };

  auto sort_sv = [cmp] (json& r) {
    json& sv = r["SV"];
    std::sort(sv.begin(), sv.end(), cmp);
  };

  std::thread t1(sort_sv, std::ref(sv1));
  std::thread t2(sort_sv, std::ref(sv2));
  t1.join();
  t2.join();

  nlohmann::json all = R"({"SV": []})"_json;
  std::merge(sv1["SV"].begin(), sv1["SV"].end(), 
             sv2["SV"].begin(), sv2["SV"].end(), 
             std::back_inserter(all["SV"]), cmp);

  /*  counting   */
  int numthreads = 0;
  {
    std::istringstream ss(argv[1]);
    ss >> numthreads;
  }

  long sz = all["SV"].size();
  auto b = all["SV"].begin();
  auto e = b;

  // Divide counting job to numthreads threads
  if (numthreads > sz) {  // looks silly but need for completeness
    numthreads = sz;
  }

  std::vector<std::thread> threads;
  long step = sz/numthreads;
  for (int i = 0; i < numthreads - 1; ++i) {
    e = b + step;
    threads.push_back(std::thread(DoCount<decltype(all["SV"].begin())>, b, e));
    b = e;
  }

  // the last bucket
  threads.push_back(std::thread(DoCount<decltype(all["SV"].begin())>, b, all["SV"].end()));
  for (auto &t: threads) {
    t.join();
  }

  std::cout << "number of sv_gioi = " << sv_gioi << std::endl
            << "number of sv_kha  = " << sv_kha  << std::endl
            << "number of sv_tb   = " << sv_tb   << std::endl;

  auto finish = std::chrono::system_clock::now();
  auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
  std::cout << milliseconds.count() << "ms" << std::endl;
}
