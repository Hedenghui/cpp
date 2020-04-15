#include<iostream>
using namespace std;
//class Stack
//{
//public:
//	Stack(int n = 10)
//	{
//		_a = (int*)malloc(sizeof(int)*n);
//		_size = 0;
//		_capacity = n;
//	}
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
#include<iostream>
#include <cstdlib>
using namespace std;

class Date
{
public:
	int GetMonthDay(int year, int month)
	{
		int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			return 29;
		}
		return monthDays[month];
	}
	Date(int year = 0, int month = 1, int day = 1)
	{
		if (year >= 0 &&
			month >= 1 && month <= 12
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
	//Date d2(d1)
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	//d1<d2
	//d1.operator<(&d1,d2)
	bool operator<(const Date& d)//bool operator<(Date* this,const Date& d)
	{
		if (_year < d._year)
			return true;
		else if (_year == d._year&&_month < d._month)
			return true;
		else if (_year == d._year&&_month == d._month&&_day < d._day)
			return true;
		return false;
	}
	bool operator==(const Date& d)
	{
		return _year == d._year&&_month == d._month&&_day == d._day;
	}
	bool operator<=(const Date& d)
	{
		/*if (_year < d._year)
		return true;
		else if (_year == d._year&&_month < d._month)
		return true;
		else if (_year == d._year&&_month == d._month&&_day <= d._day)
		return true;
		return false;*/
		return *this < d || *this == d;//复用上面的来实现
	}
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
	//d1+10
	//d1+100
	//d1+1000
	Date operator+(int day)
	{
		Date ret(*this);//用d1拷贝构造一个ret
		ret._day += day;
		while (ret._day > GetMonthDay(ret._year, ret._month))
		{
			//如果日期的天不合法，就需要往月进度
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
	Date operator+=(int day)
	{
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
		return  *this;
	}
	Date operator-(int day)
	{
		Date ret(*this);
		if (day<ret._day)
		{
			ret._day -= day;
			return ret;
		}
		else
		{
			day -= ret._day;
			ret._month--;
			//ret._day = GetMonthDay(_year, _month);
			ret._day = 0;
			ret._day -= day;
			while (abs(ret._day) >= GetMonthDay(ret._year, ret._month))
			{
				ret._day += GetMonthDay(ret._year, ret._month);
				ret._month--;
				if (ret._month == 0)
				{
					ret._year--;
					ret._month = 12;
				}
			}
			int a = ret._day;
			ret._day = GetMonthDay(ret._year, ret._month);
			ret._day += a;
		}
		return ret;
	}
	Date& operator=(const Date& d)
	{
		if (this != &d)//检查d3=d3
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
	void print()
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
	Date d1;
	d1.print();
	Date d2(2020, 4, 13);
	d2.print();
	Date d5 = d2 - 20000;
	d5.print();
	//Date d3(2004, 4, 31);
	//d3.print();
	Date d3(2019, 12, 31);
	d3.print();
	//cout << (d1 < d2) << endl;
	//cout << (d1 > d2) << endl;
	//cout << (d1 == d2) << endl;
	//cout << (d1 != d2) << endl;
	//cout << (d1 <= d2) << endl;
	//cout << (d1 >= d2) << endl;
	//Date d4=d2 + 1000;
	//d4.print();
	/*Date d4 = d2 += 10000;
	d4.print();*/
	Date d4 = d3 + 103;
	d4.print();
	/*Date d5 = d2 - 103;
	d5.print();*/
	return 0;
}
//int main()
//{
//	//c++
//	Stack st;
//	//c
//	//StackInit(&st);
//	//StackDestroy(&st);
//}