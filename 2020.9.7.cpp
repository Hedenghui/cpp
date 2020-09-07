#include<iostream>
//namespace n
//{
//	int a = 10;
//	int b = 20;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	int Sub(int left, int right)
//	{
//		return left - right;
//	}
//}
//using  n::a;
//using namespace n;
//int main()
//{
//	printf("%d\n", a); // 该语句编译出错，无法识别a
//	return 0;
//}
using namespace std;
//void TestFunc(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}
//
//int main()
//{
//	TestFunc(1,2, 3);
//	return 0;
//}

//int main()
//{
//	//这块就是引用和指针才有权限问题，赋值是没有的
//	const int a = 10;
//	//inb& b = a;
//	int b = 20;
//	const int&c = b;
//
//	double d = 12.34;
//	const int& rd = d;
//	return 0;
//}

int& add2(int a, int b)
{
	static int c = a+b;
	//c = a + b;
	return c;
}
int main(){
	int& ret = add2(1, 2);
	add2(3, 4);
	cout << ret << endl;
	return 0;
}