#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] <= 'E' && s[i] >= 'A')//����С��E��
				s[i] += 21;
			else if (s[i] >= 'F' && s[i] <= 'Z')//������������ĸ
				s[i] -= 5;
			else                       //����ո���������ַ�
				continue;
		}
		cout << s << endl;
	}
	return 0;
}