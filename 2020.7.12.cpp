#include<iostream>
using namespace std;

int main()
{
	//f(n) = (n-1)*(f(n-1)+f(n-2))
	long long ErrCount[21] = { 0, 0, 1 };
	long long SumCount[21] = { 0, 1, 2 };
	for (int i = 3; i <= 21; i++)
	{
		ErrCount[i] = (i - 1)*(ErrCount[i - 1] + ErrCount[i - 2]);
		SumCount[i] = i*SumCount[i - 1];
	}
	int n;
	while (cin >> n)
	{
		printf("%.2f%%\n", 100.0*ErrCount[n] / SumCount[n]);
	}
	return 0;
}