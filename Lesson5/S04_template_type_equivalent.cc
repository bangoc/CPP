// Các kiểu dữ liệu khác nhau được sinh bởi khuân mẫu với các tham số khác nhau
// là không tương đương

template<typename T>
class C {};

void Foo(int i) {}
void Foo2(C<int> c) {}

int main() {
  int i = 0;
  double d = 0;
  Foo(i);
  Foo(d);
  C<int> ci;
  C<double> cd;
  Foo2(ci);
  Foo2(cd);
}


// Tránh sử dụng khuân mẫu lồng nhau trừ trường hợp khuân mẫu con phụ thuộc vào tất
// cả các tham số của khuân mẫu chính
//
// vì nếu làm như vậy có thể gây ra việc sinh thừa mã nguồn nhiều trùng lặp

template<typename T, typename Allocator>
class List {
private:
  struct Link {
    T val;
    Link∗ succ;
    Link∗ prev;
  };
  // ...
};

// VS

template<typename T, typename Allocator>
class List;

template<typename T>
class Link {
  template<typename U, typename A>
  friend class List;
  T val;
  Link∗ succ;
  Link∗ prev;
};

template<typename T, typename Allocator>
class List {
  // ...
};