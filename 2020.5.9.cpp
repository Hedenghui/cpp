//给定一个字符串 S，返回 “反转后的” 字符串，
//其中不是字母的字符都保留在原地，
//而所有字母的位置发生反转。

#include<iostream>
using namespace std;

class Solution
{
public:
	bool IsChar(char st)
	{
		if ((st >= 'a'&&st <= 'z') || (st >= 'A'&&st <= 'Z'))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string reverseOnlyLetters(string S)
	{
		int begin = 0;
		int end = S.size() - 1;
		while (begin < end)
		{
			while (begin < end && (IsChar(S[begin]) == false))
			{
				begin++;
			}
			while (begin < end && (IsChar(S[end]) == false))
			{
				end--;
			}
			swap(S[begin], S[end]);
			begin++;
			end--;
		}
		return S;
	}
};
int main()
{
	return 0;
}