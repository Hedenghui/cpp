#include<iostream>
#include<string>
using namespace std;
void test_string7()
{
	string s1("hello");
	s1 += ' ';
	s1 += "world";
	cout << s1 << endl;
	const string s2("hedenghui");
	//遍历
	for (size_t i = 0; i < s1.size(); i++)
	{
		cout << s1[i] << " ";
	}
	cout << endl;
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	string::reverse_iterator it1 = s1.rbegin();
	while (it1 != s1.rend())
	{
		cout << *it1 << " ";
		it1++;
	}
	cout << endl;
	string::const_iterator it2 =  s2.begin();
	while (it2 != s2.end())
	{
		cout << *it2 << " ";
		it2++;
	}
	cout << endl;
	for (auto e : s1)
	{
		cout << e << " ";
	}
	cout << endl;
	//获取字符数组的首地址，用c字符串的形式遍历
	const char* str = s1.c_str();
	while (*str)
	{
		cout << *str << " ";
		++str;
	}
	cout << endl;

	s1 += '\0';
	s1 += "world";
	cout << s1 << endl;//调用的string重载operator<<  将对象的所有字符输出
	cout << s1.c_str() << endl;//直接输出const char*  遇到\0就结束
}
void test_string8()
{
	string s1("string.cpp");
	string s2("string.c");
	string s3("string.txt");

	size_t pos1 = s1.find('.');
	if (pos1 != string::npos)
	{
		cout << s1.substr(pos1) << endl;
	}
	size_t pos2 = s2.find('.');
	if (pos2 != string::npos)
	{
		cout << s2.substr(pos2) << endl;
	}
	size_t pos3 = s3.find('.');
	if (pos3 != string::npos)
	{
		cout << s3.substr(pos3) << endl;
	}

	//协议 域名 资源名称
	string ur1("http://www.cplusplus.com/reference/string/string/substr/");
	size_t i1 = ur1.find(':');
	if (i1 != string::npos)
	{
		cout << ur1.substr(0, i1) << endl;
	}
	size_t i2 = ur1.find('/', i1 + 3);
	if (i2 != string::npos)
	{
		cout << ur1.substr(i1 + 3, i2 - i1 - 3)<<endl;
	}

	cout << ur1.substr(i2 + 1) << endl;
}
void test_string9()
{
	string s1("hello");
	string ret1 =s1+ "world";
	string ret2 = s1 += "world";//si会变
	cout << ret1 << endl;
	cout << ret2 << endl;
}
int main()
{
	//test_string7();
	//test_string8();
	test_string9();
	return 0;
}


















