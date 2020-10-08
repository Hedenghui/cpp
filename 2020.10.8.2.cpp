#include<iostream>
using namespace std;

int main()
{
	int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year, month, day;
	while (cin >> year >> month >> day)
	{
		//ctrl+c½áÊø
		int n = 0;
		for (int i = 1; i < month; i++)
		{
			n += monthDays[i];
		}
		n += day;
		if (month>2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
		{
			n += 1;
		}
		cout << n << endl;
	}
	return 0;
}