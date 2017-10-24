// template là cơ chế trực tiếp hỗ trợ lập trình trừu tượng
// theo cách sử dụng kiểu dữ liệu với vai trò là tham số.
//
// cơ chế template của C++ cho phép sử dụng kiểu dữ liệu và
// gía trị như tham số trong định nghĩa lớp và định nghĩa hàm.

template<typename C>
class String {
public:
  explicit String(const C*);
  ...
private:
  ...
  C* ptr;
};

// Sau khi chỉ định kiểu dữ liệu của tham số chúng ta thu được
// các lớp cụ thể

String<char> cs;
String<wchar_t> ws;

struct Jchar { };

String<Jchar> js;
using Jstring = String<Jchar>;

int main() {
  map<Jstring, int> m;
  for (Jstring buf; cin >> buf;)
    ++m[buf];
}