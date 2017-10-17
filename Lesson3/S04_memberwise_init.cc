// Khởi tạo như trong C có thể áp dụng đc cho đối tượng chỉ có thành viên public
//
// Đối tượng thuộc kiểu cơ sở, không phải là static thì không đc khởi tạo mặc định tự động
#include <iostream>
#include <string>

struct Work{
	std::string author;
	std::string name;
	int year;
};

Work s9 {"Beethoven",
				 "Symphony No. 9 in D minor, Op. 125; Choral",
				 1824};

Work current_playing { s9 };

Work none {};  // Khởi tạo thành {"", "", 0}

int main() {
	Work none2;  // Khởi tạo thành {"", "", unknown}
}