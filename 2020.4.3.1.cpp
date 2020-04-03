#include<iostream>
using namespace std;
//void testfunc(int a=0)
//{
//	cout << a << endl;
//}
//int main()
//{
//	testfunc();
//	testfunc(10);
//	system("pause");
//	return 0;
//}
void TestFunc(int a = 10, int b = 20, int c = 30) 
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
//int main()
//{
//	TestFunc();
//	TestFunc(2,10);
//	TestFunc( 5, 3);
//	system("pause");
//	return 0;
//}
void testfunc(int a, int b = 10, int c = 20)
{
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}
int main()
{
	testfunc(10);
	system("pause");
	return 0;
}