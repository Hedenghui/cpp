#include<iostream>
using namespace std;
#include<string>
class Solution {
public:
	int firstUniqChar(string s) {
		int* a = new int[128]{0};
		for (int i = 0; i<s.size(); i++)
		{
			a[s[i]]++;
		}
		for (int i = 0; i<s.size(); i++)
		{
			if (a[s[i]] == 1)
				return i;
		}
		return -1;
	}
};
int main()
{
	return 0;
}