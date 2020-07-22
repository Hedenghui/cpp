#include <string>
#include <iostream>
using namespace std;
int main()
{
	string str;
	while (getline(cin, str))
	{
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '_')
			{
				str.erase(str.begin() + i);
				str[i] = str[i] - 32;
			}
		}
		for (int j = 0; j<str.size(); j++)
		{
			cout << str[j];
		}
		cout << endl;
	}
	return 0;
}