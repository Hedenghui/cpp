#include<iostream>
using namespace std;
namespace bit_copy
{
	// C++ ��һ������������������ʵ��һ�� String �࣬
	// ����ʱ�䣬������Ҫ��߱� std::string �Ĺ��ܣ�������Ҫ������ȷ������Դ�� -> ����+����+����+operator=
	class string
	{
	public:
		string(const char* str = "")
			:_str(new char[strlen(str) + 1])
		{
			strcpy(_str, str);
		}

		// ��� - ��ͳд��
		// string s2(s1)
		/*	string(const string& s)
		:_str(new char[strlen(s._str)+1])
		{
		strcpy(_str, s._str);
		}*/

		// ��� - �ִ�д��  -- ���
		// string s2(s1)
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
		string tmp(s);
		swap(_str, tmp._str);
		}

		return *this;
		}*/

		// s1 = s2;
		// �������ɵľ��Ǵ�ֵ����
		string& operator=(string s)
		{
			swap(_str, s._str);
			return *this;
		}

		/*	string& operator=(const string& s)
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

		~string()
		{
			delete[] _str;
			_str = nullptr;
		}

		size_t size()
		{
			return strlen(_str);
		}

		char& operator[](size_t i)
		{
			return _str[i];
		}
	private:
		char* _str;
	};

	void test_string1()
	{
		string s1("hello");
		string s2(s1);
		for (size_t i = 0; i < s2.size(); ++i)
		{
			cout << s2[i];
		}
		cout << endl;

		string s3("world");
		s1 = s3;
		for (size_t i = 0; i < s1.size(); ++i)
		{
			cout << s1[i];
		}
		cout << endl;
	}
}
int main()
{
	return 0;
}