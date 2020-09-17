#pragma once 
#include<assert.h>
namespace hdh
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;
		vector()
			:_start(nullptr)
			, _finish(nullptr)
			, _endofstorage(nullptr)
		{}
		~vector()
		{
			delete[] _start;
			_start = _finish = _endofstorage = nullptr;
		}

		iterator begin()
		{
			return _start;
		}
		iterator end()
		{
			return _finish;
		}
		const_iterator begin()const
		{
			return _start;
		}
		const_iterator end()const
		{
			return _finish;
		}


		void reserve(size_t n)
		{
			if (n > capacity())
			{
				int sz = size();
				T* tmp = new T[n];
				if (_start)//考虑到memcpy参数不能为空指针，若开始_start为0，出错
				{
					//memcpy(tmp, _start, sizeof(T)*size());victor<string>浅拷贝问题
					for (size_t i = 0; i < sz; i++)
					{
						tmp[i] = _start[i];
					}
					delete[] _start;
				}
				_start = tmp;
				_finish = _start + sz;
				_endofstorage = _start + n;
			}
		}

		void push_back(const T& x)
		{
			/*if (_finish==_endofstorage)
			{
			size_t newcapacity = capacity() == 0 ? 2 : capacity() * 2;
			reserve(newcapacity);
			}
			*_finish = x;
			++_finish;*/
			insert(_finish, x);
		}

		void pop_back()
		{
			assert(_start < _finish);
			--_finish;
		}

		void insert(iterator pos, const T& x)
		{
			assert(pos <= _finish);
			//注意下面代码！！！！

			if (_finish == _endofstorage)
			{
				size_t n = pos - _start;
				size_t newcapacity = capacity() == 0 ? 2 : capacity() * 2;
				reserve(newcapacity);
				//如果增容原来的pos就失效了，这里需要重新计算
				pos = _start + n;
			}
			iterator end = _finish - 1;
			while (end >= pos)
			{
				*(end + 1) = *end;
				--end;
			}
			*pos = x;
			++_finish;
		}

		iterator erase(iterator pos)
		{
			assert(pos < _finish);
			while (pos<_finish)
			{
				*pos=*(pos + 1);
				pos++;
			}
			--_finish;
			return pos;
		}

		T& operator[](size_t i)
		{
			assert(i < size());
			return _start[i];
		}
		const T& operator[](size_t i)const 
		{
			assert(i < size());
			return _start[i];
		}

		size_t size()const
		{
			return _finish - _start;
		}

		size_t capacity()const
		{
			return _endofstorage - _start;
		}

		void resize(size_t n, const T& val = T())//给的是T类型的缺省值
		{
			if (n < size())
			{
				_finish =_start+ n;
			}
			else
			{
				if (n>capacity())
				{
					reserve(n);
				}
				while (_finish < _start + n)
				{
					*_finish = val;
					++_finish;
				}
			}
		}

		//v2(v1)
		vector(const vector<int>& v)
		{
			_start = new T[v.capacity()];
			_finish = _start;
			_endofstorage = _start + v.capacity();

			for (size_t i = 0; i < v.size(); i++)
			{
				*_finish = v[i];
				_finish++;
			}
		}

		//v1=v3;
		//有问题
		//vector<T>& operator=(const vector<T>& v)
		//{
		//	if (this != &v)
		//	{
		//		delete[] _start;
		//		_start = new T[v.capacity()];
		//		for (size_t i = 0; i < v.size(); i++)
		//		{
		//			_start[i] = v[i];
		//		}
		//		//memcpy(_start, v._start, sizeof(T)*v.size());
		//	}
		//	return *this;
		//}
		vector<T>& operator=(vector<T> v)
		{
			swap(v);

			return *this;
		}
		//系统的swap 三个深拷贝
		//建议使用v1.swap(v2)
		void swap(vector<T>& v)
		{
			::swap(_start, v._start);
			::swap(_finish, v._finish);
			::swap(_endofstorage, v._endofstorage);
		}
	private:
		iterator _start;
		iterator _finish;
		iterator _endofstorage;
	};
	void test_vector1()
	{
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		vector<int>::iterator it = v.begin();
		while (it != v.end())
		{
			*it += 1;
			cout << *it << " ";
			++it;
		}
		cout << endl;
		for (auto& e : v)
		{
			e -= 1;
			cout << e << " ";
		}
		cout << endl;
		for (size_t i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
	void test_vector2()
	{
		vector<int> v;
		v.reserve(10);
		v.push_back(1);
		v.push_back(1);
		v.push_back(1);
		v.push_back(1);
		v.push_back(1);
		v.insert(v.begin(), 0);
		v.resize(8,1);
		for (auto e : v)
		{
			cout << e << " ";
		}
		cout << endl;
	}
	void test_vector4()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);

		vector<int> v2(v1);
		for (size_t i = 0; i < v1.size(); i++)
		{
			cout << v1[i] << " ";
		}
		cout << endl;
		for (size_t i = 0; i < v2.size(); i++)
		{
			cout << v2[i] << " ";
		}
		cout << endl;
	}
	void test_vector5()
	{
		vector<int> v1;
		v1.push_back(1);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		v1.push_back(4);

		vector<int> v3;
		v3.push_back(10);
		v3.push_back(20);
		v3.push_back(30);
		v3.push_back(40);
		v3.push_back(50);

	
		v1 = v3;
		for (auto e : v1)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test_vector6()
	{
		hdh::vector<string> v;
		v.push_back("111111111111111111111111");
		v.push_back("222222222222222222222222");
		v.push_back("333333333333333333333333");
		v.push_back("444444444444444444444444");

		vector<string>::iterator it = v.begin();
		while (it != v.end())
		{
			cout << *it << endl;
			it++;
		}
		cout << endl;
	}
}