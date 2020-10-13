#include<iostream>
using namespace std;
#include<string>
class Solution {
public:
	static bool isPalindrome(string s) {
		if (s.empty())
		{
			return true;
		}
		int begin = 0;
		int end = s.size() - 1;
		for (int i = 0; i<s.size(); i++)
		{
			if (s[i] >= 'A'&&s[i] <= 'Z')
			{
				s[i] = s[i] + 32;
			}
		}
		while (begin<end)
		{
			while (begin<end && (s[begin]<'0' || ((s[begin]>'9') && (s[begin]<'a')) || s[begin]>'z'))
			{
				begin++;
			}
			while (begin<end && (s[end]<'0' || ((s[end]>'9') && (s[end]<'a')) || s[end]>'z'))
			{
				end--;
			}
			if (s[begin] == s[end])
			{
				begin++;
				end--;
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