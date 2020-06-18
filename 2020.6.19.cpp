#include<iostream>
using namespace std;
#include<algorithm>

int count(int n)
{
	int count = 0; 
	for (int i = 2; i <= n; i++)
	{
		int sum = 0;
		for (int j = 1; j <i;j++)
		{
			if (i%j == 0)
				sum += j;
		}
		if (sum == i)
			++count;
	}
	return count;
}

int main()
{
	int n;
	while (cin >> n)
		cout << count(n) << endl;
	return 0;
}