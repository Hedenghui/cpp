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
//	d1.print();//���Ե���
//	return 0;
//}
#include<iostream>
using namespace std;

class Date
{
public:
	/*Date(int year = 0, int month = 1, int day = 1)
	{
	//�������ڸ�ֵ
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
		f2();//this->f2(this) �ɶ���д��һ���ɶ�������
	}
	void f2() const
	{}
	/*void f3()
	{}
	void f4()const
	{
		f3();//��һ��ֻ�ɶ����ɶ���д������
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
