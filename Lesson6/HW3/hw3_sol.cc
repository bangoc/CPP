#include <iostream>
#include "json.hpp"
#include <algorithm>
#include <iterator>

// Cho hai danh sách sinh viên theo định dạng JSON như sau
nlohmann::json sv1 = R"(
  {
    "SV": [
      {"id": 1,
       "name": "E",
       "family name": "Nguyen Van",
       "grade": 6.0
      },
      {"id": 3,
       "name": "A",
       "family name": "Nguyen Thi",
       "grade": 9.5
      },
      {"id": 5,
       "name": "C",
       "family name": "Phung Thanh",
       "grade": 8.5
      }
    ]
  }
)"_json;

nlohmann::json sv2 = R"(
  {
    "SV": [
      {"id": 2,
       "name": "D",
       "family name": "Nguyen Van",
       "grade": 8
      },
      {"id": 4,
       "name": "C",
       "family name": "Nguyen Thi",
       "grade": 5.5
      },
      {"id": 6,
       "name": "B",
       "family name": "Phung Thanh",
       "grade": 6.5
      }
    ]
  }
)"_json;

template <typename T>
void ShowType(T& obj) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

int main() {
  // Hãy sắp xếp hai danh sách theo tên sinh viên, nếu trùng tên thì sắp xếp theo họ
  // Hợp nhất hai danh sách và xuất kết quả
  // Đếm số lượng sinh viên giỏi (grade>=8.5), khá (grade >= 6.5 và < 8.5), 
  //  và trung bình (grade >= 5.5 và < 6.5)

  // * Hãy cố gắng giải quyết vấn đề theo cách đơn giản nhất

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
    std::cout << sv1.dump(2) << std::endl;
    std::cout << sv2.dump(2) << std::endl;
    std::cout << result.dump(2) << std::endl;

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