// Một khuân mẫu lớp cũng có thể có các thành viên giống như một lớp thông thường

template<typename T>    // forward declaration to make use of friend function template
class C;

template<typename T>
C<T> operator*(const C<T>& c1, const C<T>& c2);

template<typename T>
class C {
public:
  using value_type = T;  // Member type aliases
  void Foo(); // Member function

  static int m2;  // Static data member

  static C* getInstance();  // Static function member

  enum class E1 {a, b};  // Member types

  enum class E2;

  enum E3 {c, d};

  // enum E4;  // compile error

  C() {}

  C(const C& c);

  template<typename T2>  // member templates
  void compile(T2 obj);

  // template<typename T3>
  // virtual void intersect(T3 obj) = 0;  // illegal

  friend C operator*<>(const C& c1, const C& c2);
private:
  int ii;  // Member data
};

template<typename T> int C<T>::m2 = 10;

template<typename T> C<T>* C<T>::getInstance() {
  return new C<T>;
}

template<typename T> enum class C<T>::E2 {e, f};

template<typename T> C<T>::C(const C<T>& c) {}

template<typename T>
template<typename T2>
void C<T>::compile(T2 obj) {}

template<typename T>
C<T> operator*(const C<T>& c1, const C<T>& c2) {
  C<T> res;
  return res;
}

int main() {
  C<int> c1;
 // c1.value_type;
  C<int>::value_type i;
  // C<int>::E3 e = C<int>::E3.c;
  C<int>::E3 e2 = C<int>::E3::c;
  C<int>::E3 e3 = C<int>::c;

  C<int>::E1 e4 = C<int>::E1::a;
  C<int>::E1 e5 = C<int>::a;
}