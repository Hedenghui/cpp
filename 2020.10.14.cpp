#include<iostream>
using namespace std;


class Solution {
public:
	string reverseWords(string s) {
		int begin = 0;
		for (int i = 0; i<s.size() + 1; i++)
		{
			if (s[i] == ' ' || s[i] == '\0')
			{
				for (int j = i - 1; begin<j; begin++, j--)
				{
					swap(s[begin], s[j]);
				}
				begin = i + 1;
			}
		}
		return s;
	}
};

int main()
{
	return 0;
}