// Di chuyển có thể hiệu quả hơn so với sao chép:

template<class T>
void swap(T& a, T& b)
{
	const T tmp = a;  // Sao chép a vào tmp
	a = b;	// Sao chép b vào a
	b = tmp;  // Sao chép tmp vào b
}

// Khối lượng sao chép có thể rất lớn
void f(string& s1, string& s2,
			vector<string>& vs1, vector<string>& vs2,
			Matrix& m1, Matrix& m2) {
	swap(s1,s2);
	swap(vs1.vs2);
	swap(m1,m2);
}

// Để giải quyết vấn đề hiệu năng của sao chép, C++ hỗ trợ cơ chế dịch chuyển
template<class T>
class Matrix {
	std::arrary<int,2> dim;
	T∗ elem; // pointer to sz elements ò type T
	Matrix(int d1, int d2) :dim{d1,d2}, elem{new T[d1∗d2]} {}
	int size() const { return dim[0]∗dim[1]; }
	Matrix(const Matrix&);   // copy constr uctor
	Matrix(Matrix&&);  // move constructor	
	Matrix& operator=(const Matrix&); // copy asignment
	Matrix& operator=(Matrix&&);	// move asignment
	~Matrix(); // destructor
	// ...
};

template<class T>
Matrix<T>::Matrix(Matrix&& a)  // Hàm tạo di chuyển
		:dim{a.dim}, elem{a.elem}  // Di chuyển dữ liệu
{
	a.dim = {0,0};			// Vô hiệu hóa dữ liệu nguồn
	a.elem = nullptr;
}

template<class T>
void swap(T& a, T& b) // "perfect swap" (almost)
{
	T tmp = std::move(a);
	a = std::move(b);
	b = std::move(tmp);
}

// Trình biên dịch có thể tự động dịch chuyển đối tượng tạm (temporary object)
// Người dùng có thể chỉ định dịch chuyển tường minh bằng std::move