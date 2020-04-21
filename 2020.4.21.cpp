#include<iostream>
using namespace std;
//class Date
//{
//public:
//	/*void Display()
//	{
//		cout << "Display()" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//	}*/
//	void Display()const
//	{
//		cout << "Display()const" << endl;
//		cout << "year:" << _year << endl;
//		cout << "month:" << _month << endl;
//		cout << "day:" << _day << endl << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void test()
//{
//	Date d1;
//	d1.Display();
//	Date d2;
//	d2.Display();
//}
//int main()
//{
//	test();
//	return 0;
//}
//class Date
//{
//public:
//	Date* operator&()
//	{
//		return this;
//	}
//	const Date* operator&()const
//	{
//		return this;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
class Date
{
public:
	Date()
	{
		_year = 0;
		_day = 1;
		_month = 1;
		cout << this << endl;
	}
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
		cout << this << endl;
	}
	~Date()
	{
		cout << "~Date()" <<this<< endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1;//²»ÄÜÐ´£¨£©
	Date d2(2020,4,1);

	return 0;
}