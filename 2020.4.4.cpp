#include<iostream>
using namespace std;
//int main()
//{
//	//Ȩ����С�ͷŴ�������������ú�ָ��
//	//Ȩ�޷Ŵ���
//	const int a = 10;
//   // int& b = a;
//	//Ȩ����С����
//	int c = 20;
//	const int& d = c;
//
//	const int*cp1 = &a;
//	//int*p1 = cp1;//���ܣ�����Ȩ�޵ķŴ�
//
//	int* p2 = &c;
//	const int*cp2 = p2;//���ԣ�����Ȩ�޵���С
//
//	//���治���ڷŴ���С����
//	const int x = 10;
//	int y = x;
//	
//	int z = 20;
//	const int r = z;
//	return 0;
//}


//����������
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


//����������ֵ
//int count1()
//{
//	static int n = 0;
//	n++;
//	return n;
//	//�൱�ڷ��ص���n�Ŀ���
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