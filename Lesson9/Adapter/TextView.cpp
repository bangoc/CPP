/*
 Mẫu Adapter hướng tới giải quyết vấn đề không tương thích giao diện bằng cách đóng gói đối tượng gốc
    và cung cấp một giao diện mới phù hợp, đáng ứng được nhu cầu sử dụng đối tượng.
 Có hai cách đóng gói lớp TextView là:
    + class adapter và
    + object adapter
 */

#include "TextView.h"

TextView::TextView()
{
    _x = 1.0;
    _y = 2.0;
    _width = 3.0;
    _height = 4.0;
}

void TextView::GetOrigin(Coord& x, Coord& y) const
{
    x = _x;
    y = _y;
}

void TextView::GetExtent(Coord& width, Coord& height) const
{
    width = _width;
    height = _height;
}

bool TextView::IsEmpty() const
{
  return _width == 0 || _height == 0;
}
