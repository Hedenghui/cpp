#include<iostream>
using namespace std;

class Solution {
public:
	int fib(int n) {
		int a = 0;
		int b = 1;
		int sum;
		if (n == 0)
			return 0;
		if (n == 1)
			return 1;
		while (n >= 2)
		{
			sum = (a + b) % 1000000007;
			a = b;
			b = sum;
			n--;
		}
		return sum;
	}
};
int main()
{
	return 0;
}