#include<iostream>
using namespace std;
#include<string>
int main()
{
	string s;
	getline(cin, s);//Ҳ���������˼��

	size_t pos = s.rfind(' ');
	cout << s.size() - (pos + 1) << endl;
	return 0;
}