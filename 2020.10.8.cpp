#include<iostream>
using namespace std;

class Date
{
public:
	int GetMonthDay(int year, int month)
	{
		static int monthDay[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			return 29;
		}
		return monthDay[month];
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
	Date& operator+=(int day)
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

		return *this;
	}
	void Print()
	{
		if (_month<10 && _day >= 10)
		{
			cout << _year << "-" << "0" << _month << "-" << _day << endl;
		}
		else if (_month<10 && _day<10)
		{
			cout << _year << "-" << "0" << _month << "-" << "0" << _day << endl;
		}
		else if (_month >= 10 && _day<10)
		{
			cout << _year << "-" << _month << "-" << "0" << _day << endl;
		}
		else
			cout << _year << "-" << _month << "-" << _day << endl;

	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	int i;
	cin >> i;
	int year;
	int month;
	int day1;
	int day2;
	while (i--)
	{
		cin >> year;
		cin >> month;
		cin >> day1;
		cin >> day2;
		Date d1(year, month, day1);
		d1 += day2;
		d1.Print();
	}

	return 0;
}