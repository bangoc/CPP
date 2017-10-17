/*
Hàm tạo mặc định sẽ được sinh tự động nếu tất cả các lớp cơ sở và tất cả thành viên đều 
	có thể được khởi tạo bằng hàm tạo mặc định và không có bất kỳ hàm tạo có tham số nào 
	được định nghĩa.
Hàm tạo sao chép sẽ được sinh tự động nếu tât cả các lớp cơ sở và các lớp thành viên có
	thể khởi tạo được bằng hàm tạo sao chép.
Toán tử gán sao chép sẽ được sinh tự động nếu tất cả các lớp cơ sở và các lớp thành viên
	có thể sao chép được bằng phép gán.
Hàm tạo di chuyện sẽ được sinh tự động nếu người dùng không định nghĩa bất kỳ nào trong số
	các thành viên sau: hàm tạo sao chép, toán tử gán sao chép, toán tử gán di chuyển, hàm hủy.
	Trong trường hợp không thể di chuyển đc đối tượng do lớp cơ sở hoặc thành viên, thì toán
	tử gán sao chép sẽ được đánh dấu deleted.
Toán tử gán di chuyện được sinh tự động theo quy tắc tương tự hàm tạo di chuyển.
*/

class C {
public:	
	C();  // Hàm tạo mặc định
	C(const C& other);  // Hàm tạo sao chép
	C& C::operator=(const C&);  // Toán tử gán sao chép
	C(C&& other);  // Hàm tạo di chuyển: Từ C++11
	C& C::operator=(C&&);  // Toán tử gán di chuyển: Từ C++11
};