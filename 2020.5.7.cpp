#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//#include<string>
//void test_string1()
//{
//	string s1("string.cpp");
//	string s2("string.c");
//	string s3("string.txt");
//
//	size_t pos1=s1.find('.');
//	if (pos1 != string::npos)
//	{
//		cout << s1.substr(pos1) << endl;
//	}
//}
//void test_string2()
//{
//	string s1("string.cpp.zip");
//	string s2("string.c");
//	string s3("string.txt");
//
//	size_t pos1 = s1.rfind('.');
//	if (pos1 != string::npos)
//	{
//		cout << s1.substr(pos1) << endl;
//	}
//	size_t pos2 = s2.find('.');
//	if (pos2 != string::npos)
//	{
//		cout << s2.substr(pos2) << endl;
//	}
//	size_t pos3 = s3.find('.');
//	if (pos3 != string::npos)
//	{
//		cout << s3.substr(pos3) << endl;
//	}
//	//Э��  ����   ��Դ����
//	string url("http://www.baidu.com/666");
//	//�����url
//}
//int main()
//{
//	test_string1();
//	test_string2();
//	return 0;
//}
#include <assert.h>
//namespace bit
//{
//	class string
//	{
//	public:
//		string()
//			:_str(nullptr)
//		{}
//
//		string(char* str)
//			:_str(str)
//		{}
//
//		size_t size()
//		{
//			return strlen(_str);
//		}
//
//		char& operator[](size_t i)
//		{
//			return _str[i];
//		}
//	private:
//		char* _str;
//	};
//
//	void test_string1()
//	{
//		string s1("hello");
//		string s2;
//
//		for (size_t i = 0; i < s1.size(); ++i)
//		{
//			s1[i] += 1;
//			cout << s1[i] << " ";
//		}
//		cout << endl;
//	}
//}


//namespace bit
//{
//	// �����⣺ʵ��һ���򵥵�string  -> ��ǳ��������
//	class string
//	{
//	public:
//	/*	string()
//			:_str(new char[1])
//		{
//			_str[0] = '\0';
//		}
//
//		string(char* str)
//			:_str(new char[strlen(str)+1])
//		{
//			strcpy(_str, str);
//		}*/
//
//		string(char* str = "")
//			:_str(new char[strlen(str) + 1])
//		{
//			strcpy(_str, str);
//		}
//
//		// string s2(s1)  -> ���
//		string(const string& s)
//			:_str(new char[strlen(s._str)+1])
//		{
//			strcpy(_str, s._str);
//		}
//
//		// ʵ��һ��
//		// s1 = s3
//		// s1 = s1
//		string& operator=(const string& s)
//		{
//			if (this != &s)
//			{
//				char* tmp = new char[strlen(s._str) + 1];
//				strcpy(tmp, s._str);
//				delete[] _str;
//				_str = tmp;
//			}
//
//			return *this;
//		}
//
//		~string()
//		{
//			delete[] _str;
//			_str = nullptr;
//		}
//
//		size_t size()
//		{
//			return strlen(_str);
//		}
//
//		char& operator[](size_t i)
//		{
//			return _str[i];
//		}
//
//		const char* c_str()
//		{
//			return _str;
//		}
//	private:
//		char* _str;
//	};
//
//	void test_string1()
//	{
//		string s1("hello");
//		string s2;
//
//		for (size_t i = 0; i < s1.size(); ++i)
//		{
//			s1[i] += 1;
//			cout << s1[i] << " ";
//		}
//		cout << endl;
//
//		for (size_t i = 0; i < s2.size(); ++i)
//		{
//			s2[i] += 1;
//			cout << s2[i] << " ";
//		}
//		cout << endl;
//	}
//
//	void test_string2()
//	{
//		string s1("hello");
//		string s2(s1);
//
//		cout << s1.c_str() << endl;
//		cout << s2.c_str() << endl;
//
//		string s3("world");
//		s1 = s3;
//		cout << s1.c_str() << endl;
//		cout << s3.c_str() << endl;
//	}
//}


namespace bit
{
	// ʵ��һ��֧����ɾ��ĵ�string
	class string
	{
	public:
		typedef char* iterator;

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}

		// string s2("hello");
		string(const char* str = "")
		{
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}

		// ��������͸�ֵ�����ҵ���

		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}

		size_t size() const
		{
			return _size;
		}

		size_t capacity() const
		{
			return _capacity;
		}

		char& operator[](size_t i)
		{
			assert(i < _size);
			return _str[i];
		}

		const char& operator[](size_t i) const
		{
			assert(i < _size);
			return _str[i];
		}

		const char* c_str()
		{
			return _str;
		}

		void reserve(size_t n)
		{
			if (n > _capacity)
			{
				char* newstr = new char[n + 1];
				strcpy(newstr, _str);
				delete[] _str;
				_str = newstr;
				_capacity = n;
			}
		}

		void resize(size_t n, char ch);

		void push_back(char ch)
		{
			// �ռ��������������
			if (_size == _capacity)
			{
				size_t newcapacity = _capacity == 0 ? 2 : _capacity * 2;
				reserve(newcapacity);
			}

			_str[_size] = ch;
			++_size;
			_str[_size] = '\0';
		}

		void append(const char* str)
		{
			// �ռ䲻������
			size_t len = strlen(str);
			if (_size + len > _capacity)  // ע���ⲻ�ܰ�2��ȥ������Ϊ��һ����
			{
				reserve(_size + len);
			}

			strcpy(_str + _size, str);
			_size += len;
		}

		// s1 += 'a'
		string& operator+=(char ch)
		{
			this->push_back(ch);
			return *this;
		}

		// s1 += "aaaaaa"
		string& operator+=(const char* str)
		{
			this->append(str);
			return *this;
		}

		void insert(size_t pos, char ch);
		void insert(size_t pos, const char* str);
		void erase(size_t pos, size_t len = npos);
		size_t find(char ch, size_t pos = 0);
		size_t find(const char* str, size_t pos = 0);

		bool operator<(const string& s);
		bool operator==(const string& s);
		bool operator<=(const string& s);
		bool operator>(const string& s);
		bool operator>=(const string& s);
		bool operator!=(const string& s);
	private:
		char*   _str;
		size_t  _size;     // �Ѿ��ж��ٸ���Ч�ַ�
		size_t  _capacity; // �ܴ���ٸ���Ч�ַ�  \0������Ч�ַ�

		static size_t npos;
	};

	size_t string::npos = -1;

	istream& operator<< (istream& in, string& s);
	ostream& operator<< (ostream& out, const string& s)
	{
		for (size_t i = 0; i < s.size(); ++i)
		{
			cout << s[i];
		}

		return out;
	}

	void test_string1()
	{
		string s1;
		string s2("hello");
		cout << s1 << endl;
		cout << s2 << endl;
		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;

		// ���ֱ�����ʽ
		for (size_t i = 0; i < s2.size(); ++i)
		{
			s2[i] += 1;
			cout << s2[i] << " ";
		}
		cout << endl;

		string::iterator it2 = s2.begin();
		while (it2 != s2.end())
		{
			*it2 -= 1;
			cout << *it2 << " ";
			++it2;
		}
		cout << endl;

		// ��Χfor���ɵ�����֧�ֵģ�Ҳ����˵��δ������ջᱻ�������滻�ɵ�����
		// iterator begin() end()
		for (auto e : s2)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test_string2()
	{
		string s1("hello");
		s1.push_back(' ');
		s1.push_back('w');
		s1.push_back('o');
		s1.append("rld xxxxxxxxxxxxxxxxxxxxxxxxx");
		cout << s1 << endl;

		string s2;
		s2 += "hello";
		s2 += ' ';
		s2 += "world";
		cout << s2 << endl;
	}
}
int main()
{
	return 0;
}
