#include<iostream>
using namespace std;

int func(int m, int n)
{
	if (m == 0 || n == 0)
	{
		return 1;
	}
	return func(m, n - 1) + func(m - 1, n);
}
int main()
{
	int m, n;
	while (cin >> m >> n)
	{
		cout << func(m, n) << endl;
	}
	return 0;
}