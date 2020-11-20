#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>

class Solution {
public:
	int repeatedNTimes(vector<int>& A) {
		int size = A.size();
		int a;
		unordered_map<int, int> m;
		for (auto e : A)
		{
			m[e]++;
		}
		for (auto v : m)
		{
			if (v.second == (size / 2))
				a = v.first;
		}
		return a;
	}
};

int main()
{
	return 0;
}