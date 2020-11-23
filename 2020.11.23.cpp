#include<iostream>
using namespace std;
#include<string>
class Solution {
public:
	string replaceSpace(string s) {
		string s1;
		for (auto e : s)
		{
			if (e == ' ')
				s1 += "%20";
			else
				s1 += e;
		}
		return s1;
	}
};

int main()
{
	return 0;
}