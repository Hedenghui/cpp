#include<iostream>
#include<memory>
using namespace std;

#include"SmartPtr.h"

int div()
{
	int a, b;
	cin >> a >> b;
	if (b == 0)
		throw invalid_argument("��0����");

	return a / b;
}

void f1()
{
	/*int* p1 = new int;
	int* p2 = new int;
	int* p3 = new int*/;

/*int* p = new int;
try
{
cout << div() << endl;
}
catch (...)
{
delete p;
throw;
}
delete p;*/

SmartPtr<int> sp1(new int);
*sp1 = 10;

SmartPtr<pair<int, int>> sp2(new pair<int, int>);
sp2->first = 20;
sp2->second = 30;

cout << div() << endl;
}

//int main()
//{
//	try
//	{
//		f1();
//	}
//	catch (exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

// ����ָ��Ŀ�
int x1()
{
	int* p1 = new int;
	int* p2 = p1;

	//bit::auto_ptr<int> ap1(new int);
	//bit::auto_ptr<int> ap2 = ap1;
	// *ap1 = 1; ���ձ���

	//bit::unique_ptr<int> up1(new int);
	//bit::unique_ptr<int> up2(up1);

	bit::shared_ptr<int> sp1(new int);
	bit::shared_ptr<int> sp2(sp1);

	bit::shared_ptr<int> sp3(new int);
	bit::shared_ptr<int> sp4(sp3);
	bit::shared_ptr<int> sp5(sp3);

	sp1 = sp4;


	return 0;
}

// shared_ptr�Ŀ�����ֵʱ�̰߳�ȫ����
// shared_ptr�Ƿ����̰߳�ȫ�ģ���ע�����������shared_ptr���󿽱�������++/--���ü����Ƿ��ǰ�ȫ�ģ����ʵ�����ǰ�ȫ�ġ�
#include<thread>

int x2()
{
	bit::shared_ptr<int> sp(new int);
	cout << sp.use_count() << endl;
	int n = 10000;

	std::thread t1([&](){
		for (int i = 0; i < n; ++i)
		{
			bit::shared_ptr<int> sp1(sp);
		}
	});

	std::thread t2([&](){
		for (int i = 0; i < n; ++i)
		{
			bit::shared_ptr<int> sp2(sp);
		}
	});

	t1.join();
	t2.join();

	cout << sp.use_count() << endl;

	return 0;
}

struct ListNode
{
	int val;
	//ListNode* _next;
	//ListNode* _prev;
	//bit::shared_ptr<ListNode> _spnext;
	//bit::shared_ptr<ListNode> _spprev;

	bit::weak_ptr<ListNode> _spnext;
	bit::weak_ptr<ListNode> _spprev;

	~ListNode()
	{
		cout << "~ListNode()" << endl;
	}
};

int x3()
{
	/*ListNode* n1 = new ListNode;
	ListNode* n2 = new ListNode;

	n1->_next = n2;
	n2->_prev = n1;

	delete n1;
	delete n2;*/

	bit::shared_ptr<ListNode> spn1(new ListNode);
	bit::shared_ptr<ListNode> spn2(new ListNode);

	cout << spn1.use_count() << endl;
	cout << spn2.use_count() << endl;

	// ѭ������
	spn1->_spnext = spn2; // �����ʽ��ʹ��weak_ptr�����������ü���
	spn2->_spprev = spn1;

	cout << spn1.use_count() << endl;
	cout << spn2.use_count() << endl;

	return 0;
}

// ����ɾ���� -- ���˽⣩
//#include<memory>
//class A
//{
//public:
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//	int _a1;
//	int _a2;
//};
//
//template<class T>
//struct DeleteArry
//{
//	void operator()(T* pa)
//	{
//		delete[] pa;
//	}
//};
//
//struct Free
//{
//	void operator()(void* p)
//	{
//		cout << "free(p)" << endl;
//
//		free(p);
//	}
//};
//
//struct Fclose
//{
//	void operator()(FILE* p)
//	{
//
//		cout << "fclose(p)" << endl;
//
//		fclose(p);
//	}
//};
//
//int x4()
//{
//	std::shared_ptr<A> sp1(new A);
//	std::shared_ptr<A> sp2(new A[10], DeleteArry<A>());
//	std::shared_ptr<A> sp3((A*)malloc(sizeof(A)), Free());
//	std::shared_ptr<FILE> sp4(fopen("test.txt", "w"), Fclose());
//
//	return 0;
//}

// ����ָ����RAII˼���һ��Ӧ�õ�����
// ����RAII���ǽ������캯�������������������飬��Ϊ���캯���������������ص㶼���Զ�����
#include<mutex>

// ʹ��RAII˼����Ƶ�����������
template<class Lock>
class LockGuard
{
public:
	LockGuard(Lock& lock)
		:_lk(lock)
	{
		_lk.lock();
	}

	~LockGuard()
	{
		cout << "����" << endl;
		_lk.unlock();
	}

	LockGuard(LockGuard<Lock>&) = delete;
	LockGuard<Lock>& operator=(LockGuard<Lock>&) = delete;
private:
	Lock& _lk;  // ע������������
};


//void f()
//{
//	mutex mtx;
//	mtx.lock();
//
//	// func()   // ����func�����п������쳣
//
//	mtx.unlock();
//}

void f()
{
	mutex mtx;
	LockGuard<mutex> lg(mtx);

	cout << div() << endl;   // ����div�����п������쳣
}

int x5()
{
	//try
	//{
	//	f();
	//}
	//catch (exception& e)
	//{
	//	cout << e.what() << endl;
	//}
	char* p = new char[1024 * 1024 * 1024];


	return 0;
}

// �������������ֻ���ڶ���
// ˼·��������������һ��Ҫ���ù��캯�������߿�������
class HeapOnly
{
public:
	static HeapOnly* GetObj()
	{
		return new HeapOnly;
	}

private:
	HeapOnly()
	{}

	// C++98��������������˽��
	//HeapOnly(const HeapOnly& );
public:
	// C++11 : ������delete
	HeapOnly(const HeapOnly&) = delete;
};

int x7()
{
	//HeapOnly hp;
	//HeapOnly* p = new HeapOnly;
	//HeapOnly* p = HeapOnly::GetObj();
	std::shared_ptr<HeapOnly> sp1(HeapOnly::GetObj());
	std::shared_ptr<HeapOnly> sp2(HeapOnly::GetObj());

	//HeapOnly copy(*sp1);


	return 0;
}

//class StackOnly
//{
//public:
//	static StackOnly GetObj()
//	{
//		return StackOnly();
//	}
//private:
//	StackOnly()
//	{}
//};

// ���ַ�������һ������ȱ�ݣ��޷���ֹ�����ݶ�(��̬��)��������
class StackOnly
{
public:
	void* operator new(size_t size) = delete;
};

int x8()
{
	StackOnly so;
	//StackOnly* p = new StackOnly;

	static StackOnly sso;


	return 0;
}

// ֮ǰ�Ѿ�ѧ��һЩ���ģʽ
// ������ģʽ -- �������������������֮һ�� ��װ��Ƴ����ģ���һ�����������װ�Ժ󣬲���¶�����Ľṹ������£�ͳһ�ķ�ʽ�����޸������е����ݡ�

// ������ģʽ -- ���ֵ���һ�ָ���
// ����һЩ���������ģʽ�磺����ģʽ��װ����ģʽ���۲���ģʽ������ģʽ...
// һ����ֻ����ȫ��(������)ֻ��һ��ʵ������
// ʲô������ʹ�ã�����һ����������һ���ڴ�أ������еĶ��߳���Ҫ�ڴ涼Ҫ������ڴ����ȡ����ô����ڴ�ص���Ϳ�����Ƶ���ģʽ��

// ���������������ĳ������ģ�����������ڴ�أ���ô��Ͷ����MemoryPool
#include<thread>
#include<vector>
#include<windows.h>

namespace lazy_man
{
	// ����ģʽ -- ��һ�λ�ȡ����ʱ���ٴ�������
	class Singleton
	{
	public:
		static Singleton* GetInstance()
		{
			//::Sleep(1000);  ����û����ʱ�����̲߳���ȫ��������2�������߳�ͬʱ�����ж�������

			// ˫���
			if (_pinst == nullptr)
			{
				//_mtx.lock();
				unique_lock<mutex> lock(_mtx);
				if (_pinst == nullptr)
				{
					_pinst = new Singleton;
				}
				//_mtx.unlock();
			}

			// ...

			return _pinst;
		}

		static void DelInstance()
		{
			//unique_lock<mutex> lock(_mtx);
			delete _pinst;
			_pinst = nullptr;
		}

		Singleton(const Singleton& s) = delete;

	private:
		Singleton()
		{}

		static Singleton* _pinst;
		static mutex _mtx;
	};

	// 1�����Ҫ�ֶ��ͷŵ������󣬿��Ե���DelInstance
	// 2�������Ҫ�������ʱ�������ͷŵ������󣬿��Լ�����������
	class GC
	{
	public:
		~GC()
		{
			Singleton::DelInstance();
		}
	};

	static GC gc;


	Singleton* Singleton::_pinst = nullptr;
	mutex Singleton::_mtx;

	int x()
	{
		//Singleton s1;
		//Singleton s2;
		//cout << Singleton::GetInstance() << endl;
		//cout << Singleton::GetInstance() << endl;
		//cout << Singleton::GetInstance() << endl;
		//Singleton copy(*Singleton::GetInstance());

		vector<std::thread> vthreads;
		int n = 100;
		for (int i = 0; i < n; ++i)
		{
			vthreads.push_back(std::thread([]()
			{
				//cout << std::this_thread::get_id() <<":";
				cout << Singleton::GetInstance() << endl;
			}));
		}

		for (auto& t : vthreads)
		{
			t.join();
		}

		return 0;
	}
}

namespace hungry_man
{
	// ����ģʽ  һ��ʼ(main����֮ǰ)�ʹ�������
	class Singleton
	{
	public:
		static Singleton* GetInstance()
		{
			return &_inst;
		}

		Singleton(const Singleton&) = delete;
	private:
		Singleton()
		{}

		static Singleton _inst;
	};

	Singleton Singleton::_inst;
	// static��������main����֮ǰ�����ģ����ֻ�����̣߳����Բ������̰߳�ȫ��


	int x()
	{
		//Singleton s1;
		//Singleton s2;
		//cout << Singleton::GetInstance() << endl;
		//cout << Singleton::GetInstance() << endl;
		//cout << Singleton::GetInstance() << endl;
		//Singleton copy(*Singleton::GetInstance());

		vector<std::thread> vthreads;
		int n = 10;
		for (int i = 0; i < n; ++i)
		{
			vthreads.push_back(std::thread([]()
			{
				//cout << std::this_thread::get_id() <<":";
				cout << Singleton::GetInstance() << endl;
			}));
		}

		for (auto& t : vthreads)
		{
			t.join();
		}

		return 0;
	}
}

//int main()
//{
//	hungry_man::x();
//
//	return 0;
//}

// �ܽ�Ա�һ�¶���������������
// 1������ģʽ��Ҫ�����̰߳�ȫ���ͷŵ����⣬ʵ����Ը����ӣ�����ģʽ�������������⣬ʵ�ּ�
// 2��������һ��������ģʽ��Ҫʱ�ڳ�ʼ���������󣬲���Ӱ����������������ģʽ���෴�����������׶ξʹ�����ʼ��ʵ�����󣬻ᵼ�³�����������Ӱ�����顣
// 3������ж�������࣬������������ϵ(B����A)��Ҫ��A�����ȴ�����ʼ����B�����ٴ�����ʼ������ô�Ͳ��ܶ�������Ϊ�޷���֤������ʼ��˳����ʱ���������ǾͿ����ֶ����ơ�

// �ܽ�һ�£�ʵ��������ģʽ���Ǹ�ʵ��һЩ



/////////////////////////////////////////////////////////////////////////////
// ����ת��
class A
{
public:
	virtual void f()
	{}

	int _a;
};

class B : public A
{
public:
	int _b;
};


//A* pa = &a;
//f_cast(pa);
//
//pa = &b;
//f_cast(pa);

void f_cast(A* pa)
{
	// ���������pa��ָ���࣬�����������
	// ���pa��ָ�����������ת���ɹ���
	// ���paָ���������ת��ʧ�ܷ���nullptr 
	B* pb = dynamic_cast<B*>(pa);
	//B* pb = (B*)pa;
	if (pb != nullptr)
	{
		cout << "ת���ɹ���paָ���������" << endl;
		pb->_a = 1;
		pb->_b = 2;
	}
	else
	{
		cout << "ת��ʧ�ܣ�paָ�������" << endl;
	}
}

int x10()
{
	int i = 1;
	double d = 8.88;
	i = d; // c����֧��������͵���ʽ����ת�� (������ͣ�Ҳ�����������Ƶ�����)
	cout << i << endl;

	int* p = nullptr;
	p = (int*)i; // c����֧��������͵�ǿ������ת�� (��������ͣ�Ҳ����������ܴ������)
	cout << p << endl;

	// C++ ����C��������������ʽת������ʾת��������C++����C�������ò��淶��C++��淶һ��
	// ��׼C++Ϊ�˼�ǿ����ת���Ŀ����ԣ�����������������ǿ������ת��������
	// static_cast��reinterpret_cast��const_cast��dynamic_cast
	d = static_cast<double>(i);     // ��Ӧc������ʽ����ת�� ��������ͣ�
	p = reinterpret_cast<int*>(i);  // ��Ӧc���Դ󲿷�ǿ������ת������������ͣ�

	volatile const int ci = 10;
	//const int ci = 10;
	int* pi = const_cast<int*>(&ci); // ��Ӧc����ǿ������ת����ȥ��const���Եģ���������ͣ�
	//int* pi = (int*)&ci;
	*pi = 20;
	cout << *pi << endl;
	cout << ci << endl; // �����ӡ��10����Ϊci�洢���ڴ汻���ˣ�����ci���Ž��˼Ĵ���������ȥ�Ĵ�����ȡ������10.�����������ڱ�������const�����ȡ�Ż����Ƶ��¡�
	// ��Ҫ��ֹ������������Ż���ÿ�ζ����ڴ���ȥȡֵ���Ͱ�volatile����

	A a;
	B b;

	// C++�����������Ը�ֵ������Ķ���ָ�롢���ã���������лᷢ����Ƭ�����������
	// �﷨��Ȼ֧�ֵģ����������ת���������Գɹ���

	// ����Ǹ����ָ��������ã����������ָ�룬������̽�����ת������������п����ܳɹ�
	// Ҫ�����������
	// �����Ҫע����ǣ�dynamic_cast����ת��ֻ����Լ̳��еĶ�̬����(�����������麯��)

	// ��Ϊdynamic_cast���ʶ�����ָ����ָ������������������أ�dynamic_cast��ԭ��
	// dynamic_castͨ��ȥ�����Ϸ��洢�ı�ʶ��Ϣ�����ж�ָ����������������
	A* pa = &a;
	f_cast(pa);

	pa = &b;
	f_cast(pa);

	return 0;
}

// �ܽ�һ�£�������������ת�������Ҫ�þ����淶һ�㣬��֪��ת�������ʲôӰ��

class AA
{
public:
	//AA(int a)
	explicit AA(int a)
	{
		cout << "AA(int a)" << endl;
	}

	//AA(int a1, int a2)
	explicit AA(int a1, int a2)
	{
		cout << "AA(int a1, int a2)" << endl;
	}

	AA(const AA& a)
	{
		cout << "AA(const AA& a)" << endl;
	}
private:
	int _a1;
	int _a2;
};

int main()
{
	AA aa1(1);

	// ��ʽת��-> A tmp(1); A a2(tmp)�����Ż���ֱ�ӹ���
	AA aa2 = 1;
	AA aa3 = { 1, 2 }; // C++11
}