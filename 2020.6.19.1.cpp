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
//		cout << "benz-舒服" << endl;
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
//	void bao() override          // error: 将bar误写成了bao，且基类中无名为bao的虚函数，
//	{                            // 由于使用了override，编译器会检测出此错误
//		cout << "derived::bao()" << endl;
//	}
//};



//class Car
//{
//public:
//	virtual void Drive() = 0;//纯虚函数
//};
//class Benz :public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "Benz-舒适" << endl;
//	}
//};
//class BMW :public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "BMW-操控" << endl;
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

// 这里常考一道笔试题：sizeof(Base)是多少？
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