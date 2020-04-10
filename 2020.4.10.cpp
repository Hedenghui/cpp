#include<iostream>
using namespace std;
//class person
//{
//public:
//	void PrintPerson();
//private:
//	char _name[20];//20
//	char _gender[3];//3(4)
//	int _age;//4
//};
//int main()
//{
//	cout << sizeof(person) << endl;
//	return 0;
//}
class A
{
public:
	void PrintA()
	{
		cout <<this->_a << endl;
	}
	void Show()
	{
		cout << "show()" << endl;
	}
private:
	int _a;
};
int main()
{
	A* p = NULL;//p->PrintA(p)
	//p->PrintA();
	//p->Show();
	//成员函数存在公共的代码段，所以p->show()这里不会去p指向的对象上找
	//访问成员函数，才回去找
	A a;
	a.PrintA();//p->PrintA(&a);
	return 0;
}
