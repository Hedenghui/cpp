#include<iostream>
using namespace std;

class Date
{
public:
	Date(int year = 2020, int month = 5, int day = 2)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//void print()->void print(Date* this)
	void print()const//->void print(const Date* this)
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	//const Date* p1->指向的对象
	//Date const* p2->指向的对象
	//Date* const p3->指针本身
	Date* operator&()
	{
		cout << "operator&()" << endl;
		return this;
	}
	const Date* operator&()const
	{
		cout << "operator&()const" << endl;
		return this;
	}
private:
	int _year;
	int _month;
	int _day;
};
void f(const Date& d)
{
	d.print();
}
int main()
{
	Date d1(2020, 4, 18);
	Date d2(2020, 4, 11);
	const Date d3;

	f(d1);
	d1.print();
	cout << &d1 << endl;
	cout << &d2<< endl;
	cout << &d3<< endl;

	return 0;
}