#include<iostream>
using namespace std;
class UnusualAdd {
public:
	int addAB(int A, int B) {
		// write code here
		int a, b;
		while (B != 0)
		{
			a = A^B;
			b = (A&B) << 1;
			A = a;
			B = b;
		}
		return A;
	}
};

int main()
{
	UnusualAdd ST;
	ST.addAB(3, 5);
	cout << ST.addAB(3, 5) << endl;
	return 0;
}