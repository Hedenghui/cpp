#include<iostream>
using namespace std;

//class Date
//{
//public:
//	explicit Date(int year, int month, int day)
//		:_year(year)
//	{
//		cout << "Date(int year)" << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(1, 2, 3);
//	//c++11
//	Date d2 = { 1, 2, 3 };//隐式类型的转换
//	return 0;
//}

//static成员
//设计出一个类，计算这个类总计产生多少个对象
//int n = 0;
//class A
//{
//public:
//	A()
//	{
//		++n;
//	}
//	A(const A& a)
//	{
//		++n;
//	}
//private:
//	static int n;
//};
//int A::n = 0;
//A& f1(A& a)
//{
//	return a;
//}
//
//int main()
//{
//	A a1;
//	A a2;
//	f1(a1);
//	f1(a2);
//	//cout << n << endl;
//	return 0;
//}

class Sum
{
public:
	Sum()
	{
		_sum += _i;
		++_i;
	}
	static int GetSum()
	{
		return _sum;
	}
	static void Init()
	{
		_i = 1;
		_sum = 0;
	}
private:
	static int _i;
	static int _sum;
};
int Sum::_i = 1;
int Sum::_sum = 0;
class Solution {
public:
	int Sum_Solution(int n) {
		//Sum::init();
		//Sum a[n];//c99变长数组
	 Sum::Init();
		Sum* p = new Sum[n];
		return Sum::GetSum();
	}
};
int main()
{
	Solution st;
	cout << st.Sum_Solution(5) << endl;
	cout << st.Sum_Solution(5) << endl;
	return 0;
}