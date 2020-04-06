#include<iostream>

using namespace std;

//int main()
//{
//	//int a = 10;
//	////int& ra = a;
//	////int& ra = 10;
//	//const int& rra = 10;
//	//printf("%p\n", &a);
//	////printf("%p\n", &ra);
//	//printf("%p\n", &rra);
//
//	return 0;
//}

//void swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//int main()
//{
//	int a = 1, b = 2;
//	swap(a, b);
//	cout << a << endl;
//	cout << b << endl;
//	return 0;
//}

//正常的代码
//int add1(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	const int& ret = add1(1, 2);
//	add1(3, 4);
//	cout << "add(1,2) is:" << ret << endl;
//	return 0;
//}

//int& add1(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int& ret = add1(1, 2);
//	//add1(3, 4);
//	printf("hello world");
//	cout << "add(1,2) is:" << ret << endl;
//	return 0;
//}

//#include<time.h>
//struct A
//{
//	int a[1000];
//};
//
//void testfunc1(A a)
//{
//
//}
//void testfunc1(A& a)
//{
//
//}
//void test()
//{
//	A a;
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 1000; i++)
//	{
//		testfunc1(a);
//	}
//	size_t end1 = clock();
//}
//#include <time.h>
//struct A{ int a[10000]; };
//void TestFunc1(A a){}
//void TestFunc2(A& a){}
//void TestRefAndValue()
//{
//	A a;
//	// 以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//	// 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//int main()
//{
//	TestRefAndValue();
//	return 0;
//}
//int test()
//{
//	return 10;
//}
//int main()
//{
//	int a = 10;
//	auto b = a;
//	auto c = 'a';
//	auto d = test();
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	//auto e;无法通过编译，使用auto定义变量时必须对其进行初始化
//	return 0;
//}
//int main()
//{
//	int x = 10;
//	auto a = &x;
//	auto* b = &x;
//	auto& c = x;
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	return 0;
//}
//void test()
//{
//	auto a = 1, b = 2;
//	auto c = 3, d = 4.0;//会失效，因为c和d的值类型不同
//}
//void TestAuto()
//{
//	int a[] = { 1, 2, 3 };
//	auto b[] = { 4，5，6 };
//}
void test()
{
	int array[] = { 1, 2, 3, 4, 5, 6 };
	for (auto& e : array)
	{
		e *= 2;
	}
	for (auto e : array)
	{
		cout << e << " ";
	}
}
int main()
{
	test();
	return 0;
}