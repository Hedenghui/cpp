#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s))
	{
		map<string, int> m;
		string str;
		for (int i = 0; i<s.size(); i++)
		{
			if (s[i] == ' ' || s[i] == '.' || s[i] == ',')
			{
				if (str != "")
					m[str]++;
				str = "";
			}
			else
			{
				str += tolower(s[i]);
			}
		}
		for (auto e : m)
		{
			cout << e.first << ":" << e.second << endl;
		}
	}
	return 0;
}