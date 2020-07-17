#include <iostream>
using namespace std;
#include<string>
int Count(string s)
{
	int ret = 0;
	for (int i = 0; i < s.size(); i++) {
		//排列组合，每位都有26种搭配，所以每次都要乘26
		ret = ret * 26 + s[i] - 'a';
	}
	return ret;
}

int main()
{
	string s1, s2;
	int len1, len2;
	while (cin >> s1 >> s2 >> len1 >> len2) {
		cout << (Count(s2) - Count(s1) - 1) % 1000007 << endl;
	}
	return 0;
}