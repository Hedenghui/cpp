#include<iostream>
using namespace std;
#include<string>
// Student��_num��Person��_num�������ع�ϵ�����Կ�������������Ȼ���ܣ����Ƿǳ����׻���
//class Person
//{
//protected:
//	string _name = "С����"; // ����
//	int _num = 111; // ���֤��
//};
//class Student : public Person
//{
//public:
//	void Print()
//	{
//		cout << " ����:" << _name << endl;
//		cout << " ���֤��:" << _num << endl;
//		cout << " ѧ��:" << _num << endl;
//	}
//protected:
//	int _num = 999; // ѧ��
//};
//void Test()
//{
//	Student s1;
//	s1.Print();
//};
//int main()
//{
//	Test();
//	return 0;
//}

//class Person
//{
//public:
//	string _name; // ����
//};
//class Student : virtual public Person
//{
//protected:
//	int _num; //ѧ��
//};
//class Teacher : virtual public Person
//{
//protected:
//	int _id; // ְ�����
//};
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // ���޿γ�
//};
//void Test()
//{
//	Assistant a;
//	a._name = "peter";
//	cout << a._name << endl;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


#include <iostream>
#include <string>
using namespace std;

//class Person
//{
//public:
//	Person(const char* name = "peter")
//		: _name(name)
//	{
//		cout << "Person()" << endl;
//	}
//
//	Person(const Person& p)
//		: _name(p._name)
//	{
//		cout << "Person(const Person& p)" << endl;
//	}
//
//	Person& operator=(const Person& p)
//	{
//		cout << "Person operator=(const Person& p)" << endl;
//		if (this != &p)
//			_name = p._name;
//
//		return *this;
//	}
//
//	~Person()
//	{
//		cout << "~Person()" << endl;
//	}
//protected:
//	string _name; // ����
//};
//
//class Student : public Person
//{
//public:
//	Student(const char* name, int stuid)
//		:Person(name)
//		,_stuid(stuid)
//	{
//		cout << "Student()" << endl;
//	}
//
//	Student(const Student& s)
//		:Person(s)
//		, _stuid(s._stuid)
//	{
//		cout << "Student(const Student& s)" << endl;
//	}
//
//	// s1 = s3
//	Student& operator=(const Student& s)
//	{
//		if (this != &s)
//		{
//			Person::operator=(s);
//			_stuid = s._stuid;
//			cout << "Student& operator=(const Student& s)" << endl;
//
//		}
//
//		return *this;
//	}
//
//	~Student()  // ��������������͸�������������������أ���Ϊ���ǵ����ֻᱻ������ͳһ�����destructor������̬�йأ�
//	{
//		//Person::~Person(); // ��ȷ���÷�����Ҫ����ʾ���ã��������Զ����ø���
//
//		cout << "~Student()" << endl;
//	}
//protected:
//	int _stuid;
//};
//
//// ������һ�����ܱ��̳е��ࣿ
//class A
//{
//private:
//	A()
//	{}
//};
//
//class B : public A
//{};
//
//int main()
//{
//	//Student s1("jack", 1);
//	//Student s;
//
//	//Student s2(s1);
//
//	//Student s3("rose", 2);
//
//	//s1 = s3;
//	//B b;
//
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
//	friend void Display(const Person& p, const Student& s);
//protected:
//	int _stuNum; // ѧ��
//};
//
//void Display(const Person& p, const Student& s)
//{
//	cout << p._name << endl;
//	cout << s._stuNum << endl;
//}
//
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
//public:
//	string _name; // ����
//	static int _count; // ͳ���˵ĸ�����
//};
//
//int Person::_count = 0;
//
//class Student : public Person
//{
//protected:
//	int _stuNum; // ѧ��
//};
//
//int main()
//{
//	Person p;
//	Student s;
//	p._name = "jack";
//	s._name = "rose";
//
//	p._count = 1;
//	s._count = 2;
//
//	Person::_count++;
//	cout << Person::_count << endl;
//	cout << Student::_count << endl;
//
//
//
//	return 0;
//}

//class Person
//{
//public:
//	string _name; // ����
//};
//class Student : virtual public Person
//{
//protected:
//	int _num; //ѧ��
//};
//class Teacher : virtual public Person
//{
//protected:
//	int _id; // ְ�����
//};
//class Assistant : public Student, public Teacher
//{
//protected:
//	string _majorCourse; // ���޿γ�
//};
//void main()
//{
//	// �������ж������޷���ȷ֪�����ʵ�����һ��
//	Assistant a;
//	a._name = "peter";
//
//	// ��Ҫ��ʾָ�������ĸ�����ĳ�Ա���Խ�����������⣬�����������������޷����
//	a.Student::_name = "xxx";
//	a.Teacher::_name = "yyy";
//}

// �ڴ����ģ�ͣ��������ڴ�������ô��ģ���

//class A
//{
//public:
//	//int _a[10000];
//	int _a;
//};
//
//class B : virtual public A
//{
//public:
//	int _b;
//};
//
//class C : virtual public A
//{
//public:
//	int _c;
//};
//
//class D : public B, public C
//{
//public:
//	int _d;
//};
//
//int main()
//{
//	D d;
//	cout << sizeof(d) << endl; // 20
//
//	/*d.B::_a = 1;
//	d.C::_a = 2;
//	d._b = 3;
//	d._c = 4;
//	d._d = 5;
//	d._a = 6;*/
//
//	return 0;
//}

//class Person {
//public:
//	virtual void BuyTicket() { cout << "��Ʊ-ȫ��" << endl; }
//
//private:
//	int _a;
//	char _ch;
//};
//int main()
//{
//	//cout << sizeof(Person) << endl;
//
//	return 0;
//}

class Person {
public:
	void BuyTicket() { cout << "��Ʊ-ȫ��" << endl; }
};

class Student : public Person {
public:
	virtual void BuyTicket() { cout << "��Ʊ-���" << endl; }

	/*ע�⣺����д�����麯��ʱ����������麯���ڲ���virtual�ؼ���ʱ����ȻҲ���Թ�����д(��Ϊ�̳к������麯�����̳������������������ɱ����麯������),���Ǹ���д�����Ǻܹ淶������������ʹ��*/
	/*void BuyTicket() { cout << "��Ʊ-���" << endl; }*/
};

void Func(Person* p)
{
	p->BuyTicket();
}

int main()
{
	Person ps;
	Student st;

	Func(&ps);
	Func(&st);

	return 0;
}