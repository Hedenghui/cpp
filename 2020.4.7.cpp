//#include<iostream>
//using namespace std;
//
////封装
////1.将数据和方法放到定义一起
////2.把想给你看到的数据给你看，不想给你看的封装起来->访问限定符
//class Stack
//{
//public:
//	//1.成员函数
//	void Push(int x)//类里面定义
//	{
//		//。。
//	}
//	void Pop();
//	bool Empty();
//	//...
//private:
//	//2.成员变量
//	int* _a;
//	int _size;
//	int _capacity;
//};
////c++中，兼容C的struct定义结构体的用法
////但是同时struct也可以用来定义类
////c++中使用class和struct定义类的区别--》默认的访问限定符
////class->默认私有  struct->公有
//struct ListNode_cpp
//{
//	int _val;
//	ListNode_cpp* _next;
//	ListNode_cpp* _prev;
//
//};
////类里面声明，类外面定义
//void Stack::Pop()
//{
//	//。。。
//}
//int main()
//{
//	//类实例化出对象
//	Stack s1;
//	Stack s3;
//	Stack s2;
//	//s1._a = nullptr;私有
//	s1.Push(1);
//	//对象中只存储成员变量，不存储成员函数，为什么？
//	cout << sizeof(s1) << endl;
//	//一个类实例化出N个对象，每个对象的成员变量都可以存储不同的值，而函数是一样的
//	//如果每个对象都放成员函数，而这些成员函数都是一样的，浪费空间
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