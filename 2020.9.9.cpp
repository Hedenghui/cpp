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
//// ���н��г�Ա����
//class A2 {
//public:
//	void f2() {}
//};
//// ����ʲô��û��---����
//class A3
//{};
//
//struct student
//{
//	char a;  //ͬ�ϣ���СΪ1 //8>=8����ʼƫ�Ʊ���Ϊ8�ı�����1+7+8=16
//	int b; 
//	double c;//��ǰ��ƫ����Ϊ16��Ϊ4�ı���������ֱ�Ӽ��ں��棺1+7+8+4=20�������������8�ı��������Ժ��油�룬20+4=24
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
//	// 1.�޲ι��캯��
//	Date()
//	{}
//	// 2.���ι��캯��
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
//	Date d1; // �����޲ι��캯��
//	Date d2(2015, 1, 1); // ���ô��εĹ��캯��
//	// ע�⣺���ͨ���޲ι��캯����������ʱ��������治�ø����ţ�����ͳ��˺�������
//	// ���´���ĺ�����������d3�������ú����޲Σ�����һ���������͵Ķ���
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
//	// 2.���ι��캯��
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
//	Date d1(1,5); // �����޲ι��캯��
//	d1.print();
//	Date d2(2015, 1, 1); // ���ô��εĹ��캯��
//	// ע�⣺���ͨ���޲ι��캯����������ʱ��������治�ø����ţ�����ͳ��˺�������
//	// ���´���ĺ�����������d3�������ú����޲Σ�����һ���������͵Ķ���
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
//			free(_pData); // �ͷŶ��ϵĿռ�
//			cout << "~SeqList" << this << endl;
//			_pData = NULL; // ��ָ����Ϊ��
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
	// 2.���ι��캯��
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