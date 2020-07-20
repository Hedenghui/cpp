#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
	string str;
	while (getline(cin, str))
	{
		for (int i = 0; i<str.size(); i++){
			if (isdigit(str[i]))   cout << str[i];
		}
		cout << endl;
	}
	return 0;
}