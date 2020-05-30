#include <iostream>
using namespace std;

//#include "stack.h"
//#include "queue.h"
#include "2020.5.30.h"


#include <time.h>
#include <algorithm>
#include <queue>
#include <functional>

void test_deque()
{
	deque<int> d;
	vector<int> v;
	const int n = 100000;
	srand(time(0));
	for (size_t i = 0; i < n; ++i)
	{
		int x = rand();
		d.push_back(x);
		v.push_back(x);
	}

	size_t begin1 = clock();
	sort(d.begin(), d.end());
	size_t end1 = clock();

	size_t begin2 = clock();
	sort(v.begin(), v.end());
	size_t end2 = clock();

	cout << end1 - begin1 << endl;
	cout << end2 - begin2 << endl;

	//d.push_back(-1);
	//d.push_back(1);
	//d.push_back(2);
	//d.push_back(5);
	//d.push_back(0);
	//d.push_front(10);

	//for (size_t i = 0; i < d.size(); ++i)
	//{
	//	cout << d[i] << " ";
	//}
	//cout << endl;
}

// ���������� ����֧�ֵ�������������Ϊ����ͨ��������һЩ��������
// ���֧�ֵ��������������������޷��ܺõı�����������
void test_priority_queue()
{
	priority_queue<int> pq; // Ĭ�ϴ�����ȼ���
	//priority_queue<int, vector<int>, greater<int>> pq;   // �������С�����ȼ��ߣ���β����� �º���

	pq.push(3);
	pq.push(1);
	pq.push(9);
	pq.push(4);
	pq.push(2);

	while (!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
}

// ����Ĭ�Ϸ����޶�����һ����struct��class��C++����һ����
// һ���������Ա����˽�У����ֹ��У�����class
// ���г�Ա�����ųɹ��У�����struct
//struct less
//{
//	bool operator()(int x1, int x2)
//	{
//		return x1 < x2;
//	}
//};

void test_sort()
{
	vector<int> v;
	v.push_back(5);
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);

	// ����  less < 
	sort(v.begin(), v.end());

	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	// ���� greater > 
	//greater<int> gt;
	//sort(v.begin(), v.end(), gt);
	sort(v.begin(), v.end(), greater<int>());

	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

int main()
{
	//bit::test_stack();
	//bit::test_queue();
	//test_deque();

	//test_priority_queue();
	//bit::test_priority_queue();

	//bit::less<int> lessFunc;
	//cout << lessFunc(1, 2) << endl;

	test_sort();

	return 0;
}