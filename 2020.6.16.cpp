#include<iostream>
using namespace std;
#include<string>
//class person
//{
//public:
//	void print()
//	{
//		cout << "name:"<< _name << endl;
//		cout << "age:" << _age << endl;
//	}
//protected:
//	string _name = "peter";
//	int _age = 18;
//};
//class student :public person
//{
//private:
//	int _number;
//};
//class teacher :public person
//{
//private:
//	int _jobid;
//};
//
//int main()
//{
//	student s;
//	teacher t;
//	s.print();
//	t.print();
//	return 0;
//}


//class person
//{
//public:
//	void print()
//	{
//		cout << _name << endl;
//	}
//protected:
//
//	string _name="hedenghui";
//private:
//	int _age;
//};
//
//class student :private person
//{
//protected:
//	int member;
//};
//int main()
//{
//	student s;
//	s.print();
//	return 0;
//}


//class Person
//{
//protected:
//	string _name; // ����
//	string _sex; // �Ա�
//	int _age; // ����
//};
//class Student : public Person
//{
//public:
//	int _No; // ѧ��
//};
//void Test()
//{
//	Student sobj;
//	// 1.���������Ը�ֵ���������/ָ��/����
//	Person pobj = sobj;
//	Person* pp = &sobj;
//	Person& rp = sobj;
//
//	//2.��������ܸ�ֵ�����������
//	sobj = pobj;
//
//	// 3.�����ָ�����ͨ��ǿ������ת����ֵ���������ָ��
//	pp = &sobj;
//	Student* ps1 = (Student*)pp; // �������ת��ʱ���Եġ�
//	ps1->_No = 10;
//	
//
//	pp = &pobj;
//	Student* ps2 = (Student*)pp; // �������ת��ʱ��Ȼ���ԣ����ǻ����Խ����ʵ�����
//	ps2->_No = 10;
//}

//class person
//{
//protected:
//	string _name = "hedenghui";
//	int _num = 111;
//};
//
//class student :public person
//{
//public:
//	void print()
//	{
//		cout << "����:" << _name << endl;
//		cout << "���֤��:" << person::_num << endl;
//		cout << "ѧ��:" << _num << endl;
//	}
//protected:
//	int _num=999;
//};
//void test()
//{
//	student s1;
//	s1.print();
//}
//int main()
//{
//	test();
//	return 0;
//}


//class A
//{
//public:
//	void fun()
//	{
//		cout << "fun()" << endl;
//	}
//};
//
//class B :public A
//{
//public:
//	void fun(int i)
//	{
//		A::fun();
//		cout << "func(int i)" <<i<<  endl;
//	}
//};
//void test()
//{
//	B b;
//	b.fun(10);
//	/*A a;
//	a.fun();*/
//}
//int main()
//{
//	test();
//	return 0;
//}

//class person
//{
//public:
//	person(const char* name = "hedenghui")
//		:_name(name)
//	{
//		cout << "person()" << endl;
//	}
//	person(const person& p)
//		:_name(p._name)
//	{
//		cout << "Person(const Person& p)" << endl;
//	}
//	person& operator=(const person& p)
//	{
//		cout << "Person operator=(const Person& p)" << endl;
//		if (this != &p)
//			_name = p._name;
//
//		return *this;
//	}
//	~person()
//	{
//		cout << "~Person()" << endl;
//	}
//protected:
//	string _name; // ����
//
//};
//
//class Student : public person
//{
//public:
//	Student(const char* name, int num)
//		: person(name)
//		, _num(num)
//	{
//		cout << "Student()" << endl;
//	}
//
//	Student(const Student& s)
//		: person(s)
//		, _num(s._num)
//	{
//		cout << "Student(const Student& s)" << endl;
//	}
//
//	Student& operator = (const Student& s)
//	{
//		cout << "Student& operator= (const Student& s)" << endl;
//		if (this != &s)
//		{
//			person::operator =(s);
//			_num = s._num;
//		}
//		return *this;
//	}
//
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
//int main()
//{
//	Test();
//	return 0;
//}


//class Student;
//class Person
//{
//public:
//	friend void Display(const Person& p, const Student& s);
//protected:
//	string _name; // ����
//};
//class Student : public Person
//{
//protected:
//	int _stuNum; // ѧ��
//};
//void Display(const Person& p, const Student& s) {
//	cout << p._name << endl;
//	cout << s._stuNum << endl;
//}
//void main()
//{
//	Person p;
//	Student s;
//	Display(p, s);
//}


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
//	cout << " ���� :" << Person::_count << endl;
//	Student::_count = 0;
//	cout << " ���� :" << Person::_count << endl;
//}
//int main()
//{
//	TestPerson();
//	return 0;
//}

class A {
public:
	int _a;
};
// class B : public A
class B : virtual public A {
public:
	int _b;
};
// class C : public A
class C : virtual public A {
public:
	int _c;
};
class D : public B, public C {
public:
	int _d;
};
int main()
{
	D d;
	d.B::_a = 1;
	d.C::_a = 2;
	d._b = 3;
	d._c = 4;
	d._d = 5;
	return 0;
}