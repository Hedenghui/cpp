//#include<iostream>
//using namespace std;
//函数模板
//template<class T>
//void Swap(T& a, T& b)
//{}
////类模板
//template<class T>
//class stack
//{
//private:
//	T* _a;
//	size_t _size;
//	size_t _capacity;
//};

//class Date
//{
//public:
//	Date(int year, int month, int day)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//	ostream& operator<<(ostream& _cout)
//	{
//		_cout << _year << "-" <<_month << "-" << _day;
//		return _cout;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d(2017, 12, 24);
//	d << cout;
//	return 0;
//}

//int main()
//{
//	int x1, x2;
//	Swap(x1, x2);
//	stack<int> st1;
//	stack<double> st2;
//	return 0;
//}


#include<iostream>
using namespace std;
#include<string>


//1.四个默认成员函数
void test_string1()
{
	string s1;
	string s2("hello");
	string s3("hello", 2);//拷贝前两个初始化
	string s4(s2);
	string s5(s2, 1, 8);//有多少给多少
}
//1.遍历
void test_string2()
{
	string s1("hello");
	string s2("hedenghui");
	s1 += ' ';
	s1 += "world";
	//s1 += s2;
	cout << s1 << endl;

	//[]+下标
	//写
	for (size_t i = 0; i < s1.size(); i++)
	{
		s1[i] += 1;
	}
	//读
	for (size_t i = 0; i < s1.size(); i++)
	{
		cout << s1[i] << " ";
	}
	cout << endl;


	//迭代器
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		*it -= 1;
		++it;
	}
	it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	//范围for
	//c++11
	for (auto ch : s1)
	{
		cout << ch << " ";
	}
	cout << endl;
	
}

int string2int(const string& str)
{
	int  val = 0;
	string::const_iterator it = str.begin();//参数是const
	while (it != str.end())
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
	/*string::reverse_iterator rit = s1.rbegin();*/
	auto rit = s1.rbegin();
	while (rit != s1.rend())
	{
		cout << *rit << " ";
		rit++;
	}
	cout << endl;
	string nums("12345");
	cout << string2int(nums) << endl;
}
//迭代器
//正向  反向（reverse_iterator)
//普通  const(const_iterator)


void test_string4()
{
	string s1("hello world");//11
	string s2("hello");//5
	cout << s1.size() << endl;
	cout << s2.size() << endl;//不带/0
	cout << s1.length() << endl;//一样的，尽量使用size
	cout << s2.length() << endl;
	cout << s1.capacity() << endl;
	s1 += "hedenghui";
	cout << s1.capacity() << endl;

	s1.clear();
	cout << s1 << endl;
	cout << s1.capacity() << endl;//还是和清理前一样大，说明只是把size=0，开辟的空间没变
}


void TestPushBack()
{
	//string s;
	//s.reserve(100);//111内存对齐
	//s.resize(100);//size=100
	/*size_t sz = s.capacity();
	cout << "making s grow:\n";
	for (int i = 0; i < 100; ++i)
	{
		s.push_back('c');
		if (sz != s.capacity())
		{
			sz = s.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}*/
	string s("hello world");
	s.resize(5);
	s.resize(20, 'x');
}
void test_string6()
{
	string s;
	s.push_back('x');
	s.append("1111111");

	s += 'x';
	s += "hedenghui";
	cout << s << endl;
	s.insert(s.begin(), '0');
	s.insert(2, "fff");
	cout << s << endl;
	s.erase(2, 3);
	cout << s << endl;
}
//int main()
//{
//	/*test_string1();
//	test_string2();
//	test_string3();*/
//	//test_string4();
//	//TestPushBack();
//	test_string6();
//	return 0;
//}


//class Solution{
//public:
//	bool IsChar(char ch)
//	{
//		if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z'))
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string reverseOnlyLetters(string s)
//	{
//		int begin = 0;
//		int end = s.size() - 1;
//		while (begin < end)
//		{
//			if (IsChar(s[begin]) && IsChar(s[end]))
//			{
//				swap(s[begin], s[end]);
//				begin++;
//				end--;
//			}
//			else if (IsChar(s[begin]))
//			{
//				end--;
//			}
//			else
//			{
//				begin++;
//			}
//		}
//	}
//};



class Solution {
public:
	int firstUniqChar(string s)
	{
		int count[26] = { 0 };
		for (auto ch : s)
		{
			int a = ch - 'a';
			count[a]++;
		}
		//aaacbbbb
		for (size_t i = 0;i<s.size();i++)
		{
			if (count[s[i]-'a'] == 1)
			{
				return i;
			}
		}
		return -1;

	}
};