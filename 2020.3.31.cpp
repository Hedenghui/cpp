//#include<iostream>
//using namespace std;//c++�������ж�������std�����ռ���
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
////���ճ���ϰ�У����ں�����������ͻ
//using namespace std;//c++�������ж�������std�����ռ���
////int cout = 10;���������ͻ
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
////int cout = 10;���������ͻ
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
//ȱʡ����-����̥
void Func(int a=0)
{
	//endl�൱��\n
	cout << a<<endl;
}
//ȫȱʡ +��ȱʡ
void Func1(int a = 10,int b = 20,int c = 30)
{
	cout << "a=" << a<<endl;
	cout << "b=" << b<<endl;
	cout << "c=" << c<<endl;
}
//��ȱʡ ���������������ȱʡ
void Func2(int a , int b , int c = 30)
{
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
}
//int main()
//{
//	//����ʱ�����Ҫ���α���������Ҵ���
//	/*Func(10);
//	Func();*/
//	Func1();
//	Func1(2);
//	Func2(10,20);
//	system("pause");
//	return 0;
//}

//��������  ��������ͬ ���Ͳ�ͬ()
//ֻ�Ƿ���ֵ��ͬ�����ܹ�������
void Func3()
{}
//int Func3()
//{}
//���أ��������⣺
//1.ʲô��������
//2.C++�����֧�ֺ������صģ�ΪʲôC���Բ�֧��
//int main()
//{
//	int a = 1;
//	int& ra = a;//������������(�൱��a��ȡ��һ������ra)
//}
//int main()
//{
//	int a = 1;
//	int& c = a;//���ñ����ڶ���ʱ��ʼ��
//	int d = 2;
//	c = d;//������d��ֵ��c
//}
int main()
{
	//const int a = 0;
	//int& b = a;//a�������ǿɶ������޸ģ�b��������int���ɶ����޸�

	const int a = 1;
	const int& b = a;

	int c = 1;
	int& d = c;
	const int& e = c;//���Եģ�c�ǿɶ���д��d�ǿɶ�
	//�ܽ᣺����ȡ����ʱ���������ʵ�Ȩ�޿�����С�����ܷŴ�


	int i = 0;
	double bd = i;//��ʿ����ת��
	const double& rd = i;//��ʱ�������г���
	const float& rf = i;
	//��ֵ֮��û��Ȩ����С�ͷŴ�Ĺ�ϵ
	const double g = i;
	system("pause");
	return 0;
}
