#include<iostream>
#include <cstdlib>
using namespace std;

class Date
{
public:
	int GetMonthDay(int year, int month)
	{
		static int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

		// 是2月且是闰年返回29
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			return 29;
		}

		return monthDays[month];
	}

	Date(int year = 0, int month = 1, int day = 1)
	{
		if (year >= 0
			&& month >= 1 && month <= 12
			&& day >= 1 && day <= GetMonthDay(year, month))
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else
		{
			cout << "非法日期" << endl;
		}
	}

	// d1 < d2
	// d1.operator<(&d1, d2)
	inline bool operator<(const Date& d) // bool operator<(Date* this, const Date& d)
	{
		if (_year < d._year)
			return true;
		else if (_year == d._year && _month < d._month)
			return true;
		else if (_year == d._year && _month == d._month && _day < d._day)
			return true;

		return false;
	}

	inline bool operator==(const Date& d)
	{
		return _year == d._year && _month == d._month && _day == d._day;
	}

	// d1 <= d2; => d1 < d2 || d1 == d2
	// d1.operator<=(&d1, d2);
	bool operator<=(const Date& d) // bool operator<=(Date* this, const Date& d)
	{
		return *this < d || *this == d;   // 复用上面的来实现
	}

	// d1 > d2 -> !(d1 <= d2)
	bool operator>(const Date& d)
	{
		return !(*this <= d);
	}

	bool operator>=(const Date& d)
	{
		return !(*this < d);
	}

	bool operator!=(const Date& d)
	{
		return !(*this == d);
	}

	// d1 + 10
	// d1 + 100
	// d1 + 1000
	//Date operator+(int day)
	//{
	//	Date ret(*this); // 用d1拷贝构造一个ret
	//	ret._day += day;
	//	while (ret._day > GetMonthDay(ret._year, ret._month))
	//	{
	//		// 如果日期的天不合法，就需要往月进度
	//		ret._day -= GetMonthDay(ret._year, ret._month);
	//		ret._month++;

	//		if (ret._month == 13)
	//		{
	//			ret._year++;
	//			ret._month = 1;
	//		}
	//	}

	//	return ret;
	//}

	// d1 + 10  复用实现
	Date operator+(int day)
	{
		Date ret(*this);
		ret += day; // ret.operator+=(day)

		return ret;
	}

	// d1 += 10
	Date& operator+=(int day)
	{
		if (day < 0)
		{
			return *this -= -day;
		}

		_day += day;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			++_month;
			if (_month == 13)
			{
				++_year;
				_month = 1;
			}
		}

		return *this;
	}

	// d1-=10 =》d1.operator-=(&d1, 10)
	Date& operator-=(int day)
	{
		if (day < 0)
		{
			return *this += -day;
		}

		_day -= day;
		while (_day <= 0) // day不合法需要继续处理
		{
			--_month;
			if (_month == 0)
			{
				--_year;
				_month = 12;
			}

			_day += GetMonthDay(_year, _month);
		}

		return *this;
	}

	// d1 - 10
	/*Date operator-(int day)
	{
	Date ret = *this;
	ret._day -= day;
	while (ret._day <= 0)
	{
	--ret._month;
	if (ret._month == 0)
	{
	--ret._year;
	ret._month = 12;
	}

	ret._day += GetMonthDay(ret._year, ret._month);
	}

	return ret;
	}*/

	Date operator-(int day)
	{
		Date ret = *this;
		ret -= day;
		return ret;
	}

	// ++d1 => d1.operator++(&d1)
	Date& operator++()
	{
		*this += 1;

		return *this; //返回加之后的值
	}

	// d1++ => d1.operator++(&d1, 0)
	Date& operator++(int) // 为了构成函数重载
	{
		Date tmp(*this);
		*this += 1;
		return tmp; // 返回加之前的值
	}

	// --d1
	Date& operator--();
	// d1--
	Date& operator--(int);

	// d1 - d2
	int operator-(const Date& d);

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	//Date d1(2020, 4, 15);
	//Date d2 = d1 - 10;
	//d2.Print();
	//d1.Print();

	//Date d3 = d1 -= 10;
	//d3.Print();
	//d1.Print();

	//++d1;
	//d1++;


	Date d1(2020, 4, 15);
	d1 += -100;
	d1.Print();



	return 0;
}
//class Stack
//{
//public:
//	Stack(int n = 10)
//	{
//		_a = (int*)malloc(sizeof(int)*n);
//		_size = 0;
//		_capacity = n;
//	}
//
//	~Stack()
//	{
//		free(_a);
//		_a = nullptr;
//		_size = _capacity = 0;
//	}
//private:
//	int* _a;
//	size_t _size;
//	size_t _capacity;
//};
//int main()
//{
//	Stack st1(10);
//	Stack st2(st1);
//
//	Stack st3(30);
//	st1 = st3;
//
//	return  0;
//}