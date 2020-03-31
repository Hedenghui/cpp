//#include<iostream>
//using namespace std;//c++库中所有东西都在std命名空间中
//
//int main()
//{
//	std::cout << "hello world\n"<<std::endl;
//	int i = 0;
//	double d = 1.11;
//	std::cout << i << " " << d << std::endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
////在日常练习中，不在乎跟库命名冲突
//using namespace std;//c++库中所有东西都在std命名空间中
////int cout = 10;跟库里面冲突
//int main()
//{
//	cout << "hello world\n" << endl;
//	int i = 0;
//	double d = 1.11;
//	cout << i << " " << d << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using std::cout;
//using std::endl;
////int cout = 10;跟库里面冲突
//int main()
//{
//	cout << "hello world\n" << endl;
//	int i = 0;
//	double d = 1.11;
//	cout << i << " " << d << endl;
//	system("pause");
//	return 0;
//}

#include<iostream>
using namespace std;
//缺省参数-》备胎
void Func(int a=0)
{
	//endl相当于\n
	cout << a<<endl;
}
//全缺省 +半缺省
void Func1(int a = 10,int b = 20,int c = 30)
{
	cout << "a=" << a<<endl;
	cout << "b=" << b<<endl;
	cout << "c=" << c<<endl;
}
//半缺省 必须从右往左连续缺省
void Func2(int a , int b , int c = 30)
{
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}
//int main()
//{
//	//调用时，如果要传参必须从左往右传参
//	/*Func(10);
//	Func();*/
//	Func1();
//	Func1(2);
//	Func2(10,20);
//	system("pause");
//	return 0;
//}

//函数重载  函数名相同 类型不同()
//只是返回值不同，不能构成重载
void Func3()
{}
//int Func3()
//{}
//重载：面试问题：
//1.什么函数重载
//2.C++是如何支持函数重载的？为什么C语言不支持
//int main()
//{
//	int a = 1;
//	int& ra = a;//定义引用类型(相当于a再取了一个名称ra)
//}
//int main()
//{
//	int a = 1;
//	int& c = a;//引用必须在定义时初始化
//	int d = 2;
//	c = d;//这里是d赋值给c
//}
int main()
{
	//const int a = 0;
	//int& b = a;//a的类型是可读不可修改，b的类型是int，可读可修改

	const int a = 1;
	const int& b = a;

	int c = 1;
	int& d = c;
	const int& e = c;//可以的，c是可读可写，d是可读
	//总结：引用取别名时，变量访问的权限可以缩小，不能放大


	int i = 0;
	double bd = i;//隐士类型转换
	const double& rd = i;//零时变量具有常性
	const float& rf = i;
	//赋值之间没有权限缩小和放大的关系
	const double g = i;
	system("pause");
	return 0;
}
