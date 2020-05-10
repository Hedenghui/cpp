//计算字符串最后一个单词的长度，单词以空格隔开。

#include<iostream>
using namespace std;
#include<string>

int main()
{
	string s;
	getline(cin, s);//也是输入的意思
	//cin >> s;
	size_t pos = s.rfind(' ');
	cout << s.size() - (pos + 1) << endl;
	return 0;
}
