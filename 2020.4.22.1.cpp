//OJ:根据输入的日期，计算是这一年的第几天。。

//详细描述：

//输入某年某月某日，判断这一天是这一年的第几天？。
#include<iostream>
using namespace std;

int main()
{
	static int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year, month, day;
	while (cin >> year >> month >> day)
	{
		//ctrl+c结束
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
