#include<iostream>
using namespace std;
#include<string>
#include<vector>
//class Solution {
//public:
//	string multiply(string num1, string num2) {
//		if (num1 == "0" || num2 == "0") {
//			return "0";
//		}
//		string ans = "0";
//		int m = num1.size(), n = num2.size();
//		for (int i = n - 1; i >= 0; i--) {
//			string curr;
//			int add = 0;
//			for (int j = n - 1; j > i; j--) {
//				curr.push_back(0);
//			}
//			int y = num2.at(i) - '0';
//			for (int j = m - 1; j >= 0; j--) {
//				int x = num1.at(j) - '0';
//				int product = x * y + add;
//				curr.push_back(product % 10);
//				add = product / 10;
//			}
//			while (add != 0) {
//				curr.push_back(add % 10);
//				add /= 10;
//			}
//			reverse(curr.begin(), curr.end());
//			for (auto &c : curr) {
//				c += '0';
//			}
//			ans = addStrings(ans, curr);
//		}
//		return ans;
//	}
//
//	string addStrings(string &num1, string &num2) {
//		int i = num1.size() - 1, j = num2.size() - 1, add = 0;
//		string ans;
//		while (i >= 0 || j >= 0 || add != 0) {
//			int x = i >= 0 ? num1.at(i) - '0' : 0;
//			int y = j >= 0 ? num2.at(j) - '0' : 0;
//			int result = x + y + add;
//			ans.push_back(result % 10);
//			add = result / 10;
//			i--;
//			j--;
//		}
//		reverse(ans.begin(), ans.end());
//		for (auto &c : ans) {
//			c += '0';
//		}
//		return ans;
//	}
//};


class Solution {
public:
	static string plus(string num1, string num2)
	{
		int i = num1.size() - 1;
		int j = num2.size() - 1;
		int flag = 0;
		string s;
		while (i >= 0 || j >= 0 || flag == 1)
		{
			int a = i >= 0 ? num1[i] - '0' : 0;
			int b = i >= 0 ? num2[i] - '0' : 0;
			int ret = a + b + flag;
			ret %= 10;
			flag = ret / 10;
			s += ret + '0';
			i--;
			j--;
		}
		reverse(s.begin(), s.end());
		return s;
	}
	static string multiply(string num1, string num2) {
		if (num1 == "0" || num2 == "0") {
			return "0";
		}
		int i = num1.size();
		int j = num2.size();
		string h = "0";
		for (int a = j - 1; a >= 0; a--)
		{
			string s;
			int ret = num2[a] - '0';
			for (int b = j - 1; b>a; b--)
			{
				s += '0';
			}
			int flag = 0;
			for (int h = i - 1; h >= 0; h--)
			{
				int chengji = ret*(num1[h] - '0') + flag;
				flag = chengji / 10;
				s += chengji % 10 + '0';
			}
			while (flag != 0)
			{
				s += (flag % 10);
				flag / 10;
			}
			reverse(s.begin(), s.end());
			h = plus(h, s);
		}
		return h;
	}
};
int main()
{
	return 0;
}