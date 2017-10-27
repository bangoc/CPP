#include <iostream>
#include "json.hpp"

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

int main() {
  // Hãy sắp xếp hai danh sách theo tên sinh viên, nếu trùng tên thì sắp xếp theo họ
  // Hợp nhất hai danh sách và xuất kết quả
  // Đếm số lượng sinh viên giỏi (grade>=8.5), khá (grade >= 6.5 và < 8.5), 
  //  và trung bình (grade >= 5.5 và < 6.5)

  // * Hãy cố gắng giải quyết vấn đề theo cách đơn giản nhất
}