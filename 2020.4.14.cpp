#include<iostream>
using namespace std;
//class Date
//{
//public:
//	//�޲ι��캯��
//	Date()
//	{
//
//	}
//	//���ι��캯��
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void TestDate()
//{
//	Date d1;//�����޲ι��캯��
//	Date d2(2020, 4, 14);//���ô��εĹ��캯��
//	//ע�⣺���ͨ���޲ι��캯����������ʱ��������治�ø����ţ�����ͳ��˺�������
//	//���´���ĺ�����������d3�������ú����޲Σ�����һ���������͵Ķ���
//	Date d3();
//}
//int main()
//{
//	TestDate();
//	return 0;
//}

//class Date
//{
//public:
//	//����û���ʽ�����˹��캯��������������������
//	/*Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void test()
//{
//	// û�ж��幹�캯��������Ҳ���Դ����ɹ�����˴˴����õ��Ǳ��������ɵ�Ĭ�Ϲ��캯��
//	Date d;
//}

//class Date
//{
//public:
//	Date()
//	{
//		_year = 2020;
//		_month = 4;
//		_day = 14;
//	}
//	Date(int year = 2020, int month = 4, int day = 14)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void Test()
//{
//	Date d2;
//}

class Time
{
public:
	Time()
	{
		cout << "time()" << endl;
		_hour = 0;
		_minute = 0;
		_second = 0;
	}
private:
	int _hour;
	int _minute;
	int _second;
};
class Date
{
private:
	//��������(��������)
	int _year;
	int _month;
	int _day;
	//�Զ�������
	Time _t;
};
int main()
{
	Date d;
	return 0;
}

//// ���ǿ�������������ǲ��Ǻܽ�Ӳ��
//class Date
//{
//public:
//	Date(int year)
//	{
//		// �����year�����ǳ�Ա���������Ǻ����βΣ�
//		year = year;
//	}
//private:
//	int year;
//};
//// ��������һ�㶼��������
//class Date
//{
//public:
//	Date(int year)
//	{
//		_year = year;
//	}
//private:
//	int _year;
//};
//// ����������
//class Date
//{
//public:
//	Date(int year)
//	{
//		m_year = year;
//	}
//private:
//	int m_year;
//};
//// ������ʽҲ���Եģ���Ҫ����˾Ҫ��һ�㶼�ǼӸ�ǰ׺���ߺ�׺��ʶ���־��С�