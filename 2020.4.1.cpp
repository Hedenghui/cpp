//#include<iostream>
//
////1.��ͨ�������ռ�
//namespace N1
//{
//	//���Զ��������Ҳ���Զ��庯��
//	int a;
//	int add(int left, int right)
//	{
//		return left + right;
//	}
//}
////2.�����ռ����Ƕ��
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
////3.ͬһ������������ڶ����ͬ���Ƶ������ռ�,����������ϳ�ͬһ�������ռ�
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