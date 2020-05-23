#include<iostream>
#include<list>
using namespace std;

void print_list(list<int> lt1)
{
	list<int>::const_iterator it1 =lt1.begin();
	while (it1 != lt1.end())
	{
		cout << *it1 << " ";
		++it1;
	}
	cout << endl;
}
void test_list1()
{
	list<int> lt1;
	lt1.push_back(1);
	lt1.push_back(2);
	lt1.push_back(3);
	lt1.push_back(4);

	list<int>::iterator it1 = lt1.begin();
	while (it1 != lt1.end())
	{
		cout << *it1 << " ";
		++it1;
	}
	cout << endl;



	list<int>lt2(lt1);
	print_list(lt2);



	list<int>lt3;
	lt3.push_back(10);
	lt3.push_back(20);
	lt3.push_back(30);
	lt3.push_back(40);
	lt1 = lt3;
	for (auto e : lt1)
	{
		cout << e << " ";
	}
	cout << endl;

	//reverse  逆置
	list<int>::reverse_iterator rit1 = lt1.rbegin();
	while (rit1 != lt1.rend())
	{
		cout << *rit1 << " ";
		rit1++;
	}
	cout << endl;
}


void test_list2()
{
	list<int> lt;
	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);
	lt.push_back(4);
	lt.push_front(0);
	print_list(lt);
	lt.pop_back();
	lt.pop_front();
	print_list(lt);

	
}
void test_list3()
{
	list<int> lt;
	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);
	lt.push_back(4);
	lt.push_back(5);
	lt.push_back(6);
	print_list(lt);
	list<int>::iterator pos = find(lt.begin(), lt.end(), 3);
	if (pos != lt.end())
	{
		lt.insert(pos, 30);//insert以后迭代器没有失效
		lt.erase(pos);
	}
	print_list(lt);
}
void test_list4()
{
	list<int> lt;
	lt.push_back(3);
	lt.push_back(2);
	lt.push_back(1);
	lt.push_back(5);

	lt.sort();
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	lt.reverse();
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;
}
void test_list5()
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
			it = lt.erase(it);//自动到下一位
		}
		else
		{
			++it;
		}
	}
	print_list(lt);
}
int main()
{
	//test_list1();
	//test_list2();
    //test_list3();
	//test_list4();
	test_list5();
	return 0;
}

