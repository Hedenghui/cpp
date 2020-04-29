#include<iostream>
#include<string>
using namespace std;

//1.4个默认成员函数
//void test_string()
//{
//	string s1;//ok
//	string s2("hello");//ok
//	string s3("hello", 2);
//	string s4(s2);//ok
//	string s5(s2, 1, 8);
//	string s6(s2, 1);
//	string s7(10, 'a');
//	s1 = s7;//ok
//	
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//	cout << s5 << endl; 
//	cout << s6 << endl;
//	cout << s7 << endl;
//
//}
//1.遍历
void test_string()
{
	string s1("hello");
	s1 += ' ';
	s1 += "world";
	cout << s1 << endl;
	//[]+下标
	//写
	//for (size_t i = 0; i < s1.size(); ++i)
	//{
	//	s1[i] += 1;
	//}
	////读
	//for (size_t i = 0; i < s1.size(); ++i)
	//{
	//	cout << s1[i] << " ";
	//}
	//cout << endl;

	//迭代器
	//写
	//string::iterator it = s1.begin();
	//while (it != s1.end())
	//{
	//	*it -= 1;
	//	++it;
	//}
	////读
	//it = s1.begin();
	//while (it != s1.end())
	//{
	//	cout << *it << " ";
	//	++it;
	//}
	//cout << endl;

	//范围for
	//c++11->原理被替换成迭代器
	//for (auto ch : s1)
	//{
	//	cout << ch << " ";
	//}
	//cout << endl;

	//auto替换
	//auto it = s1.begin();
	//while (it != s1.end())
	//{
	//	*it -= 1;
	//	++it;
	//}
	////读
	//it = s1.begin();
	//while (it != s1.end())
	//{
	//	cout << *it << " ";
	//	++it;
	//}
	//cout << endl;
}
int string2int(const string& str)
{
	int val = 0;
	/*string::const_iterator it = str.begin();
	while (it != str.end())
	{
		val *= 10;
		val += (*it-'0');
		++it;
	}
	return val;*/
	string::const_reverse_iterator it = str.rbegin();
	while (it != str.rend())
	{
		val *= 10;
		val += (*it - '0');
		++it;
	}
	return val;
}
//看看其他迭代器
void test_string3()
{
	string s1("hello world");
	//倒着遍历？
	string::reverse_iterator rit = s1.rbegin();
	while (rit != s1.rend())
	{
		cout << *rit << " ";
		rit++;
	}
	cout << endl;
	string nums("12345");
	cout << string2int(nums) << endl;

	//方向  正 和 反
	//属性：普通和const
}
void test_string4()
{
	string s1("hello world");
	string s2("hello");
	cout << s1.size() << endl;
	cout << s2.size() << endl;
	cout << s1.length() << endl;
	cout << s2.length() << endl;
	cout << s1.max_size()<<endl;
	cout << s2.max_size() << endl;
	cout << s1.capacity() << endl;
	cout << s2.capacity() << endl;
	s1 += "111111";
	cout << s1.capacity() << endl;
}
void test_string6()
{
	string s;
	s.push_back('x');
	s.append("111111");

	s += 'x';
	s += "xxxxx";
	cout << s << endl;
	s.insert(s.begin(), '0');
	cout << s << endl;
	s.insert(2,"2");
	cout << s << endl;
	s.erase(2, 3);
}
int main()
{
	//test_string();
	//test_string3();
	//test_string4();
	test_string6();
	return 0;
}