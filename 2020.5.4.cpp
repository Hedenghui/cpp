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
	// 用一个整形变量给日期类型对象赋值
	// 实际编译器背后会用2019构造一个无名对象，最后用无名对象给d1对象进行赋值
	d1 = 2019;
	d1.print();
}


int main()
{
	TestDate();
	return 0;
}