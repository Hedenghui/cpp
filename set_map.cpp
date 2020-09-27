#include<iostream>
using namespace std;
#include<set>
#include<map>
#include<string>
void test_set()
{
	set<int> s1;
	s1.insert(3);
	s1.insert(1);
	s1.insert(4);
	s1.insert(3);//搜索树有了就不插入
	s1.insert(7);

	//排序+去重
	/*set<int>::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;

	set<int> copy(s1);
	for (auto e : copy)
	{
		cout << e << " ";
	}
	cout << endl;

	set<int>::reverse_iterator it2 = s1.rbegin();
	while (it2 != s1.rend())
	{
		cout << *it2 << " ";
		it2++;
	}
	cout << endl;
*/

	//二者删除区别： find如果没有查到就会报错，而s1.erase(4)这种只会删除有的，没有的也不会报错
	set<int>::iterator it3 = s1.find(3);//这种查找O(logn)
	//set<int>::iterator it3 = find(s1.begin(),s1.end(),3);这种就是效率低
	if (it3 != s1.end())
	{
		s1.erase(it3);
	}


	s1.erase(4);
	s1.erase(40);
	set<int>::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << " ";
		it++;
	}
	cout << endl;
}


void test_map()
{
	map<int, int> m;
	m.insert(pair<int, int>(1, 1));
	m.insert(pair<int, int>(3, 3));
	m.insert(pair<int, int>(2, 2));
	m.insert(make_pair(4,4));

	map<int, int>::iterator s = m.begin();
	while (s != m.end())
	{
		//cout << (*s).first << ":" << (*s).second << endl;
		cout << s->first << ":" << s->second << endl;
		s++;
	}
	cout << endl;

	for (auto e : m)
	{
		cout << e.first << ":" << e.second << endl;
	}
	cout << endl;
}

void test()
{
	map<string, int> m;
	string a[] = { "西瓜", "苹果", "樱桃", "西瓜", "西瓜", "西瓜" };
	//第一种写法
	/*for (auto e : a)
	{
		map<string, int>::iterator ret = m.find(e);
		if (ret != m.end())
		{
			ret->second += 1;
		}
		else
		{
			m.insert(make_pair(e, 1));
		}
	}*/
	//第二种写法
	/*for (auto& str : a)
	{
		pair<map<string, int>::iterator, bool> ret = m.insert(make_pair(str, 1));
		if (ret.second == false)
		{
			ret.first->second++;
		}
	}
*/

	//第三种
	//[] ==(*((this->insert(make_pair(k,mapped_type()))).first)).second
	for (auto str : a)
	{
		m[str]++;
	}
	for (auto h : m)
	{
		cout << h.first << ":" << h.second << endl;
	}
	cout << endl;

	cout << m["西瓜"] << endl;
}
int main()
{

	//test_set();
	//test_map();
	test();
	return 0;
}