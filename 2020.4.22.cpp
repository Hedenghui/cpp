#include<iostream>
using namespace std;

//int main()
//{
//	static int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int year, month, day;
//	while (cin >> year >> month >> day)
//	{
//		//ctrl+c����
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

//new �� delete 
//int main()
//{
//	//c ����
//	int* p1 = (int*)malloc(sizeof(int));
//	int* p3 = (int*)malloc(sizeof(int)* 10);
//
//	free(p1);
//	free(p3);
//	//c++ ������
//	int* p2 = new int;
//	int* p5 = new int(10);//��ʼ��Ϊ10
//	int* p4 = new int[10];//����10��int��40�ֽڿռ�
//	delete p2;
//	delete[] p4;
//
//
//	return 0;
//}

//new �� delete���ڵ�����

//int main()
//{
//	return 0;
//}