#include<iostream>
using namespace std;

//class A1 {
//public:
//	void f1(){}
//private:
//	int _a;
//	long long int _b;
//	char _c;
//	char* d;
//};
//// 类中仅有成员函数
//class A2 {
//public:
//	void f2() {}
//};
//// 类中什么都没有---空类
//class A3
//{};
//
//struct student
//{
//	char a;  //同上，大小为1 //8>=8，起始偏移必须为8的倍数，1+7+8=16
//	int b; 
//	double c;//当前的偏移量为16，为4的倍数，所以直接加在后面：1+7+8+4=20，但总体必须是8的倍数，所以后面补齐，20+4=24
//};
//
//int main()
//{
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//	cout << sizeof(student) << endl;
//	return 0;
//}


//class Date
//{
//public:
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	/*void Init(int year,int month,int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//	void print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2020,9, 9);
//	/*d1.Init(2020, 9, 9);*/
//	d1.print();
//	return 0;
//}




//class Date
//{
//public:
//	// 1.无参构造函数
//	Date()
//	{}
//	// 2.带参构造函数
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void print(Date &)
//			{
//				cout << _year << "-" << _month << "-" << _day << endl;
//			}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void TestDate()
//{
//	Date d1; // 调用无参构造函数
//	Date d2(2015, 1, 1); // 调用带参的构造函数
//	// 注意：如果通过无参构造函数创建对象时，对象后面不用跟括号，否则就成了函数声明
//	// 以下代码的函数：声明了d3函数，该函数无参，返回一个日期类型的对象
//	Date d3();
//   //d3.print()
//}
//int main()
//{
//	TestDate();
//	return 0;
//}


//class Date
//{
//public:
//	// 2.带参构造函数
//	Date(int year,int month=3,int day=1 )
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void print()
//			{
//				cout << _year << "-" << _month << "-" << _day << endl;
//			}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void TestDate()
//{
//	Date d1(1,5); // 调用无参构造函数
//	d1.print();
//	Date d2(2015, 1, 1); // 调用带参的构造函数
//	// 注意：如果通过无参构造函数创建对象时，对象后面不用跟括号，否则就成了函数声明
//	// 以下代码的函数：声明了d3函数，该函数无参，返回一个日期类型的对象
//	Date d3();
//   //d3.print()
//}
//int main()
//{
//	TestDate();
//	return 0;
//}



//typedef int DataType;
//class SeqList
//{
//public:
//	SeqList(int capacity = 10)
//	{
//		_pData = (DataType*)malloc(capacity * sizeof(DataType));
//		cout << "SeqList()" << this << _pData << endl;
//		//assert(_pData);
//		_size = 0;
//		_capacity = capacity;
//	}
//	~SeqList()
//	{
//		if (_pData)
//		{
//			free(_pData); // 释放堆上的空间
//			cout << "~SeqList" << this << endl;
//			_pData = NULL; // 将指针置为空
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	int* _pData;
//	size_t _size;
//	size_t _capacity;
//};
//int main()
//{
//	SeqList s1;
//	SeqList s2;
//
//	return 0;
//}



class Date
{
public:
	// 2.带参构造函数
	Date(int year=0, int month=1, int day=1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void print(Date &)
			{
				cout << _year << "-" << _month << "-" << _day << endl;
			}
	bool operator>(const Date& d)
	{
		return this->_year > d._year || (this->_year == d._year&&this->_month > d._month) || (this->_year == d._year&&this->_month == d._month&&this->_day > d._day);
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date d1(2020, 9, 9);
	Date d2(2020, 9, 10);
	cout << (d1 > d2) << endl;
	return 0;
}