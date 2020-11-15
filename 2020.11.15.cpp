#include<iostream>
using namespace std;
#include<unordered_map>
#include<vector>

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		unordered_map<int, int> um;
		for (auto e : nums)
		{
			um[e]++;
		}
		for (auto e : um)
		{
			if (e.second>1)
				return true;
		}
		return false;
	}
};
int main()
{
	return 0;
}