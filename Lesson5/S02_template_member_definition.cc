// Phương thức thành viên của một khuân mẫu cũng là một khuân mẫu.
//    Khi định nghĩa bên ngoài lớp thì phải được khai báo là khuân
//    mẫu một cách tường minh.


template<typename T>
class C {
public:
  void Foo();
};

template<typename T>
void C<T>::Foo() {}