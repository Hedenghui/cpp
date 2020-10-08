#include<iostream>
using namespace std;


int main()
{

	int year, day;
	cin >> year >> day;
	int month = 0;
	static int monthDay[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


	while (month<13)
	{
		if (day>monthDay[month])
		{
			if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
			{
				monthDay[2] = 29;
			}
			day -= monthDay[month];
			month += 1;

			if (month == 13)
			{
				year += 1;
				month = 1;
			}
		}
		else
		{
			break;
		}
	}
	printf("%4d-%02d-%02d\n", year, month, day);
	return 0;

}