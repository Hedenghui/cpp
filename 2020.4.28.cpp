#include<iostream>
using namespace std;
//template<class T>
//
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.0, d2 = 20.0;
//	// 隐式实例化 （T的类型是编译器自己推导的）
//	Add(a1, a2);
//	Add(d1, d2);
//
//	Add(a1, (int)d1);
//
//	// 显式实例化。（指定T的类型）
//	Add<int>(a1, d1);
//
//
//	return 0;
//}

// 专门处理int的加法函数
//int Add(int left, int right)
//{
//	return left + right;
//}

// 通用加法函数
//template<class T>
//T Add(T left, T right)
//{
//	return left + right;
//}

//void main()
//{
//	Add(1, 2);       // 与非模板函数匹配，编译器不需要特化
//	Add<int>(1, 2);  // 调用编译器特化的Add版本
//}

#include <string>
//
//int main()
//{
//	string s1;
//	string s2("hello");
//	string s3(s2);
//	string s4(10, 'a');
//
//	string s5 = "hello";
//	string s6 = s2;
//
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//	cout << s5 << endl;
//	cout << s6 << endl;
//
//	s1 = s2;
//	cout << s1 << endl;
//
//	return 0;
//}

int main()
{
	//string s("12345");
	//s.push_back('6');
	//s.append("78");
	//s += '1';
	//s += "1111";
	//cout << s << endl;

	/*string s;
	s += "xu";
	s += '.';
	s += "靖杭";
	cout << s << endl;*/

	// 实现字符串转成整形
	/*string s("12345");
	int val = 0;
	for (size_t i = 0; i < s.size(); ++i)
	{
		val *= 10;
		val += (s[i] - '0');
	}
	cout << val << endl;*/

	return 0;
}