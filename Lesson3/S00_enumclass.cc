// enum class: scoped enum
// static_cast may be used to obtain the numeric value of the enumerator
// Khuyến khích sử dụng enum class thay cho enum

void Print_color(int color);

enum Web_color { red = 0xFF0000, green = 0x00FF00, blue = 0x0000FF };
enum Product_info { Red = 0, Purple = 1, Blue = 2 };

Web_color webby = Web_color::blue;

// Clearly at least one of these calls is buggy.
Print_color(webby);
Print_color(Product_info::Blue);

// Instead use an enum class:

void Print_color(int color);

enum class Web_color { red = 0xFF0000, green = 0x00FF00, blue = 0x0000FF };
enum class Product_info { red = 0, purple = 1, blue = 2 };

Web_color webby = Web_color::blue;
Print_color(webby);  // Error: cannot convert Web_color to int.
Print_color(Product_info::Red);  // Error: cannot convert Product_info to int.

int main () {
	int i = static_cast<int>(Product_info::Red);
	Product_info color = static_cast<Product_info>(1);
}