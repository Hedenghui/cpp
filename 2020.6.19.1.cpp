#include<iostream>
using namespace std;
//class Person
//{
//public:
//	virtual ~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//};
//
//class Student :public Person
//{
//public:
//	virtual ~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//};
//
//int main()
//{
//	 Person* p1 = new Person;
//     Person* p2 = new Student;
//
//	delete p1;
//	delete p2;
//
//	return 0;
//}

//
//class Car
//{
//public:
//	virtual void Drive() final
//	{
//
//	}
//};
//
//class Benz :public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "benz-���" << endl;
//	}
//};

//class Car
//{
//public:
//	virtual void Drive() 
//	{
//		
//	}
//};
//
//class Benz :public Car
//{
//public:
//	virtual void Drive() 
//	{
//	}
//};
//int main()
//{
//	Car* p1 = new Car;
//	Car* p2 = new Benz;
//
//	p1->Drive();
//	p2->Drive();
//	return 0;
//}

//class base
//{
//public:
//	virtual void foo()
//	{
//		cout << "base::foo()" << endl;
//	}
//
//	virtual void bar()
//	{
//		cout << "base::bar()" << endl;
//	}
//
//	void goo()
//	{
//		cout << "base::goo()" << endl;
//	}
//};
//
//class derived : public base
//{
//public:
//	void foo() override          // ok
//	{
//		cout << "derived::foo()" << endl;
//	}
//
//	void foo() const override    // error: derived::foo does not override. signature mismatch.
//	{
//		cout << "derived::foo()" << endl;
//	}
//
//	void goo() override          // error: base::goo is not virtual
//	{
//		cout << "derived::goo()" << endl;
//	}
//
//	void bao() override          // error: ��bar��д����bao���һ���������Ϊbao���麯����
//	{                            // ����ʹ����override��������������˴���
//		cout << "derived::bao()" << endl;
//	}
//};



//class Car
//{
//public:
//	virtual void Drive() = 0;//���麯��
//};
//class Benz :public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "Benz-����" << endl;
//	}
//};
//class BMW :public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "BMW-�ٿ�" << endl;
//	}
//};
//void Test()
//{
//	Car* pBenz = new Benz;
//	pBenz->Drive();
//	Car* pBMW = new BMW;
//	pBMW->Drive();
//}
//int main()
//{
//	Test();
//	return 0;
//}

// ���ﳣ��һ�������⣺sizeof(Base)�Ƕ��٣�
//class Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Func1()" << endl;
//	}
//private:
//	int _b = 1;
//};
//
//int main()
//{
//	Base  b;
//	//cout << sizeof(Base) << endl;
//	return 0;
//}


class Base
{
public:
	virtual void Func1()
	{
		cout << "Base::Func1()" << endl;
	}
virtual void Func2()
{
	cout << "Base::Func2()" << endl;
}
void Func3()
{
	cout << "Base::Func3()" << endl;
}
private:
	int _b = 1;
};
class Derive : public Base
{
public:
	virtual void Func1()
	{
		cout << "Derive::Func1()" << endl;
	}
private:
	int _d = 2;
};
int main()
{
	Base b;
	Derive d;
	return 0;
}