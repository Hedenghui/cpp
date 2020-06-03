
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str, res, cur;
	cin >> str;
	for (int i = 0; i <= str.length(); i++){
		if (str[i] >= '0' && str[i] <= '9')cur += str[i];
		else{
			if (res.length()<cur.length())res = cur;
			cur = "";
		}
	}
	cout << res;
	return 0;
}
