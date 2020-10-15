#include<iostream>
using namespace std;

class Solution {
public:
	string addStrings(string num1, string num2) {
		string s;
		int i = num1.size() - 1;
		int j = num2.size() - 1;
		int flag = 0;
		while (i >= 0 || j >= 0 || flag == 1)
		{
			int a = i >= 0 ? num1[i] - '0' : 0;
			int b = j >= 0 ? num2[j] - '0' : 0;
			int ret = a + b + flag;
			s.push_back((ret % 10) + '0');
			flag = ret / 10;
			i--;
			j--;
		}
		int begin = 0;
		int end = s.size() - 1;
		while (begin<end)
		{
			swap(s[begin], s[end]);
			begin++;
			end--;
		}
		return s;
	}
};
int main()
{
	return 0;
}