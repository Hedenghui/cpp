/*˼·��ÿ����һ�Σ����ڶ�Ӧ�����м���+1*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	while (getline(cin, str))
	{
		int a[128] = { 0 };//������ִ���
		bool flag = false;//�ж��Ƿ��ҵ�
		for (int i = 0; i<str.size(); ++i)
			++a[str[i]];
		for (int i = 0; i<str.size(); ++i)
		if (a[str[i]] == 1)//�ж��Ƿ��ǵ�һ��ֻ����һ�ε��ַ�
		{
			cout << str[i] << endl;
			flag = true;
			break;//ע��Ҫbreak;
		}
		if (flag == false)//���û���ҵ�
			cout << "-1" << endl;
	}
	return 0;
}