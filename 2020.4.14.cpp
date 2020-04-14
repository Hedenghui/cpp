#include<iostream>
using namespace std;
//class Date
//{
//public:
//	//无参构造函数
//	Date()
//	{
//
//	}
//	//带参构造函数
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void TestDate()
//{
//	Date d1;//调用无参构造函数
//	Date d2(2020, 4, 14);//调用带参的构造函数
//	//注意：如果通过无参构造函数创建对象时，对象后面不用跟括号，否则就成了函数声明
//	//以下代码的函数：声明了d3函数，该函数无参，返回一个日期类型的对象
//	Date d3();
//}
//int main()
//{
//	TestDate();
//	return 0;
//}

//class Date
//{
//public:
//	//如果用户显式定义了构造函数，编译器将不再生成
//	/*Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void test()
//{
//	// 没有定义构造函数，对象也可以创建成功，因此此处调用的是编译器生成的默认构造函数
//	Date d;
//}

//class Date
//{
//public:
//	Date()
//	{
//		_year = 2020;
//		_month = 4;
//		_day = 14;
//	}
//	Date(int year = 2020, int month = 4, int day = 14)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void Test()
//{
//	Date d2;
//}

class Time
{
public:
	Time()
	{
		cout << "time()" << endl;
		_hour = 0;
		_minute = 0;
		_second = 0;
	}
private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
private:
	//基本类型(内置类型)
	int _year;
	int _month;
	int _day;
	//自定义类型
	Time _t;
};
int main()
{
	Date d;
	return 0;
}

//// 我们看看这个函数，是不是很僵硬？
//class Date
//{
//public:
//	Date(int year)
//	{
//		// 这里的year到底是成员变量，还是函数形参？
//		year = year;
//	}
//private:
//	int year;
//};
//// 所以我们一般都建议这样
//class Date
//{
//public:
//	Date(int year)
//	{
//		_year = year;
//	}
//private:
//	int _year;
//};
//// 或者这样。
//class Date
//{
//public:
//	Date(int year)
//	{
//		m_year = year;
//	}
//private:
//	int m_year;
//};
//// 其他方式也可以的，主要看公司要求。一般都是加个前缀或者后缀标识区分就行。