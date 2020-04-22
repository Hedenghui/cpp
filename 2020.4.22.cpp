#include<iostream>
using namespace std;

//int main()
//{
//	static int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int year, month, day;
//	while (cin >> year >> month >> day)
//	{
//		//ctrl+c结束
//		int n = 0;
//		for (int i = 1; i < month; i++)
//		{
//			n += monthDays[i];
//		}
//		n += day;
//		if (month>2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
//		{
//			n += 1;
//		}
//		cout << n << endl;
//	}
//	return 0;
//}



class A
{
public:
	A()
	{
		cout << "A()" << endl;
	}
	~A()
	{
		cout << "~A()" << endl;
	}
};
class B
{
public:
	B()
	{
		cout << "B()" << endl;
	}
	~B()
	{
		cout << "~B()" << endl;
	}
};
class C
{
public:
	C()
	{
		cout << "C()" << endl;
	}
	~C()
	{
		cout << "~C()" << endl;
	}
};
class D
{
public:
	D()
	{
		cout << "D()" << endl;
	}
	~D()
	{
		cout << "~D()" << endl;
	}
};
	C c;
	//static D d;
	int main()
	{
		A  a;
		B  b;
		static D d;
		return 0;
	}

//new 和 delete 
//int main()
//{
//	//c 函数
//	int* p1 = (int*)malloc(sizeof(int));
//	int* p3 = (int*)malloc(sizeof(int)* 10);
//
//	free(p1);
//	free(p3);
//	//c++ 操作符
//	int* p2 = new int;
//	int* p5 = new int(10);//初始化为10
//	int* p4 = new int[10];//申请10个int的40字节空间
//	delete p2;
//	delete[] p4;
//
//
//	return 0;
//}

//new 和 delete存在的意义

//int main()
//{
//	return 0;
//}