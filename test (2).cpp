//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include"2020.9.21.h"
//
//
//int main()
//{
//
//	hdh::test();
//	return 0;
//}

#include<iostream>
using namespace std;

//template<class T>
//class A
//{
//
//};


 //����ģ�����
template<class T>
//template<typename T>
class A
{};

#define N 1000

// ���Ͳ���+������ģ�����
template<class T,int N>
class Array
{
public:
	Array()
	{
		//N = 10;
	}

private:
	T _a[N];
};

//template<class T, double D>
//template<class T, string s>
template<class T, char ch> // long long/long/int/short/char   ����   ����
class B
{};

//int main()
//{
//	Array<int, 100> a1;  // 100
//	Array<int, 1000> a2;  // 1000
//
//	return 0;
//}

// ģ����ػ�
template<class T>
bool IsEqual(T& left, T& right)
{
	return left == right;
}

// �ػ�  �����ĳЩ���͵����⻯����
template<>
bool IsEqual<char*>(char*& left, char*& right)
{
	return strcmp(left, right) == 0;
}

template<class T1, class T2>
class Data
{
public:
	Data() { cout << "ԭģ���ࣺData<T1, T2>" << endl; }
private:
	T1 _d1;
	T2 _d2;
};

// ȫ�ػ�   ȫ���Ĳ������ػ�
template<>
class Data<int, char>
{
public:
	Data() { cout << "ȫ�ػ���Data<int, char>" << endl; }
private:
};

// ƫ�ػ�  �������ػ����ֲ���/���߶Բ����Ľ�һ������
template<class T2>
class Data<int, T2>
{
public:
	Data() { cout << "ƫ�ػ���Data<int, T2>" << endl; }
private:
};

template<class T1, class T2>
class Data<T1*, T2*>
{
public:
	Data() { cout << "ƫ�ػ���Data<T1*, T2*>" << endl; }
private:
};

template<class T1, class T2>
class Data<T1&, T2&>
{
public:
	Data() { cout << "ƫ�ػ���Data<T1&, T2&>" << endl; }
private:
};


int main()
{
	//int a = 0, b = 1;
	//cout << IsEqual(a, b) << endl;
	//char* p1 = "hello";
	//char* p2 = "world";
	//cout << IsEqual(p1, p2) << endl;

	Data<int, int> d1;
	Data<int, double> d2;
	Data<int, char> d3;
	Data<char, char> d4;
	Data<char*, char*> d5;
	Data<char*, int*> d6;
	Data<char&, int&> d7;

	return 0;
}


