#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<assert.h>
#include<string.h>
using namespace std;
//typedef int DataType;
//class SeqList
//{
//public:
//	SeqList(int capacity = 10)
//	{
//		_pData = (DataType*)malloc(capacity*sizeof(DataType));
//		assert(_pData);
//		_size = 0;
//		_capacity = capacity;
//	}
//	~SeqList()
//	{
//		if (_pData)
//		{
//			free(_pData);
//			_pData = NULL;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	int* _pData;
//	size_t _size;
//	size_t _capacity;
//};
//class String
//{
//public:
//	String(const char* str = "jack")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//class Person
//{
//private:
//	String _name;
//	int _age;
//};
//int main()
//{
//	Person p;
//	return 0;
//}
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	void print()
//	{
//		cout <<_year<<_month<<_day<< endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	Date d2(d1);
//	Date d3 = d1;
//	d1.print();
//	d2.print();
//	d3.print();
//	return 0;
//}
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1;
//	//这里d2调用的默认拷贝构造完成拷贝，d2和d1的值也是一样的
//	Date d2(d1);
//	d1.print();
//	d2.print();
//	return 0;
//}
// 这里会发现下面的程序会崩溃掉？这里就需要我们以后讲的深拷贝去解决。
class String
{
public:
	String(const char* str = "jack")
	{
		_str = (char*)malloc(strlen(str) + 1);
		strcpy(_str, str);
	}
	~String()
	{
		cout << "~String()" << endl;
		free(_str);
	}
	String(const String& d)
	{
		_str = (char*)malloc(strlen(d._str) + 1);
		strcpy(_str, d._str);
	}
	void print()
	{
		cout << _str << endl;
	}
private:
	char* _str;
};
int main()
{
	String s1("hello");
	String s2(s1);
	s1.print();
	s2.print();
	return 0;
}