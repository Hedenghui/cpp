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
	//��Ա�������ڹ����Ĵ���Σ�����p->show()���ﲻ��ȥpָ��Ķ�������
	//���ʳ�Ա�������Ż�ȥ��
	A a;
	a.PrintA();//p->PrintA(&a);
	return 0;
}
