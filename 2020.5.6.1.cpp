#include<iostream>
using namespace std;
#include<string>
#include <vector>
#include <list>
//
//
//
//void test_string()
//{
//	/*string s1("hello");
//	s1 += ' ';
//	s1 += "world";
//	cout << s1<< endl;*/
//
//}
//int main()
//{
//	test_string();
//	return 0;
//}

class Solution {
public:
	string addStrings(string num1, string num2) {
		int end1 = num1.size() - 1, end2 = num2.size() - 1;
		int next = 0;
		string retstr;
		while (end1 >= 0 || end2 >= 0)
		{
			int val1 = 0, val2 = 0;
			if (end1 >= 0)
				val1 = num1[end1] - '0';

			if (end2 >= 0)
				val2 = num2[end2] - '0';

			int ret = val1 + val2 + next;
			if (ret > 9)
			{
				ret -= 10;
				next = 1;
			}
			else
			{
				next = 0;
			}

			retstr += (ret + '0');
			//retstr.insert(retstr.begin(), '0'+ret);
			--end1;
			--end2;
		}

		if (next == 1)
		{
			retstr += '1';
			//retstr.insert(retstr.begin(), '1');
		}

		reverse(retstr.begin(), retstr.end());

		return retstr;
	}

	string multiply(string num1, string num2) {
		string i("0");
		string one("1");
		string ret("0");
		while (i != num1)
		{
			ret = addStrings(ret, num2);
			i = addStrings(i, one);
		}

		return ret;
	}
};
int main()
{
	return 0;
}