// ưu tiên hàm tạo mặc định
// ưu tiên hàm tạo với initializer_list

struct X {
	X(initializer_list<int>);
	X();
	X(int);
};

X x0 {};  // Danh sách rỗng: --> ?? : Hàm tạo mặc định
X x1 {1};   // Danh sách một phần tử: --> : Hàm tạo với danh sách khởi tạo
// Sử dụng X x2(1);  để gọi X(int);

vector<int> v1 {77};  // one element with the value 77
vector<int> v2(77);  // 77 elements with the default value 0

vector<string> v1 {77};  // ??
vector<string> v2(77);   // ??
vector<string> v3 {"Booh!"}; // ??
vector<string> v4("Booh!"); // ??
vector<int∗> v5 {100,0}; // ??
vector<int∗> v6 {0,0};  // ??
vector<int∗> v7(0,0); // ??
vector<int∗> v8;  // ??

// std::vector<int>(int) is explicit , but std::vector<int>(initialize_list<int>)
vector<vector<double>> vs = {
	{10,11,12,13,14},  // OK: vector of five elements
	{10},
	10,
	vector<double>{10,11,12,13},
	vector<double>{10},
	vector<double>(10),
};

vector<double> v1(7);  // ??
vector<double> v2 = 9;  // ??

vector<double> v1 {7};  // ??
vector<double> v2 = {9};  // ??