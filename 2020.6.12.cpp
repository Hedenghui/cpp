#include<iostream>
using namespace std;

class LCA {
public:
	int getLCA(int a, int b) {
		// write code here
		while (a != b)
		{
			if (b>a)
			{
				b /= 2;
			}
			else
			{
				a /= 2;
			}
		}
		return a;
	}
};
int main()
{
	return 0;
}