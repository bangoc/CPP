// Có thể sử dụng khuân mẫu hàm để triển khai các giải thuật xử lý
// khuân mẫu lớp
//
// Khi một khuân mẫu hàm được gọi, kiểu của tham số sẽ quyết định
//   lựa chọn phiên bản phù hợp của khuân mẫu.

template<typename T>
void sort(vector<T>& v) {
  const size_t n = v.size();
  for (int gap = n/2; 0 < gap; gap /= 2)
    for (int i = gap; i < n; ++i)
      for (int j = i - gap; 0 <= j; j -= gap) 
        if (v[j + gap] < v[j]) {
          T temp = v[j];
          v[j] = v[j + gap];
          v[j + gap] = temp;
        }
}

// Để sử dụng cả những kiểu dữ liệu không có phép so sánh <

template<typename T, typename Compare = std::less<T>>
void sort(vector<T>& v) {
  Compare cmp;
  const size_t n = v.size();

  for (int gap = n/2; 0 < gap; gap /= 2)
    for (int i = gap; i < n; ++i)
      for (int j = i - gap; 0 <= j; j -= gap) 
        if (cmp(v[j + gap], v[j])) {
          T temp = v[j];
          v[j] = v[j + gap];
          v[j + gap] = temp;
        }
}