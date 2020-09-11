#include<iostream>
using namespace std;

//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void print()const
//	{
//		cout << _year<<"-" << _month <<"-"<< _day << endl;
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
//	Date d1(2020, 9, 11);
//
//	return 0;
//}

//
//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{}
//private:
//	int _a;
//};
//class B
//{
//public:
//	B(int a, int ref)
//		//:_aobj(a)
//		:_ref(ref)
//		, _n(10)
//	{}
//private:
//	A _aobj;
//	int& _ref;
//	const int _n;
//};
//int main()
//{
//	return 0;
//}

//class Time
//{
//public:
//	Time(int miao)
//		:_hour(miao)
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
//		:_t(10)
//	{}
//private:
//	int _day;
//	Time _t;
//};
//int main()
//{
//	Date d(1);
//}


class Date
{
	friend ostream& operator<<(ostream& out, const Date& d);
public:
	Date(int year)
		:_year(year)
	{}
	/*explicit Date(int year)
		:_year(year)
	{}*/
	//类里面不受访问限定符限制
	const void f2()
	{
		f3();
	}
	void f3()
	{
		f2();
	}


	
	//static void f4()
	//{
	//	f5();//没有this指针
	//}
	/*void f5()
	{
		f4();
	}*/
	/*void operator<<(ostream& out)
	{
		out << _year << "-" << _month << "-" << _day << endl;
	}*/
private:
	int _year;
	int _month;
	int _day;
};

//void operator<<(ostream& out,const Date& d)
//{
//      out << d._year << "-" << d._month << "-" << d._day << endl;
//}
ostream& operator<<(ostream& out, const Date& d)
{
      out << d._year << "-" << d._month << "-" << d._day << endl;
	  return out;
}
int main()
{
	Date d1(1);
	const Date& d3 = 2;//隐士类型转换
	Date d4 = d1;
	//cout << d1;
	//d1 << cout;//可读性差
	return 0;
}