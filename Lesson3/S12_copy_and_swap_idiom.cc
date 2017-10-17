// Toán tử gán có thể yêu cầu cấp phát bộ nhớ và sảy ra lỗi khiến đối tưọng đích ở trong
// trạng thái pha trộn giữa dữ liệu cũ và mới. Để tránh tình trạng này có thể cấp phát
// đối tưọng tạm sau đó hoán đổi.
// Kỹ thuật này được biết đến là copy and swap idiom

C& operator=(const C& other) {
	C tmp(other);
	std::swap(tmp, *this);
	return *this;
}