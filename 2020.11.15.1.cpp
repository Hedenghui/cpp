#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>


class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		unordered_map<int, int> um;
		vector<int> vv;
		for (auto e : nums1)
		{
			um[e]++;
		}
		for (auto e : nums2)
		{
			for (auto v : um)
			{
				if (e == v.first)
				{
					if (v.second >= 1)
					{
						um[v.first]--;
						vv.push_back(e);
					}
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