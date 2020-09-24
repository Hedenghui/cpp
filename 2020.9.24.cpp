#include<iostream>
using namespace std;

//class A
//{
//public:
//	void fun()
//	{
//		cout << "func()" << endl;
//	}
//};
//class B : public A
//{
//public:
//	void fun(int i)
//	{
//		A::fun();
//		cout << "func(int i)->" << i << endl;
//	}
//};
//void Test()
//{
//	B b;
//	b.fun(10);
//};
//
//int main()
//{
//	Test();
//	return 0;
//}


//class Person
//{
//public:
//	Person(const char* name = "peter")
//		: _name(name)
//	{
//		cout << "Person()" << endl;
//	}
//	Person(const Person& p)
//		: _name(p._name)
//	{
//		cout << "Person(const Person& p)" << endl;
//	}
//	Person& operator=(const Person& p)
//	{
//		cout << "Person operator=(const Person& p)" << endl;
//		if (this != &p)
//			_name = p._name;
//		return *this;
//	}
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//protected:
//	string _name; // ����
//};
//class Student : public Person
//{
//public:
//	Student(const char* name, int num)
//		: Person(name)
//		, _num(num)
//	{
//		cout << "Student()" << endl;
//	}
//	Student(const Student& s)
//		: Person(s)
//		, _num(s._num)
//	{
//		cout << "Student(const Student& s)" << endl;
//	}
//	Student& operator = (const Student& s)
//	{
//		if (this != &s)
//		{
//			Person::operator =(s);
//			_num = s._num;
//		}
//		cout << "Student& operator= (const Student& s)" << endl;
//		return *this;
//	}
//	~Student()
//	{
//		cout << "~Student()" << endl;
//	}
//protected:
//	int _num; //ѧ��
//};
//void Test()
//{
//	Student s1("jack", 18);
//	Student s2(s1);
//	Student s3("rose", 17);
//	s1 = s3;
//}


//
//class Person
//{
//public:
//	Person() { ++_count; }
//protected:
//	string _name; // ����
//public:
//	static int _count; // ͳ���˵ĸ�����
//};
//int Person::_count = 0;
//class Student : public Person
//{
//protected:
//	int _stuNum; // ѧ��
//};
//class Graduate : public Student
//{
//protected:
//	string _seminarCourse; // �о���Ŀ
//};
//void TestPerson()
//{
//	Student s1;
//	Student s2;
//	Student s3;
//	Graduate s4;
//	cout << " ���� :" << Student::_count << endl;
//	Student::_count = 0;
//	cout << " ���� :" << Graduate::_count << endl;
//}

//
//
//
//class Person
//{
//public:
//	int _name; // ����
//};
//class Student :virtual public Person
//{
//protected:
//	int _num; //ѧ��
//};
//class Teacher :virtual public Person
//{
//protected:
//	int _id; // ְ�����
//};
//class Assistant : public Student, public Teacher
//{
//protected:
//	int _majorCourse; // ���޿γ�
//};
//void Test()
//{
//	cout << sizeof(Assistant) << endl;
//}
//int main()
//{
//	Test();
//	return 0;
//}


class A
{
public:
	virtual void func(int val = 1){ std::cout << "A->" << val << std::endl; }
	virtual void test(){ func(); }
};
class B : public A
{
public:
	void func(int val = 0){ std::cout << "B->" << val << std::endl; }
};
int main(int argc, char* argv[])
{
	B*p = new B;
	p->test();
	return 0;
}