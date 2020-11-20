#include<iostream>
using namespace std;
#include<vector>
#include<unordered_set>

class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		unordered_set<int> uset;
		vector<int> vv;
		for (auto e : nums1)
		{
			uset.insert(e);
		}
		unordered_set<int> uset1;
		for (auto e : nums2)
		{
			uset1.insert(e);
		}
		for (auto e : uset1)
		{
			for (auto v : uset)
			{
				if (e == v)
				{
					vv.push_back(e);
				}
			}
		}
		return vv;
	}
};

int main()
{
	return 0;
}