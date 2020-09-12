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
//	//int* p3= new int(10);初始化为10
//	int* p4 = new int[10];
//	delete p3;
//	delete[] p4;
//
//	return 0;
//}


//有了malloc和free  new和delete的意义何再？
//1.对于内置类型，效果一样
//2.对于自定义类型，效果不一样


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
	A* p1 = (A*)malloc(sizeof(A));//申请空间
	A* p2 = new A;//申请空间+构造函数初始化

	free(p1);//释放空间
	delete p2;//释放空间+析构函数
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
//	//operator new 和malloc的区别？
//	//结论：使用方式是一样的，但是处理错误的方式是不一样的
//
//	size_t size = 2;
//	void* p4 = malloc(size * 1024 * 1024*1024);
//	cout << p4 << endl;//失败返回0;
//
//	try{
//		void* p5 = operator new(size * 1024 * 1024 * 1024);//会报错
//		cout << p5 << endl;
//	}
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//
//	//malloc
//	//operator new==>malloc+失败抛异常实现
//	//new         ==>operator new+构造函数
//	//operator delete和delete是一样的
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
//	//想模拟上述行为
//	A*p2 = (A*)operator new(sizeof(A));
//	new(p2)A(10);//相当于就是在存在的空间调用构造函数初始化，定位new
//	//new(空间的指针)类型(参数)
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
//	该语句不能通过编译，因为在编译期间，当编译器看到该实例化时，需要推演其实参类型
//	通过实参a1将T推演为int，通过实参d1将T推演为double类型，但模板参数列表中只有一个T，
//	编译器无法确定此处到底该将T确定为int 或者 double类型而报错
//	注意：在模板中，编译器一般不会进行类型转换操作，因为一旦转化出问题，编译器就需要背黑锅
//	Add(a1, d1);
//	*/
//	// 此时有两种处理方式：1. 用户自己来强制转化 2. 使用显式实例化
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
//	// 显式实例化
//	Add<int>(a, b);
//	return 0;
//
//
//	// 专门处理int的加法函数
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	// 通用加法函数
//	template<class T>
//	T Add(T left, T right)
//	{
//		return left + right;
//	}
//	void Test()
//	{
//		Add(1, 2); // 与非模板函数匹配，编译器不需要特化
//		Add<int>(1, 2); // 调用编译器特化的Add版本
//	}
//
//
//
//	// 专门处理int的加法函数
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	// 通用加法函数
//	template<class T1, class T2>
//	T1 Add(T1 left, T2 right)
//	{
//		return left + right;
//	}
//	void Test()
//	{
//		Add(1, 2); // 与非函数模板类型完全匹配，不需要函数模板实例化
//		Add(1, 2.0); // 模板函数可以生成更加匹配的版本，编译器根据实参生成更加匹配的Add函
//		数
//	}
//
//
//	template<class T1, class T2, ..., class Tn>
//	class 类模板名
//	{
//		// 类内成员定义
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
//		// 使用析构函数演示：在类中声明，在类外定义。
//		~Vector();
//		void PushBack(const T& data)；
//			void PopBack()；
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
//	// 注意：类模板中函数放在类外进行定义时，需要加模板参数列表
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