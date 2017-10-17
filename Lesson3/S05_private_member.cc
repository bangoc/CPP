// Nếu lớp có thành viên ẩn thì cần sử dụng hàm tạo để khởi tạo gía trị
//
// Nếu có hàm tạo có tham số thì trình biên dịch sẽ không tự động
// 		sinh hàm tạo mặc định

class X{
  public:
    X(int x): v{x} {}
  private:
  	int v;
};

class C {
  public:
    X x;
};
C c;
C c2{1};
