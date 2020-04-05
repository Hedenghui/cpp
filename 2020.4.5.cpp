#include<iostream>
using namespace std;
//int add(int left, int right)
//{
//	return left + right;
//}
//double add(double left, double right)
//{
//	return left + right;
//}
//long add(long left, long right)
//{
//	return left + right;
//}
//short add(short left, short right) {
//	return left + right;
//}
//int main()
//{
//	add(10, 20);
//	add(10.0, 20.0);
//	add(10L, 20L);
//	cout << "hello worl" << endl;
//
//	return 0;
//}


//void TestFunc(int a = 10) {
//	cout << "void TestFunc(int)" << endl;
//}
//void TestFunc(int a) {
//	cout << "void TestFunc(int)" << endl;
//}
//int main()
//{
//	return 0;
//}

//void testref()
//{
//	int a = 10;
//	int b = 20;
//	int& ra = a;
//	int& ra = b;
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//
//	printf("%p\n", &ra);
//}
//int main()
//{
//	testref();
//	return 0;
//}
void test()
{
	const int a = 10;
	//int& ra = a;//编译不过
	const int& ra = a;
	//int& b = 10;编译不过
	const int& b = 10;
	double d = 12.34;
	//int& rd = d;编译不过
	const int& rd = d;
}
int main()
{
	return 0;
}