// Không nên khai báo dữ liệu thành viên là protected vì sẽ khó khoanh vùng lỗi
// Đối tượng cơ sở được coi như một thành viên trong đói tượng kế thừa, và
//    chúng ta cũng có thể thiết lập giới hạn truy cấp như các thành viên khác
//	  	+ class D1: public B {}
//		+ class D2: protected B {}
//		+ class D3: private B {}
//
// Trong đa kế thừa, có thể truy cập đến một thành viên của đối tượng cơ sở chung
// 		+ nếu có thể truy cập đến đó qua tất cả các đường dẫn
//		+ những thực thể là duy nhất không chịu ảnh hưởng của vấn đề đa nghĩa (B::sm)


struct B {
	int m;
	static int sm;
};

// static
int B::sm;

class D1: public virtual B {};
class D2: public virtual B {};
class D12: public D1, private D2 {};

D12* pd = new D12{};

B* pb = pd;  // 1. ??
int i1 = pd->m;  // 2. ??

class X1: public B {};
class X2: public B {};
class XX: public X1, public X2 {};

XX* pxx = new XX{};
int ix1 = pxx->m;  // 3. ??
int ix2 = pxx-> sm;  // 4. ??
B* pbx = pxx;  // 5. ??