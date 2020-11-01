#include<iostream>
using namespace std;
#include<vector>


//1
//int main()
//{
//	int n, m;
//	for (n=2; n <= 100; n++)
//	{
//		for (m=2; m < n; m++)
//		{
//			if (n%m == 0)
//				break;
//		}
//		if (m==n)
//		{
//			cout << n << endl;
//		}
//	}
//	return 0;
//}

//2.
//int main()
//{
//	vector<int> v;
//	for (int i= 0; i < 10; i++)
//	{
//		int m;
//		cin >> m;
//		v.push_back(m);
//	}
//	bool ret = true;
//	for (int i = 0; i < v.size()-1; i++)
//	{
//		for (int j = 0; j < v.size() - 1 - i; j++)
//		{
//			if (v[j]>v[j + 1])
//			{
//				swap(v[j], v[j + 1]);
//				ret = false;
//			}
//		}
//		if (ret)
//		{
//			break;
//		}
//	}
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}



#include<iostream>
#include<string>
using namespace std;

const int M = 2;
const int N = 2;
char name[M][20];
int score[M][N];

void Output()
{
	cout << "姓名" << " " << "高数" << " " << "英语" << endl;
	for (int i = 0; i < M; i++)
	{
		cout << name[i] << " ";
		for (int j = 0; j < N; j++)
		{
			cout << score[i][j] << " ";
		}
		cout << "\n" << endl;
	}
}

void Search()
{
	char Search_name[20] = { 0 };
	cout << "输入你要查询的学生姓名：" << endl;
	cin >> Search_name;
	for (int i = 0; i < M; i++)
	{
		if (strcmp(Search_name, name[i]) == 0)
		{
			cout << "姓名" << " " << "高数"<< " " << "英语" << endl;
			int j = 0;
			cout << name[i] << " " << score[i][j] << " " << score[i][j + 1] << endl;
			break;
		}
		if (i == (M - 1))
			cout << "没有此人"<< endl;
	}
}

void Sort()  
{
	int n = 0;
	cout << "请输入需要排名的成绩(高数0,英语1):" << endl;
	cin >> n;


	if (n == 0)
	{
		for (int i = 0; i < M - 1; i++)
		{
			for (int j = 1; j < M; j++)
			{
				if (score[i][n] > score[j][n])
				{
					swap(score[i][n], score[j][n]);
					swap(name[i], name[j]);
				}
			}
		}
		//打印排序后的
		for (int i = 0; i < M; i++)
		{
			cout << name[i] << " ";
			cout << score[i][n] << endl;
		}
	}
	if (n == 1)
	{
		for (int i = 0; i < M - 1; i++)
		{
			for (int j = 1; j < M; j++)
			{
				if (score[i][n] > score[j][n])
				{
					swap(score[i][n], score[j][n]);
					swap(name[i], name[j]);
				}
			}
		}
		//打印排序后的
		for (int i = 0; i < M; i++)
		{
			cout << name[i] << " ";
			cout << score[i][n] << endl;
		}
	}
}

void Input()
{
	for (int i = 0; i < M; i++) {
		cout << "输入学生姓名" << endl;
		cin >> name[i];
		cout << "分别输入" << N << "门课程的成绩" << endl;

		for (int j = 0; j < N; j++)
		{
			cin >> score[i][j];
		}
	}
}
int main()
{
	Input();
	Output();
	Search();
	Sort();
	return 0;
}