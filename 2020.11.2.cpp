#include<iostream>
using namespace std;
#include<string>
//class Price
//{
//public:
//	void s_c(double r)
//	{
//		s = 3.14*(r + 3)*(r + 3) - 3.14*r*r;
//		c = 2 * 3.14*r + 2 * 3.14*(r + 3);
//		auto s_price = s * 20;
//		auto c_price = c * 35;
//		cout << "过道造价:"<<s_price << "  " << "栅栏造价:"<<c_price << endl;
//	}
//	double r;
//private:
//	double s;
//	double c;
//};
//int main()
//{
//	Price a;
//	int n;
//	cin >> n;
//	a.s_c(n);
//	return 0;
//}



class Student
{
public:
	float team_grade=0;
	Student(string name, string num, float grade)
	{
		_name = name;
		_num = num;
		_grade = grade;
	}
	void Print()
	{
		cout<<_name <<"-"<< _num <<"-"<< _grade << endl;
	}
	~Student()
	{}
private:
	string _name;
	string _num;
public:
	float _grade;
};

int main()
{
	Student s1("贺登辉", "201805010", 55);
	Student s2("贺登辉", "201805010", 44);
	Student s3("贺登辉", "201805010", 33);
	s1.team_grade = s1._grade + s2._grade + s3._grade;
	s2.team_grade = s1._grade + s2._grade + s3._grade;
	s3.team_grade = s1._grade + s2._grade + s3._grade;
	cout <<"团队成绩"<<s1.team_grade << endl;
	s1.Print();
	s2.Print();
	s3.Print();
	return 0;
}
