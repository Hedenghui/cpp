#include<iostream>
using namespace std;
//class date
//{
//public:
//	//��̬��Ա���������Ե��÷Ǿ�̬��Ա����
//	/*void f1()
//	{
//
//	}
//	static void f2()
//	{
//		f1();
//	}*/
//	//�Ǿ�̬��Ա�������Ե�����ľ�̬��Ա����
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
//		//Sum a[n];//c99�䳤����
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
	//����ʱ��ȱʡֵ
	int _year=0;
	int _month=1;
	int _day=1;
};
int main()
{
	Date d;
	d.print();
}