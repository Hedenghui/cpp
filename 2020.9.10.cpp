#include<iostream>
using namespace std;

class Date
{
public:
	int GetMonthDay(int year, int month)
	{
		static int MonthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			return 29;
		}
		return MonthDays[month];
	}
	Date(int year = 0, int month = 1, int day = 1)
	{
		if (year >= 0 && month >= 1 && month <= 12 && day >= 1 && day <= GetMonthDay(month, day))
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
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	//拷贝构造
	/*Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
		cout << "Date(const Date& d)" << endl;
	}*/


	inline bool operator<(const Date& d)
	{
		if (_year < d._year)
			return true;
		else if (_year == d._year&&_month < d._month)
			return true;
		else if (_year == d._year&&_month == d._month&&_day < d._day)
			return true;

		return false;
	}
	inline bool operator==(const Date& d)
	{
		return _year == d._year&&_month == d._month&&_day == d._day;
	}
	bool operator>(const Date& d)
	{
		return !(*this <= d);
	}
	bool operator<=(const Date& d)
	{
		return *this < d || *this == d;
	}
	bool operator>=(const Date& d)
	{
		return *this>d || *this == d;
	}
	bool operator!=(const Date& d)
	{
		return !(*this == d);
	}
	Date operator+(int day)
	{
		Date ret = *this;
		ret._day += day;
		while (ret._day > GetMonthDay(ret._year, ret._month));
		{
			ret._day -= GetMonthDay(ret._year, ret._month);
			ret._month++;
			if (ret._month == 13)
			{
				ret._year++;
				ret._month = 1;
			}
		}
		return ret;
	}
	Date& operator+=(int day)//引用做返回看是不是还在
	{
		_day += day;
		while (_day > GetMonthDay(_year, _month));
		{
			_day -= GetMonthDay(_year, _month);
			_month++;
			if (_month == 13)
			{
				_year++;
				_month = 1;
			}
		}
		return *this;
	}
	//Date& operator=(const Date& d)//减少拷贝构造
	//{
	//	if (this != &d)//针对自己给自己的赋值
	//	{
	//		_year = d._year;
	//		_month = d._month;
	//		_day = d._day;
	//	}
	//	return *this;
	//}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1;
	d1.Print();
	Date d2(2020, 9, 9);
	d2.Print();
	Date d4;
	d4 = d2;
	d4.Print();
	Date d3 = d2;


	/*cout << (d1 < d2) << endl;
	cout << (d1 <= d2) << endl;
	cout << (d1 > d2) << endl;
	cout << (d1 >= d2) << endl;
	cout << (d1 != d2) << endl;
	cout << (d1 == d2) << endl;

	d1 + 10;
	d1 += 10;*/
	/*d1 - 10;
	d1 -= 10;
	d1 - d2;
	d1++;
	d1--;*/
	return 0;
}