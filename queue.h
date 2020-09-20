#pragma once
#include<vector>
#include<list>
#include<deque>
namespace hdh
{
	template <class T, class Container>
	class queue
	{
	public:
		void push(const T& x)
		{
			_con.push_back(x);
		}
		void pop()
		{
			_con.pop_front();
		}
		size_t size()
		{
			return _con.size();
		}
		bool empty()
		{
			return _con.empty();
		}
		T& front()
		{
			return _con.front();
		}
		T& back()
		{
			return _con.back();
		}
	private:
		Container _con;
	};

	void test_queue()
	{
		queue<int, deque<int>> q;
		//queue<int, list<int>> q;
		//queue<int, vector<int>> q;  队列不能用vector ,vector不支持头删
		q.push(1);
		q.push(2);
		q.push(3);
		q.push(4);
		q.push(5);
		while (!q.empty())
		{
			cout << q.front() << " ";
			q.pop();
		}
		cout << endl;
	}
}

