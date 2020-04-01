//#include<iostream>
//
////1.普通的命名空间
//namespace N1
//{
//	//可以定义变量，也可以定义函数
//	int a;
//	int add(int left, int right)
//	{
//		return left + right;
//	}
//}
////2.命名空间可以嵌套
//namespace N2
//{
//	int a;
//	int b;
//	int add(int left, int right)
//	{
//		return left + right;
//	}
//	namespace N3
//	{
//		int c;
//		int d;
//		int sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}
////3.同一个工程允许存在多个相同名称的命名空间,编译器最后会合成同一个命名空间
//namespace N1
//{
//	int mul(int left, int right)
//	{
//		return left*right;
//	}
//}
//namespace N
//{
//	int a = 10;
//	int b = 20;
//}
//
//using N::b;
//int main()
//{
//	printf("%d\n", b);
//	return 0;
//}
//using namespace N;
//int main()
//{
//	printf("%d", a);
//	printf("%d", b);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout << "hello world" << endl;
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	int a;
	double b;
	char c;
	cin >> a;
	cin >> b >> c;
	cout << a << endl;
	cout << b << " " << c << endl;
	system("pause");
	return 0;
}