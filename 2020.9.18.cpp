#include<iostream>
using namespace std;
#include<list>
//Ϊʲô����list
//����vector��ȱ����ڵ�
//vectorȱ�㣺
//1.ͷ�����в��Ĳ���ɾ��Ч�ʵ͡�o(N),��Ϊ��ҪŲ�����ݡ�
//2.�������ݿռ䲻����Ҫ���ݡ�������Ҫ���¿ռ䣬�������ݣ��ͷžɿռ�
//vector�ŵ㣺
//1.֧���±��������ʡ�

void print(const list<int>& lt)
{
	list<int>::const_iterator it = lt.begin();
	while (it != lt.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}
void test_list1()
{
	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	
	//����������
	list<int>::iterator it = l.begin();
	while (it != l.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
	//for
	for (auto e : l)
	{
		cout << e << " ";
	}
	cout << endl;
	list<int>::reverse_iterator rit = l.rbegin();
	while (rit != l.rend())
	{
		cout << *rit << " ";
		rit++;
	}
	cout << endl;
	list<int> lt2(l);
	print(lt2);

	list<int> lt3;
	lt3.push_back(10);
	lt3.push_back(20);
	lt3.push_back(30);
	lt3.push_back(40);
	l = lt3;
	for (auto e : l)
	{
		cout << e << " ";
	}
	cout << endl;
}
void test_list2()
{
	list<int> lt1;
	lt1.push_back(1);
	lt1.push_back(2);
	lt1.push_back(3);
	lt1.push_back(4);
	lt1.push_front(0);
	lt1.push_front(-1);
	print(lt1);
	lt1.pop_back();
	lt1.pop_front();
	print(lt1);

}
void test_list3()
{
	list<int> lt1;
	lt1.push_back(1);
	lt1.push_back(2);
	lt1.push_back(3);
	lt1.push_back(4);
	lt1.push_back(5);
	lt1.push_back(6);
	//��֧��+3����Ϊ������
	//lt1.insert(lt1.begin() + 3, 30);
	list<int>::iterator pos = find(lt1.begin(),lt1.end(),3);
	if (pos != lt1.end())
	{
		lt1.insert(pos, 30);
		lt1.erase(pos);
	}
	print(lt1);
	lt1.sort();
	print(lt1);

}
void test_list4()
{
	list<int> lt;
	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);
	lt.push_back(4);
	lt.push_back(5);
	lt.push_back(6);

	list<int>::iterator it = lt.begin();
	while (it != lt.end())
	{
		if (*it % 2 == 0)
		{
			it = lt.erase(it);
		}
		else
		{
			it++;
		}
	}
	print(lt);
}
int main()
{
	//test_list1();
	//test_list3();
	test_list4();
	return 0;
}
