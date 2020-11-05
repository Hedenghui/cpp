//实验三

//#include<iostream>
//using namespace std;
//#include<string>
//class Building
//{
//public:
//	Building(string address="辛家庙",int BuildNum=0)
//	:_address(address)
//	, _BuildNum(BuildNum)
//	{}
//private:
//	string _address;
//	int _BuildNum;
//};
//class House :public Building
//{
//public:
//	House(string address="0",int BuildNum=0,int HouseNum=0, double s=0)
//		:_HouseNum(HouseNum)
//		, _s(s)
//		, Building(address,BuildNum)
//	{
//		cout << address <<"-"<<BuildNum<< "-" << _HouseNum << "-" << _s << endl;
//	}
//private:
//	int _HouseNum;
//	double _s;
//};
//class Office :public Building
//{
//public:
//	Office(string address="0",int BuildNum=0,string Officename="0", string phonenum="0")
//		:_Officename(Officename)
//		, _phonenum(phonenum)
//		, Building(address, BuildNum)
//	{
//		cout << address <<"-"<<BuildNum<< "-" << _Officename << "-" << _phonenum << endl;
//	}
//
//private:
//	string _Officename;
//	string _phonenum;
//};
//
//int main()
//{
//	House H1("万寿路",40,20, 180);
//	Office O1("万寿路",10,"黄河宾馆", "10086");
//	system("pause");
//	return 0;
//}



//实验四
//重载
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//class Mystring
//{
//public:
//	Mystring(char *s){
//		str = new char[strlen(s) + 1];
//		strcpy(str, s);
//	}
//	~Mystring(){
//		delete[] str;
//	}
//	
//	
//
//	Mystring &operator +(Mystring &mystr)
//	{
//		Mystring *temp=new Mystring("");
//		temp->str=new char[strlen(str)+strlen(mystr.str)+1];
//		strcpy(temp->str,str);
//		strcat(temp->str,mystr.str);
//		return *temp;
//	}
//
//	void show(){
//		cout << str << endl;
//	}
//private:
//	char *str;
//};
//
//int main()
//{
//	Mystring str1("hello,");
//	Mystring str2("world!");
//	Mystring str3("");
//	str3 = str1 + str2;
//	str3.show();
//	system("pause");
//	return 0;
//}


//虚函数
//#include<iostream>
//using namespace std;
//
//class Circle
//{
//	
//public:
//	Circle(double radius = 0)
//		:_radius(radius)
//	{}
//	virtual void area()
//	{}
//	virtual void volume()
//	{}
//public:
//	double _radius;
//};
//class Sphere :public Circle
//{
//public:
//	Sphere(int _radius)
//		:Circle(_radius)
//	{}
//	virtual void area()
//	{
//		double s = 4 * 3.14*_radius*_radius;
//		cout << s << endl;
//	}
//	virtual void volume()
//	{
//		double v = (4 * 3.14*_radius*_radius*_radius) / 3;
//		cout << v << endl;
//	}
//};
//class Column :public Circle
//{
//public:
//	Column(int h=0,double _radius=0)
//		:_h(h)
//		, Circle(_radius)
//	{}
//	virtual void area()
//	{
//		double s = 3.14*_radius*_radius*2+2*3.14*_radius*_h;
//		cout << s << endl;
//	}
//	virtual void volume()
//	{
//		double v = 3.14*_radius*_radius*_h;
//		cout << v << endl;
//	}
//private:
//	int _h;
//};
//
//int main()
//{
//	Circle* c1 = new Sphere(5);
//	c1->area();
//	c1->volume();
//	Circle* c2 = new Column(3,1);
//	c2->area();
//	c2->volume();
//	system("pause");
//	return 0;
//}





#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class fileoperate
{
public:
	fileoperate();
};

fileoperate::fileoperate()
{
	char letter[20];

	ofstream outfile;
	outfile.open("myfile", ios::out);

	cout << "写入文件->" << endl;
	cout << "输入学习的科目：" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "请输入第" << i + 1 << "个科目:" << endl;
		cout << "--->";
		cin.getline(letter, 100);
		cout << "\n";
		outfile << letter << endl;	//向文件写入数据

	}

	cout << "输入需要考试的科目(仅一门)：" << endl;
	cout << "--->";
	cin >> letter;
	cout << "\n";
	outfile << letter << endl;   //向文件写入数据

	outfile.close();			//关闭文件

	outfile.open("myfile", ios::app);

	cout << "写入追加内容（仅一项）：" << endl;
	cout << "--->";
	cin >> letter;
	cout << "\n";
	outfile << letter << endl;	//向文件写入数据
	cin.ignore();

	outfile << letter << endl;   //向文件写入数据

	outfile.close();

	ifstream infile;
	infile.open("myfile", ios::in);

	cout << "读取文件内容：" << endl;
	for (int i = 0; i < 5; i++)
	{
		infile >> letter;
		cout << "--->" << letter << endl;
	}

	infile.close();
}


int main()
{
	fileoperate fiop;

	system("pause");
	return 0;
}