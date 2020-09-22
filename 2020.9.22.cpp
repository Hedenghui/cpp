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
//	string _name = "peter"; // 姓名
//	int _age = 18; // 年龄
//};
//// 继承后父类的Person的成员（成员函数+成员变量）都会变成子类的一部分。这里体现出了Student和
////Teacher复用了Person的成员。下面我们使用监视窗口查看Student和Teacher对象，可以看到变量的复用。
////调用Print可以看到成员函数的复用。
//class Student : public Person
//{
//protected:
//	int _stuid; // 学号
//};
//class Teacher : public Person
//{
//protected:
//	int _jobid; // 工号
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
//	string _name; // 姓名
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
//	~Student()  // 子类的析构函数和父类的析构函数构成隐藏，因为他们的名字会被编译器统一处理成destructor（跟多态有关）
//	{
//		//Person::~Person(); // 正确的用法不需要你显示调用，结束后自动调用父类
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
	string _name; // 姓名
};
class Student : virtual public Person
{
protected:
	int _num; //学号
};
class Teacher : virtual public Person
{
protected:
	int _id; // 职工编号
};
class Assistant : public Student, public Teacher
{
protected:
	string _majorCourse; // 主修课程
};
void main()
{
	// 这样会有二义性无法明确知道访问的是哪一个
	Assistant a;
	a._name = "peter";

	// 需要显示指定访问哪个父类的成员可以解决二义性问题，但是数据冗余问题无法解决
	a.Student::_name = "xxx";
	a.Teacher::_name = "yyy";
}
