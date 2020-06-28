#pragma once
#include<iostream>
using namespace std;
#include <vector>

// unordered_set<K>   ->HashTable<K, K>
// unordered_map<K,V> ->HashTable<K, pair<K,V>>
enum State
{
	EMPTY,
	EXITS,
	DELETE,
};

template<class T>
struct HashData
{
	T _data;
	State _state;
};

template<class K, class T, class KeyOfT>
class HashTable
{
public:
	bool Insert(const T& d)
	{
		// �������� = ��������/��Ĵ�С ������ϣ�����ĳ̶�
		// ��Խ�ӽ�������������Խ���׳�ͻ����ͻԽ�࣬Ч��Խ��
		// ��ϣ���������˲����ݣ����Ŷ��Ʒ��У�һ�㸺�����ӵ���0.7���ҾͿ�ʼ����
		// ��������ԽС����ͻ����Խ�ͣ�����Ч��Խ�ߣ����Ǹ�������ԽС���˷ѵĿռ�Խ��
		// ���Ը�������һ��ȡһ������ֵ��
		if (_num * 10 / _tables.size() >= 7)
		{
			// ����
		}


		KeyOfT koft;
		// ����d�е�key�ڱ���ӳ���λ��
		size_t index = koft(d) % _tables.size();
		while (_tables[index]._state == EXITS)
		{
			if (koft(_tables[index]._data) == koft(d))
			{
				return false;
			}

			++index;
			if (index == _tables.size())
			{
				index = 0;
			}
		}

		_tables[index]._data = d;
		_tables[index]._state = EXITS;
		_num++;

		return true;
	}

	HashData* Find(const K& key)
	{
		KeyOfT koft;
		// ����d�е�key�ڱ���ӳ���λ��
		size_t index = key % _tables.size();
		while (_tables[index]._state != EMPTY)
		{
			if (koft(_tables[index]._data) == key)
			{
				if (_tables[index]._state == EXITS)
				{
					return &_tables[index];
				}
				else if (_tables[index]._state == DELETE)
				{
					return nullptr;
				}
			}

			++index;
			if (index == _tables.size())
			{
				index = 0;
			}
		}

		return nullptr;
	}

	bool Erase(const K& key)
	{
		HashData* ret = Find(key);
		if (ret)
		{
			ret->_state = DELETE;
			--_num;
			return true;
		}
		else
		{
			return false;
		}
	}

private:
	vector<HashData> _tables;
	size_t    _num = 0;    // ���˼�����Ч����
};
int main()
{
	return 0;
}