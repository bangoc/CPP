#include <iostream>

class Date {
public:
	static Date default_date;  // not safe in multithreaded

	Date(int d = 0, int m = 0, int y = 0) {
		day_ = d? d: default_date.day();
		month_ = m? m: default_date.month();
		year_ = y? y: default_date.year();
	}

	int day() { return day_; }
	int month() { return month_; }
	int year() { return year_; }
private:
	int day_, month_, year_;
};

//static
Date Date::default_date {13, 10 , 2017};

void Foo(Date d) {}
void Foo2(Date d) {}
void Foo2(int v) {}

int main() {
	Date d1;
	Date d2(10);
	Date d3 {10};
	Date d4 = 10;
	Date d5 = {10};

	Foo(10);
	Foo({10});
	Foo(Date(10));
	Foo(Date{10});

	Foo2(10);    // Looks ambiguous
	Foo2({10});	 // Looks ambiguous
	Foo2(Date(10));
	Foo2(Date{10});
}