#include<iostream>
using namespace std;


class Date
{
public:
	Date(int year)
		:_year(year)
	{}
	/*explicit Date(int year)
		:_year(year)
	{}*/
	void print()
	{
		cout << _year << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
void TestDate()
{
	Date d1(2018);
	// ��һ�����α������������Ͷ���ֵ
	// ʵ�ʱ������������2019����һ������������������������d1������и�ֵ
	d1 = 2019;
	d1.print();
}


int main()
{
	TestDate();
	return 0;
}