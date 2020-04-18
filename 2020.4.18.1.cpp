//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 0,int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//void print()->void print(Date* this)
//	void print()const//->void print(const Date* this)
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void f(const Date& d)
//{
//	d.print();
//}
//int main()
//{
//	Date d1(2020, 4, 18);
//	f(d1);
//	d1.print();//可以调用
//	return 0;
//}
#include<iostream>
using namespace std;

class Date
{
public:
	/*Date(int year = 0, int month = 1, int day = 1)
	{
	//函数体内赋值
		_year = year;
		_month = month;
		_day = day;
	}*/
	Date(int year = 0, int month = 1, int day = 1)

		:_year(year)
		, _month(month)
		, _day(day)
	{}
	//void print()->void print(Date* this)
	void print()const//->void print(const Date* this)
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	void f1()//void f1(Date* this)
	{
		f2();//this->f2(this) 可读可写调一个可读，可以
	}
	void f2() const
	{}
	/*void f3()
	{}
	void f4()const
	{
		f3();//由一个只可读调可读可写，不行
	}*/
private:
	int _year;
	int _month;
	int _day;
};
void f(const Date& d)
{
	d.print();
}
