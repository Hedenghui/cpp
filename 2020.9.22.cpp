#include<iostream>
using namespace std;
#include<string>
//class Person
//{
//public:
//	void Print()
//	{
//		cout << "name:" << _name << endl;
//		cout << "age:" << _age << endl;
//	}
//protected:
//	string _name = "peter"; // ����
//	int _age = 18; // ����
//};
//// �̳к����Person�ĳ�Ա����Ա����+��Ա�����������������һ���֡��������ֳ���Student��
////Teacher������Person�ĳ�Ա����������ʹ�ü��Ӵ��ڲ鿴Student��Teacher���󣬿��Կ��������ĸ��á�
////����Print���Կ�����Ա�����ĸ��á�
//class Student : public Person
//{
//protected:
//	int _stuid; // ѧ��
//};
//class Teacher : public Person
//{
//protected:
//	int _jobid; // ����
//};
//int main()
//{
//	Student s;
//	Teacher t;
//	s.Print();
//	t.Print();
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
//int main()
//{
//	Student s1("jack", 1);
//	//Student s;
//
//	//Student s2(s1);
//
//	Student s3("rose", 2);
//
//	s1 = s3;
//	//B b;
//
//	return 0;
//}


class Person
{
public:
	string _name; // ����
};
class Student : virtual public Person
{
protected:
	int _num; //ѧ��
};
class Teacher : virtual public Person
{
protected:
	int _id; // ְ�����
};
class Assistant : public Student, public Teacher
{
protected:
	string _majorCourse; // ���޿γ�
};
void main()
{
	// �������ж������޷���ȷ֪�����ʵ�����һ��
	Assistant a;
	a._name = "peter";

	// ��Ҫ��ʾָ�������ĸ�����ĳ�Ա���Խ�����������⣬�����������������޷����
	a.Student::_name = "xxx";
	a.Teacher::_name = "yyy";
}
