#include<iostream>
using namespace std;
//int main()
//{
//	//权限缩小和放大规则：适用于引用和指针
//	//权限放大不行
//	const int a = 10;
//   // int& b = a;
//	//权限缩小可以
//	int c = 20;
//	const int& d = c;
//
//	const int*cp1 = &a;
//	//int*p1 = cp1;//不能，属于权限的放大
//
//	int* p2 = &c;
//	const int*cp2 = p2;//可以，属于权限的缩小
//
//	//下面不属于放大缩小类型
//	const int x = 10;
//	int y = x;
//	
//	int z = 20;
//	const int r = z;
//	return 0;
//}


//引用做参数
//void swap_cpp(int& r1, int& r2)
//{
//	int tmp = r1;
//	r1 = r2;
//	r2 = tmp;
//}
//int main()
//{
//	int a = 0, b = 1;
//	swap_cpp(a, b);
//	//system("pause");
//	return 0;
//}


//引用做返回值
//int count1()
//{
//	static int n = 0;
//	n++;
//	return n;
//	//相当于返回的是n的拷贝
//}
//int& count2()
//{
//	static int n = 0;
//	n++;
//	return n;
//	//int& tmp=n;
//}
//int main()
//{
//	const int& ri = count1();
//	int& r2 = count2();
//	return 0;
//}
//
int& add2(int a, int b)
{
	static int c = a + b;
	return c;
}
int main()
{
	int& ret = add2(1, 2);
	add2(3, 4);
	cout << "add(1,2) is :" << ret << endl;
	system("pause");
	return 0;
}
//int add2(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	const int& ret = add2(1, 2);
//	add2(3, 4);
//	cout << "add(1,2) is :" << ret << endl;
//	system("pause");
//	return 0;
//}