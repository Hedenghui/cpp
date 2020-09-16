#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
//void test()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	for (size_t i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	vector<int> v2(v1);
//	for (size_t i = 0; i < v2.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	
//}
//void test2()
//{
//	//遍历
//	vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(4);
//
//	//1.operator[]+size
//	for (size_t i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	//2.迭代器
//	vector<int>::iterator it = v1.begin();
//	while (it != v1.end())
//	{
//		cout << *it << " ";
//		it++;
//	}
//	cout << endl;
//	//3.范围for
//	for (auto e : v1)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
//void test3()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(100);
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(6);
//	//要求删掉5
//	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
//	if(pos != v.end())
//	{
//		v.erase(pos);
//	}
//
//	sort(v.begin(), v.end());
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//}
//int main()
//{
//	test3();
//	return 0;
//}


//class Solutionm
//{
//public:
//	int singleNumber(vector<int>& nums)
//	{
//		int array[32] = { 0 };
//		for (auto val : nums)
//		{
//			for (size_t i = 0; i < 32; i++)
//			{
//				if (val&(1 << i))
//				{
//					array[i]++;
//				}
//			}
//		}
//		int num = 0;
//		for (size_t i = 0; i < 32; i++)
//		{
//			if (array[i] % 3 == 1)
//			{
//				num |= (1 << i);
//			}
//		}
//		return num;
//	}
//	
//};


//迭代器失效
void test()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	/*v.push_back(6);
	v.push_back(7);
	v.push_back(8);*/

	vector<int>::iterator it = v.begin();
	v.push_back(6);
	//这里7不行，因为要扩容，从新开辟位置，it指向的位置被删除了，所以失效
	/*v.push_back(7);
	v.push_back(8);*/
	while (it != v.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}
//void test2()
//{
//	//要求删除容器里所有偶数
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//	vector<int>::iterator it = v.begin();
//	while (it != v.end())
//	{
//		//1 2 3 4 5 6
//		//删除2后，3补到2的位置，it指向了4，会错过，
//		//vs编译器检查会报错，gcc可能会报错，可能不会报错，结果可能不对，可能对
//		//总结这种写法有问题的。
//		if (*it % 2 == 0)
//		{
//			v.erase(it);
//		}
//		else
//		{
//			++it;
//		}
//	}
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	//test();
//	test2();
//	return 0;
//}


void test2()
{
	//要求删除容器里所有偶数
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		if (*it % 2 == 0)
		{
			it=v.erase(it);//erase会返回删除的it的下一个位置
		}
		else
		{
			++it;
		}
	}
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}
int main()
{
	//test();
	test2();
	return 0;
}