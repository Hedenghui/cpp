//面试题：实现一个简单的string-》深浅拷贝问题
namespace hdh
{
	class string
	{
	public:
		//string()
		//	:_str(new char[1])
		//{
		//	_str[0] = '\0';
		//}
		//string(char* str)
		//	:_str(new char[strlen(str)+1])//堆
		//{
		//	strcpy(_str, str);
		//}
		string(char* str = "")
			:_str(new char[strlen(str) + 1])
		{
			strcpy(_str, str);
		}
		size_t size()
		{
			return strlen(_str);
		}
		char& operator[](size_t i)
		{
			return _str[i];
		}
		~string()
		{
			delete[] _str;
			_str = nullptr;
		}
		const char* c_str()
		{
			return _str;
		}

		//传统写法
		//s2(s1) 深拷贝
		//string(const string& s)
		//	:_str(new char[strlen(s._str)+1])
		//{
		//	/*this->_str = s._str;*/
		//	strcpy(_str, s._str);
		//}
		//s1=s3;
		/*string& operator=(const string& s)
		{
			if (this != &s)
			{
				char* tmp = new char[strlen(s._str) + 1];
				strcpy(tmp, s._str);
				delete[] _str;
				_str = tmp;
				
			}
			return *this;
		}*/

		//深拷贝--现代写法
		string(const string& s)
			:_str(nullptr)
		{
			string tmp(s._str);
			swap(_str, tmp._str);
		}
		// s1 = s2;
		/*string& operator=(const string& s)
		{
		if (this != &s)
		{
		  string tmp(s._str);//gouzao
		  swap(_str, tmp._str);
		}

		return *this;
		}*/

		// s1 = s2;
		// 这里最巧的就是传值操作
		string& operator=(string s)//不用引用 拷贝构造
		{
			swap(_str, s._str);
			return *this;
		}
	private:
		char* _str;
	};

	void test_string1()
	{
		string s1("hello");
		string s2;
		for (size_t i = 0; i < s1.size(); i++)
		{
			s1[i] += 1;
			cout << s1[i] << " ";
		}
		cout << endl;
		for (size_t i = 0; i < s2.size(); i++)
		{
			s2[i] += 1;
			cout << s2[i] << " ";
		}
		cout << endl;
	}
	void test_string2()
	{
		string s1("hello");
		/*string s2(s1);
	
		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;*/
		string s3("world");
		s3 = s1;
		cout << s1.c_str() << endl;
		cout << s3.c_str() << endl;
	}
}

//实现一个增删查改
//#include<assert.h>
//namespace hdh
//{
//	class string
//	{
//	public:
//		string(const char* str = "")
//		{
//			_size = strlen(str);
//			_capacity = _size;
//			_str = new char[_capacity + 1];
//			strcpy(_str, str);
//		}
//		
//		~string()
//		{
//			delete[] _str;
//			_str = nullptr;
//			_size = _capacity = 0;
//		}
//		size_t size()const
//		{
//			return _size;
//		}
//		size_t capacity()
//		{
//			return _capacity;
//		}
//		char& operator[](size_t i)
//		{
//			assert(i < _size);
//			return _str[i];
//		}
//		const char& operator[](size_t i)const
//		{
//			assert(i < _size);
//			return _str[i];
//		}
//		const char* c_str()
//		{
//			return _str;
//		}
//		//迭代器
//		typedef char* iterator;
//		iterator begin()
//		{
//			return _str;
//		}
//		iterator end()
//		{
//			return _str + _size;
//		}
//
//		void push_back(char ch)
//		{
//			if (_size == _capacity)
//			{
//				size_t newcapacity = _capacity == 0 ? 2 : _capacity * 2;
//				char* newstr = new char[newcapacity + 1];
//				strcpy(newstr, _str);
//				delete[] _str;
//				_str = newstr;
//				_capacity = newcapacity;
//			}
//			_str[_size] = ch;
//			++_size;
//			_str[_size] = '\0';
//		}
//		void append(const char* str)
//		{
//			size_t len = strlen(str);
//			if (_size + len > _capacity)
//			{
//				size_t newcapacity = _size + len;
//				char* newstr = new char[newcapacity + 1];
//				strcpy(newstr, _str);
//				delete[] _str;
//				_str = newstr;
//				_capacity = newcapacity;
//			}
//			strcpy(_str + _size, str);
//			_size += len;
//		}
//		string& operator+=(char ch)
//		{
//			this->push_back(ch);
//			return *this;
//		}
//		string& operator+=(const char* str)
//		{
//			this->append(str);
//			return *this;
//		}
//		void insert(size_t pos, char ch)
//		{
//			assert(pos <= _size);
//			if (_size == _capacity)
//			{
//				size_t newcapacity = _capacity == 0 ? 2 : _capacity * 2;
//				char* newstr = new char[newcapacity + 1];
//				strcpy(newstr, _str);
//				delete[] _str;
//				_str = newstr;
//				_capacity = newcapacity;
//			}
//			int end = _size;
//			while (end >= (int)pos)
//			{
//				_str[end + 1] = _str[end];
//				end--;
//			}
//			_str[pos] = ch;
//			++_size;
//
//		}
//		string& insert(size_t pos, const char* str)
//		{
//			size_t len = strlen(str);
//			if (_size+len > _capacity)
//			{
//				size_t newcapacity = _size + len;
//				char* newstr = new char[newcapacity + 1];
//				strcpy(newstr, _str);
//				delete[] _str;
//				_str = newstr;
//				_capacity = newcapacity;
//			}
//			int end = _size;
//			while (end >= pos)
//			{
//				_str[end +len] = _str[end];
//				--end;
//			}
//			/*for (size_t i = 0; i < len; i++)
//			{
//				_str[pos++] = str[i++];
//			}*/
//			strncpy(_str + pos, str, len);
//			_size+=len;
//			return *this;
//		}
//		void resize(size_t n, char ch = '\0')
//		{
//			if (n < _size)
//			{
//				_str[n] = '\0';
//				_size = n;
//			}
//			else
//			{
//				if (n>_capacity)
//				{
//					size_t newcapacity = n;
//					char* newstr = new char[newcapacity + 1];
//					strcpy(newstr, _str);
//					delete[] _str;
//					_str = newstr;
//					_capacity = newcapacity;
//				}
//				// 5---13
//				for (size_t i = _size; i < n; ++i)
//				{
//					_str[i] = ch;
//				}
//				_size = n;
//				_str[_size] = '\0';
//			}
//		}
//		void erase(size_t pos, size_t len = npos)
//		{
//			if (len >= _size - pos)
//			{
//				_str[pos] = '\0';
//				_size = pos;
//			}
//			else
//			{
//				size_t i = pos + len;
//				while (i <= _size)
//				{
//					_str[i-len] = _str[i];
//					i++;
//				}
//				_size -= len;
//			}
//		}
//		size_t find(char ch, size_t pos = 0)
//		{
//			for (size_t i = pos; i < _size; ++i)
//			{
//				if (_str[i] == ch)
//				{
//					return i;
//				}
//			}
//
//			return npos;
//		}
//		size_t find(const char* str, size_t pos = 0)
//		{
//			char* p = strstr(_str, str);
//			if (p == nullptr)
//			{
//				return npos;
//			}
//			else
//			{
//				return p - _str;
//			}
//		}
//
//		bool operator<(const string& s)
//		{
//			int ret = strcmp(_str, s._str);
//			return ret<0;
//		}
//		bool operator==(const string& s)
//		{
//			int ret = strcmp(_str, s._str);
//			return ret==0;
//		}
//		bool operator<=(const string& s)
//		{
//			return *this<s || *this == s;
//		}
//		bool operator>(const string& s)
//		{
//			int ret = strcmp(_str, s._str);
//			return ret>0;
//		}
//		bool operator>=(const string& s)
//		{
//			return *this == s || *this > s;
//		}
//		bool operator!=(const string& s)
//		{
//			return !(*this == s);
//		}
//	private:
//		char* _str;
//		size_t _size;//已经有多少个有效字符
//		size_t _capacity;//能存多少个有效字符 \0不是有效字符
//		static size_t npos;
//	};
//	istream& operator>>(istream& in, string& s)
//	{
//		while (1)
//		{
//			char ch;
//			in >> ch;
//			if (ch == ' ' || ch == '\n')
//			{
//				break;
//			}
//			else
//			{
//				s += ch;
//			}
//
//		}
//		return in;
//	}
//	ostream& operator<<(ostream& out, const string& s)
//	{
//		for (size_t i = 0; i < s.size(); i++)
//		{
//			cout << s[i];
//		}
//		return out;
//	}
//	void test_string1()
//	{
//		string s1;
//		string s2("hello");
//		cout << s1 << endl;
//		cout << s2 << endl;
//		for (size_t i = 0; i < s2.size(); i++)
//		{
//			s2[i] += 1;
//			cout << s2[i] << " ";
//		}
//		cout << endl;
//		string::iterator it2 = s2.begin();
//		while (it2 != s2.end())
//		{
//			*it2 -= 1;
//			cout << *it2 << " ";
//			it2++;
//		}
//		cout << endl;
//
//
//		//范围for是由迭代器支持的。也就是说这段代码最终会被编译器替换成迭代器
//		for (auto e : s2)
//		{
//			cout << e << " ";
//		}
//		cout << endl;
//	}
//
//	void test_string2()
//	{
//		string s1("hello");
//		s1.push_back(' ');
//		s1.push_back('w');
//		s1.push_back('o');
//		s1.append("orld vxxxxxxxxxx");
//		//cout << s1 << endl;
//		s1 += "hedenghui";
//		s1 +=' ';
//		s1 += "nb";
//		string s2("hhhhh");
//		s2.insert(3, "ddddddddd");
//		cout << s2 << endl;
//	}
//	void test_string3()
//	{
//		string s1("hellohedenghui");
//		s1.erase(2, 3);
//		cout << s1 << endl;
//	}
//}