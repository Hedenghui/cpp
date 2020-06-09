#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a>b)
	{
		if (a%b == 0)
		{
			cout << a << endl;
		}
		else{
			for (int i = 1; i <= a; i++)
			{
				int k;
				k = i*b;
				if (k%a == 0)
				{
					cout << k << endl;
					break;
				}
			}
		}
	}
	else
	{
		if (b%a == 0)
		{
			cout << b << endl;
		}
		else{
			for (int i = 1; i <= b; i++)
			{
				int k;
				k = i*a;
				if (k%b == 0)
				{
					cout << k << endl;
					break;
				}
			}
		}
	}
	return 0;

}