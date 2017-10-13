Hãy biên dịch chương trình, tạo thư viện tĩnh, động, trên nhiều nền tảng khác nhau, thử với các trình biên dịch khác nhau: MSVC, g++, MinGW, v.v.

Các câu lệnh cơ bản:
mkdir build
cd build
cmake ..
cmake --build .
cmake .. -Dshared=OFF
cmake .. -G Ninja
