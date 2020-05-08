#include<iostream>
using namespace std;
#include<string>
//void test_string1()
//{
//	string s1("string.cpp");
//	string s2("string.c");
//	string s3("string.txt");
//
//	size_t pos1=s1.find('.');
//	if (pos1 != string::npos)
//	{
//		cout << s1.substr(pos1) << endl;
//	}
//}
void test_string2()
{
	string s1("string.cpp.zip");
	string s2("string.c");
	string s3("string.txt");

	size_t pos1 = s1.rfind('.');
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
	//协议  域名   资源名称
	string url("http://www.baidu.com/666");
	//分离出url
	size_t i1 = url.find(':');
	if (i1 != string::npos)
	{
		cout << url.substr(0, i1) << endl;
	}
	size_t i2 = url.find('/', i1 + 3);
	if (i2 != string::npos)
	{
		cout << url.substr(i1 + 3, i2-i1-3) << endl;
	}
	cout << url.substr(i2 + 1) << endl;
}
int main()
{
	//test_string1();
	test_string2();
	return 0;
}