//#include<iostream>
//using namespace std;

// ����ģ�����
//template<class T>
////template<typename T>
//class A
//{};

//#define N 1000

//// ���Ͳ���+������ģ�����
//template<class T, int N>
//class Array
//{
//public:
//	Array()
//	{
//		//N = 10;
//	}
//
//private:
//	T _a[N];
//};
//
////template<class T, double D>
////template<class T, string s>
//template<class T, char ch> // long long/long/int/short/char   ����   ����
//class B
//{};
//
//int main()
//{
//	Array<int, 100> a1;  // 100
//	Array<int, 1000> a2;  // 1000
//
//	return 0;
//}

//// ģ����ػ�
//template<class T>
//bool IsEqual(T& left, T& right)
//{
//	return left == right;
//}
//
//// �ػ�  �����ĳЩ���͵����⻯����
//template<>
//bool IsEqual<char*>(char*& left, char*& right)
//{
//	return strcmp(left, right) == 0;
//}
//
//template<class T1, class T2>
//class Data
//{
//public:
//	Data() { cout << "ԭģ���ࣺData<T1, T2>" << endl; }
//private:
//	T1 _d1;
//	T2 _d2;
//};
//
//// ȫ�ػ�   ȫ���Ĳ������ػ�
//template<>
//class Data<int, char>
//{
//public:
//	Data() { cout << "ȫ�ػ���Data<int, char>" << endl; }
//private:
//};
//
//// ƫ�ػ�  �������ػ����ֲ���/���߶Բ����Ľ�һ������
//template<class T2>
//class Data<int, T2>
//{
//public:
//	Data() { cout << "ƫ�ػ���Data<int, T2>" << endl; }
//private:
//};
//
//template<class T1, class T2>
//class Data<T1*, T2*>
//{
//public:
//	Data() { cout << "ƫ�ػ���Data<T1*, T2*>" << endl; }
//private:
//};
//
//template<class T1, class T2>
//class Data<T1&, T2&>
//{
//public:
//	Data() { cout << "ƫ�ػ���Data<T1&, T2&>" << endl; }
//private:
//};
//
//
//int main()
//{
//	//int a = 0, b = 1;
//	//cout << IsEqual(a, b) << endl;
//	//char* p1 = "hello";
//	//char* p2 = "world";
//	//cout << IsEqual(p1, p2) << endl;
//
//	Data<int, int> d1;
//	Data<int, double> d2;
//	Data<int, char> d3;
//	Data<char, char> d4;
//	Data<char*, char*> d5;
//	Data<char*, int*> d6;
//	Data<char&, int&> d7;
//
//	return 0;
//}

//#include"Func.h"

//int main()
//{
//	F1();		// call F1(?)
//	F2(10);     // call F2(?)
//	F2(10.11);     // call F2(?)
//	F2('a');     // call F2(?)
//
//	return 0;
//}
#include<iostream>
#include<string>
using namespace std;

//class Person
//{
//public:
//	void Print()
//	{
//		cout << "name:" << _name << endl;
//		cout << "age:" << _age << endl;
//	}
//protected:
//	string _name = "peter"; // ����
//private:
//	int _age = 18;  // ����
//};
//
//// �̳к����Person�ĳ�Ա����Ա����+��Ա�����������������һ���֡��������ֳ���Student��Teacher������Person�ĳ�Ա����������ʹ�ü��Ӵ��ڲ鿴Student��Teacher���󣬿��Կ��������ĸ��á�����Print���Կ�����Ա�����ĸ��á�
//class Student : public Person
//{
//public:
//	void f()
//	{
//		// ���е�˽�кͱ����ڵ�ǰ��û���
//		// �ڼ̳еĺ���������в��private���������в��ɼ�
//		cout << _name << endl;
//		//cout << _age << endl;
//	}
//protected:
//	int _stuid; // ѧ��
//};
//
//class Teacher : public Person
//{
//protected:
//	int _jobid; // ����
//};
//
//int main()
//{
//	Student s;
//	Teacher t;
//
//	s.Print();
//	t.Print();
//
//	return 0;
//}

//class Person
//{
//protected:
//	string _name; // ����
//	string _sex;  // �Ա�
//	int	_age;	 // ����
//};
//
//class Student : public Person
//{
//public:
//	int _No; // ѧ��
//};
//
//int main()
//{
//	Person p;
//	Student s;
//
//	// ����͸���֮��ĸ�ֵ���ݹ���
//	// 1.���������Ը�ֵ���������/ָ��/����
//	p = s;
//	Person* ptr = &s;
//	Person
//
//
//
//	return 0;
//}

// Student��_num��Person��_num�������ع�ϵ�����Կ�������������Ȼ���ܣ����Ƿǳ����׻���
class Person
{
protected:
	string _name = "С����"; // ����
	int _num = 111; 	     // ���֤��
};

class Student : public Person
{
public:
	void Print()
	{
		cout << " ����:" << _name << endl;
		cout << " ѧ��:" << _num << endl;
		cout << " ѧ��:" << Person::_num << endl;
	}
protected:
	int _num = 999; // ѧ��
};

// �����������ͬʱ��ͬ����Աʱ������ĳ�Ա�����˸���ĳ�Ա��(�ض���)

class A
{
public:
	void fun()
	{
		cout << "func()" << endl;
	}
};

class B : public A
{
public:
	void fun(int i)
	{
		cout << "func(int i)->" << i << endl;
	}
};
// A��B��fun����ʲô��ϵ��
// a������  b����д c���ض���(����)  d�����϶�����
// �𰸣�C
// ����Ҫ���Ǳ�����ͬһ������

int main()
{
	//Student s;
	//s.Print();

	B b;
	b.fun(1);
	b.A::fun();



	return 0;
}