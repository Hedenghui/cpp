#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;
//class Date
//{
//public:
//	Date(int year=0,int month=1,int day=1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date()
//	{
//
//	}
//	~Date()
//	{
//
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d;
//}
//class Time
//{
//public:
//	Time()
//	{
//		cout << "time()" << endl;
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//	~Time()
//	{
//		cout <<"1"<< endl;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//private:
//	//基本类型(内置类型)
//	int _year;
//	int _month;
//	int _day;
//	
//};
//int main()
//{
//	Date d;
//	//system("pause");
//	return 0;
//}
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
	Date(int year=0,int month=1,int day=1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	~Date()
	{

	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2020,4,23);
	Date d2(d1);
	Date d3 = d1;
	d1.print();
	d2.print();
	d3.print();
	return 0;
}