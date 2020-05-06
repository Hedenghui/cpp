#include<iostream>
using namespace std;

class Date
{
	friend ostream& operator<<(ostream& out, const Date& d);
public:
	Date(int year = 0, int month = 1, int day = 1)
		:_year(year)
		, _month(month)
		, _day(day)
	{}
private:
	int _year;
	int _month;
	int _day;
};

ostream& operator<<(ostream& out,const Date& d)
{
	out << d._year << "-" << d._month << "-" <<d._day << endl;
	return out;
}
int main()
{
	int i = 1, j = 2;
	cout << i << j << endl;
	Date d1 = (2020, 5, 6);
	cout << d1 << endl;
	return 0;
}