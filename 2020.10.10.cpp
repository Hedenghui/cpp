/*思路：每出现一次，就在对应数组中计数+1*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	while (getline(cin, str))
	{
		int a[128] = { 0 };//保存出现次数
		bool flag = false;//判断是否找到
		for (int i = 0; i<str.size(); ++i)
			++a[str[i]];
		for (int i = 0; i<str.size(); ++i)
		if (a[str[i]] == 1)//判断是否是第一个只出现一次的字符
		{
			cout << str[i] << endl;
			flag = true;
			break;//注意要break;
		}
		if (flag == false)//如果没有找到
			cout << "-1" << endl;
	}
	return 0;
}