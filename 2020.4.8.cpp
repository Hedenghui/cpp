#include<iostream>
using namespace std;
//class className
//{
//	//�г�Ա�����ͳ�Ա�������
//};//ע��ֺ�
//class Person
//{
//public:
//	//��ʾ������Ϣ
//	void showlnfo()
//	{
//		cout << _name << "-" << _sex << "-" << _age;
//	}
//private:
//	char* _name;
//	char* _sex;
//	int _age;
//};
//class person
//{
//public:
//	void PrintPerson();
//private:
//	char _name[20];
//	char _gender[3];
//	int _age;
//};
//
//// ������Ҫָ��PrintPerson������Person�������
//void person::PrintPerson()
//{
//	cout << _name << " " << _gender << " " << _age << endl;
//}
class A
{
public:
	void PrintA()
	{
		cout << _a << endl;
	}
private:
	char _a;
};
// ���м��г�Ա���������г�Ա����
class A1 
{
public:
	void f1(){}
private:
	int _a;
};
// ���н��г�Ա����
class A2 
{
public:
	void f2() {}
};
// ����ʲô��û��---����
class A3
{};
int main()
{
	cout << sizeof(A1) << endl;
	cout << sizeof(A2) << endl;
	cout << sizeof(A3) << endl;
	return 0;
}