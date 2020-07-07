#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] <= 'E' && s[i] >= 'A')//处理小于E的
				s[i] += 21;
			else if (s[i] >= 'F' && s[i] <= 'Z')//处理正常的字母
				s[i] -= 5;
			else                       //处理空格或者其他字符
				continue;
		}
		cout << s << endl;
	}
	return 0;
}