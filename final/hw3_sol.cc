#include <algorithm>
#include <chrono>
#include <iostream>
#include <iterator>
#include <fstream>
#include "json.hpp"

using json = nlohmann::json;

int main() {
  auto start = std::chrono::system_clock::now();

  // Hãy sắp xếp hai danh sách theo tên sinh viên, nếu trùng tên thì sắp xếp theo họ
  // Hợp nhất hai danh sách và xuất kết quả
  // Đếm số lượng sinh viên giỏi (grade>=8.5), khá (grade >= 6.5 và < 8.5), 
  //  và trung bình (grade >= 5.5 và < 6.5)

  // * Hãy cố gắng giải quyết vấn đề theo cách đơn giản nhất

  json sv1, sv2;
  {
    std::ifstream inp1("sv1.json");
    inp1 >> sv1;
    std::ifstream inp2("sv2.json");
    inp2 >> sv2;
  }

    nlohmann::json& a1 = sv1["SV"];
    auto cmp = [] (const nlohmann::json& o1, const nlohmann::json& o2) {
        if (o1["name"] < o2["name"]) {
            return true;
        } else if (o1["name"] > o2["name"]) {
            return false;
        }
        return o1["family name"] < o2["family name"];
    };
    std::sort(a1.begin(), a1.end(), cmp);

    nlohmann::json& a2 = sv2["SV"];
    std::sort(a2.begin(), a2.end(), cmp);

    nlohmann::json result = R"({"SV": []})"_json;
    std::merge(a1.begin(), a1.end(), a2.begin(), a2.end(), std::back_inserter(result["SV"]), cmp);

    // dump result for checking
    // std::cout << sv1.dump(2) << std::endl;
    // std::cout << sv2.dump(2) << std::endl;
    // std::cout << result.dump(2) << std::endl;

    // counts
    int sv_gioi = 0, sv_kha = 0, sv_tb = 0;
    for (const nlohmann::json& j: result["SV"]) {
        if (j["grade"] >= 8.5) {
            ++sv_gioi;
        } else if (j["grade"] >= 6.5) {
            ++sv_kha;
        } else if (j["grade"] >= 5.5) {
            ++sv_tb;
        }
    }
    std::cout << "SL sinh vien gioi la: " << sv_gioi << std::endl;
    std::cout << "SL sinh vien kha la: " << sv_kha << std::endl;
    std::cout << "SL sinh vien trung binh la: " << sv_tb << std::endl;

    auto finish = std::chrono::system_clock::now();
    auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    std::cout << milliseconds.count() << "ms" << std::endl;
    /*

    // Tuy co the dem bang cach dung std::count_if
     //   tuy nhien cach lam nay nhin chung la kho hon voi cach dung 1 vong for

    int sv_gioi = std::count_if(all.begin(), all.end(),
                                [] (const nlohmann::json& j) {
                                   return j["grade"] >= 8.5;
                                });

    int sv_kha = std::count_if(all.begin(), all.end(),
                                [] (const nlohmann::json& j) {
                                    return j["grade"] >= 6.5 and j["grade"] < 8.5;
                                });

    int sv_tb = std::count_if(all.begin(), all.end(),
                                [] (const nlohmann::json& j) {
                                    return j["grade"] >= 5.5 and j["grade"] < 6.5;
                                });

    */
}