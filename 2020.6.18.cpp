#include<iostream> 
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{

		int count = 0;
		if (n<0)
		{
			n *= -1;
			while (n > 0)
			{
				if (n & 1) ++count;
				n >>= 1;
			}
			++count;
		}
		else
		{
			while (n > 0)
			{
				if (n & 1) ++count;
				n >>= 1;
			}
		}

		cout << count << endl;
	}

	return 0;
}