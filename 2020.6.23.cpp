#include<iostream>
using namespace std;
int num(int n)
{
	if (n == 1) return 0;
	if (n == 2) return 1;
	return num(n - 2) + 1;
}
int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
			break;
		cout << num(n) << endl;
	}
	return 0;
}