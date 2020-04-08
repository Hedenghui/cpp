#include<iostream>
using namespace std;
//class className
//{
//	//有成员函数和成员变量组成
//};//注意分号
//class Person
//{
//public:
//	//显示基本信息
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
//// 这里需要指定PrintPerson是属于Person这个类域
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
// 类中既有成员变量，又有成员函数
class A1 
{
public:
	void f1(){}
private:
	int _a;
};
// 类中仅有成员函数
class A2 
{
public:
	void f2() {}
};
// 类中什么都没有---空类
class A3
{};
int main()
{
	cout << sizeof(A1) << endl;
	cout << sizeof(A2) << endl;
	cout << sizeof(A3) << endl;
	return 0;
}