#include<iostream>
using namespace std;

//class Date
//{
//public:
//	/*Date(int year = 0, int month = 1, int day = 1)
//	{
//	//函数体内赋值
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//	Date(int year = 0, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//		, _day(day)
//	{
//	//初始化列表
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	return 0;
//}




//为什么？
//class A
//{
//public:
//	A(int a=1)
//		:_a(a)
//	{}
//private:
//	int _a;
//};
//class B
//{
//public:
//	//可以理解为初始化列表是对象的成员变量的定义的地方
//	B(int a, int ref)
//		//:_aobj(a)
//		: _ref(ref)
//		, _n(10)
//	{
//		_aobj = a;
//	}
//private:
//	A _aobj; // 没有默认构造函数
//	int& _ref; // 引用
//	const int _n; // const
//	//成员变量的声明
//};
//int main()
//{
//	B b(1, 2);//对象定义
//	return 0;
//}


//class Time
//{
//public:
//	Time(int hour = 0)
//		:_hour(hour)
//	{
//		cout << "Time()" << endl;
//	}
//private:
//	int _hour;
//};
//class Date
//{
//public:
//	Date(int day)
//	{}
//private:
//	int _day;
//	Time _t;
//};
//int main()
//{
//	Date d(1);
//}

//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//int main() {
//	A aa(1);
//	aa.Print();
//}
int main()
{
	const double& d = 1;
	return 0;
}

