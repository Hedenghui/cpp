//#include<iostream>
//using namespace std;
//
////��װ
////1.�����ݺͷ����ŵ�����һ��
////2.������㿴�������ݸ��㿴��������㿴�ķ�װ����->�����޶���
//class Stack
//{
//public:
//	//1.��Ա����
//	void Push(int x)//�����涨��
//	{
//		//����
//	}
//	void Pop();
//	bool Empty();
//	//...
//private:
//	//2.��Ա����
//	int* _a;
//	int _size;
//	int _capacity;
//};
////c++�У�����C��struct����ṹ����÷�
////����ͬʱstructҲ��������������
////c++��ʹ��class��struct�����������--��Ĭ�ϵķ����޶���
////class->Ĭ��˽��  struct->����
//struct ListNode_cpp
//{
//	int _val;
//	ListNode_cpp* _next;
//	ListNode_cpp* _prev;
//
//};
////�����������������涨��
//void Stack::Pop()
//{
//	//������
//}
//int main()
//{
//	//��ʵ����������
//	Stack s1;
//	Stack s3;
//	Stack s2;
//	//s1._a = nullptr;˽��
//	s1.Push(1);
//	//������ֻ�洢��Ա���������洢��Ա������Ϊʲô��
//	cout << sizeof(s1) << endl;
//	//һ����ʵ������N������ÿ������ĳ�Ա���������Դ洢��ͬ��ֵ����������һ����
//	//���ÿ�����󶼷ų�Ա����������Щ��Ա��������һ���ģ��˷ѿռ�
//	return 0;
//}

#include<iostream>
using namespace std;

//class Data
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_day = day;
//		_month = month;
//	}
//	void Print()
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
//	Data d1;
//	d1.Init(2020, 4, 7);
//	d1.Print();
//	return 0;
//}

class A
{
public:
	void printA()
	{
		cout << _a << endl;
	}
	void func()
	{
		cout << "func()" << endl;
	}
private:
	int _a;
};
int main()
{
	A ra;
	ra.printA();
	//A*p = NULL;
	//p->printA();
	return 0;
}