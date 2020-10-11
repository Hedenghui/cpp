#include<iostream>
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
#include<memory>
class A
{
public:
	~A()
	{
		cout << "~A()" << endl;
	}
private:
	int _a1;
	int _a2;
};

template<class T>
struct DeleteArry
{
	void operator()(T* pa)
	{
		delete[] pa;
	}
};

struct Free
{
	void operator()(void* p)
	{
		cout << "free(p)" << endl;

		free(p);
	}
};

struct Fclose
{
	void operator()(FILE* p)
	{

		cout << "fclose(p)" << endl;

		fclose(p);
	}
};


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

int main()
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
