#include<iostream>
using namespace std;

//int main()
//{
//	//c
//	int* p1 = (int*)malloc(sizeof(int));
//	int* p2 = (int*)malloc(sizeof(int)* 10);
//	free(p1);
//	free(p2);
//
//	//c++
//	int* p3 = new int;
//	//int* p3= new int(10);��ʼ��Ϊ10
//	int* p4 = new int[10];
//	delete p3;
//	delete[] p4;
//
//	return 0;
//}


//����malloc��free  new��delete��������٣�
//1.�����������ͣ�Ч��һ��
//2.�����Զ������ͣ�Ч����һ��


class A
{
public:
	A()
	{
		_a = 10;
		cout << "A" << endl;
	}
	~A()
	{
		cout << "~A" << endl;
	}
private:
	int _a;
};
int main()
{
	A* p1 = (A*)malloc(sizeof(A));//����ռ�
	A* p2 = new A;//����ռ�+���캯����ʼ��

	free(p1);//�ͷſռ�
	delete p2;//�ͷſռ�+��������
	return 0;
}

//int globalVar = 1;
//static int staticGlobalVar = 1;
//void Test()
//{
//	static int staticVar = 1;
//	int localVar = 1;
//	int num1[10] = { 1, 2, 3, 4 };
//	char char2[] = "abcd";
//	char* pChar3 = "abcd";
//	int* ptr1 = (int*)malloc(sizeof (int)* 4);
//	int* ptr2 = (int*)calloc(4, sizeof(int));
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int)* 4);
//	free(ptr1);
//	free(ptr3);
//}



//class A
//{
//public:
//	A()
//	{
//		cout << "A" << endl;
//	}
//private:
//	int _a;
//};
//
//int  main()
//{
//	A* p1 = (A*)malloc(sizeof(A));
//	//A* P2 = new A;
//	A* p3 = (A*)operator new(sizeof(A));
//
//	//operator new ��malloc������
//	//���ۣ�ʹ�÷�ʽ��һ���ģ����Ǵ������ķ�ʽ�ǲ�һ����
//
//	size_t size = 2;
//	void* p4 = malloc(size * 1024 * 1024*1024);
//	cout << p4 << endl;//ʧ�ܷ���0;
//
//	try{
//		void* p5 = operator new(size * 1024 * 1024 * 1024);//�ᱨ��
//		cout << p5 << endl;
//	}
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//
//	//malloc
//	//operator new==>malloc+ʧ�����쳣ʵ��
//	//new         ==>operator new+���캯��
//	//operator delete��delete��һ����
//	return 0;
//}

//
//class A
//{
//public:
//	A(int a=0)
//		:_a(a)
//	{
//		cout << "A" << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A*p1 = new A;
//	delete p1;
//
//	//��ģ��������Ϊ
//	A*p2 = (A*)operator new(sizeof(A));
//	new(p2)A(10);//�൱�ھ����ڴ��ڵĿռ���ù��캯����ʼ������λnew
//	//new(�ռ��ָ��)����(����)
//
//	p2->~A();
//	operator delete(p2);
//}

//
//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//void Swap(double& left, double& right)
//{
//	double temp = left;
//	left = right;
//	right = temp;
//}
//void Swap(char& left, char& right)
//{
//	char temp = left;
//	left = right;
//	right = temp;
//}
//int main()
//{
//	int a1 = 1, a2 = 3;
//	Swap(a1, a2);
//	cout << a1 << a2 << endl;
//	double a3 = 1.11, a4 = 5.34;
//	Swap(a3, a4);
//	cout << a3 << a4 << endl;
//
//	//...
//	return 0;
//}


//template<typename T>
//template<class T>
//void Swap(T& x1, T& x2)
//{
//	T x = x1;
//	x1 = x2;
//	x2 = x;
//}
//int main()
//{
//	int a1 = 1, a2 = 3;
//	Swap(a1, a2);
//	cout << a1 << a2 << endl;
//	double a3 = 1.11, a4 = 5.34;
//	Swap(a3, a4);
//	cout << a3 << a4 << endl;
//
//	//...
//	return 0;
//}


//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.0, d2 = 20.0;
//	Add(a1, a2);
//	Add(d1, d2);
//	/*
//	����䲻��ͨ�����룬��Ϊ�ڱ����ڼ䣬��������������ʵ����ʱ����Ҫ������ʵ������
//	ͨ��ʵ��a1��T����Ϊint��ͨ��ʵ��d1��T����Ϊdouble���ͣ���ģ������б���ֻ��һ��T��
//	�������޷�ȷ���˴����׸ý�Tȷ��Ϊint ���� double���Ͷ�����
//	ע�⣺��ģ���У�������һ�㲻���������ת����������Ϊһ��ת�������⣬����������Ҫ���ڹ�
//	Add(a1, d1);
//	*/
//	// ��ʱ�����ִ���ʽ��1. �û��Լ���ǿ��ת�� 2. ʹ����ʽʵ����
//	Add(a1, (int)d2);
//	return 0;
//}
//
//template<typename T>
//void Swap(T& left, T& right)
//{
//	T temp = left;
//	left = right;
//	right = temp;
//}
//int main(void)
//{
//	int a = 10;
//	double b = 20.0;
//	// ��ʽʵ����
//	Add<int>(a, b);
//	return 0;
//
//
//	// ר�Ŵ���int�ļӷ�����
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	// ͨ�üӷ�����
//	template<class T>
//	T Add(T left, T right)
//	{
//		return left + right;
//	}
//	void Test()
//	{
//		Add(1, 2); // ���ģ�庯��ƥ�䣬����������Ҫ�ػ�
//		Add<int>(1, 2); // ���ñ������ػ���Add�汾
//	}
//
//
//
//	// ר�Ŵ���int�ļӷ�����
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	// ͨ�üӷ�����
//	template<class T1, class T2>
//	T1 Add(T1 left, T2 right)
//	{
//		return left + right;
//	}
//	void Test()
//	{
//		Add(1, 2); // ��Ǻ���ģ��������ȫƥ�䣬����Ҫ����ģ��ʵ����
//		Add(1, 2.0); // ģ�庯���������ɸ���ƥ��İ汾������������ʵ�����ɸ���ƥ���Add��
//		��
//	}
//
//
//	template<class T1, class T2, ..., class Tn>
//	class ��ģ����
//	{
//		// ���ڳ�Ա����
//	};
//
//
//	template<class T>
//	class Vector
//	{
//	public:
//		Vector(size_t capacity = 10)
//			: _pData(new T[capacity])
//			, _size(0)
//			, _capacity(capacity)
//		{}
//		// ʹ������������ʾ�������������������ⶨ�塣
//		~Vector();
//		void PushBack(const T& data)��
//			void PopBack()��
//			// ...
//			size_t Size() { return _size; }
//		T& operator[](size_t pos)
//		{
//			assert(pos < _size);
//			return _pData[pos];
//		}
//	private:
//		T* _pData;
//		size_t _size;
//		size_t _capacity;
//	};
//	// ע�⣺��ģ���к�������������ж���ʱ����Ҫ��ģ������б�
//	template <class T>
//	Vector<T>::~Vector()
//	{
//		if (_pData)
//			delete[] _pData;
//		_size = _capacity = 0;
//	}
//
	/*Vector<int> s1;
	Vector<double> s2;*/