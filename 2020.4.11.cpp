//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//class String
//{
//public:
//	String(const char* str = "jack")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//class Person
//{
//private:
//	String _name;
//	int _age;
//};
//int main()
//{
//	Person p;
//	return 0;
//}
class Date
{
public:
	Date(int year = 0, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//data d2(d1);
	Date(Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	void print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	int _year;
	int _month;
	int _day;
};
bool operator==(const Date& d1, const Date& d2)
{
	return d1._year == d2._year
		&& d1._month == d2._month
		&& d1._day == d2._day;
}
int main()
{
	Date d1(2020, 11, 4);
	Date d2(2020,11,3);
	Date d3 = d1;
	d1.print();
	d2.print();
	d3.print();
	d1 == d2;
	operator==(d1, d2);
	return 0;
}