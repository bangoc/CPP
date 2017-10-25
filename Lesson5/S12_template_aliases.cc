// using khái quát hơn typedef vì có thể sử dụng using để định nghĩa
// tên khác cho template

#include <iostream>

template<typename T>
class allocator {};

template<typename T>
class My_alloc{};

template<typename T, typename Allocator = allocator<T>> 
class MyVector {};

using Cvec = MyVector<char>;
typedef MyVector<char> CvecT;

template<typename T>
using Vec = MyVector<T, My_alloc<T>>;

// template<typename T>   // Error
// typedef MyVector<T, My_alloc<T>> VecT;
// typedef MyVector VecT;

template<typename T, typename A>
void Foo(MyVector<T, A>& v) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
}

int main() {
  Cvec v1;
  CvecT t1;
  Foo(v1);
  Foo(t1);

  Vec<int> v2;
  // VecT<int> t2;
  Foo(v2);
  // Foo(t2);
}
