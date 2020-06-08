#include<iostream>
using namespace std;
#include<string>
class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		int cnt = 0;
		for (int i = 0; i<n; i++)
		{
			if (A[i] == '(')
				cnt++;
			else if (A[i] == ')')
			{
				if (cnt <= 0)
					return false;
				cnt--;
			}
			else
			{
				return false;
			}
		}
		return true;
	}
};
int main()
{
	return 0;
}