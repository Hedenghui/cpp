#include<iostream>
using namespace std;

class Date
{
public:
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Display()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1, d2;
	d1.SetDate(2020, 4, 13);
	d1.Display();
	//Date d2;
	d2.SetDate(2020, 4, 14);
	d2.Display();

	return 0;
}