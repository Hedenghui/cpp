#include<iostream>
using namespace std;
//class date
//{
//public:
//	//静态成员函数不可以调用非静态成员函数
//	/*void f1()
//	{
//
//	}
//	static void f2()
//	{
//		f1();
//	}*/
//	//非静态成员函数可以调用类的静态成员函数
//private:
//	int _year;
//};
//int main()
//{
//	return 0;
//}
//class Sum
//{
//public:
//	Sum()
//	{
//		_sum += _i;
//		++_i;
//	}
//	static int GetSum()
//	{
//		return _sum;
//	}
//	static void init()
//	{
//		_i = 1;
//		_sum = 0;
//	}
//private:
//	static int _i;
//	static int _sum;
//};
//int Sum::_i = 1;
//int Sum::_sum = 0;
//class Solution {
//public:
//	int Sum_Solution(int n) {
//		//Sum a[n];//c99变长数组
//		Sum::init();
//		Sum* p = new Sum[n];
//		return Sum::GetSum();
//	}
//};
//int main()
//{
//	Solution st;
//	cout << st.Sum_Solution(5) << endl;
//	cout << st.Sum_Solution(5) << endl;
//
//	return 0;
//}
class Date
{
public:
	Date()
		:_year(10)
		, _month(1)
		, _day(1)
	{

	}
	void print()
	{
		cout << _year << _month << _day << endl;
	}
private:
	//c++11
	//声明时给缺省值
	int _year=0;
	int _month=1;
	int _day=1;
};
int main()
{
	Date d;
	d.print();
}