#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int n = 0;
		for (auto e : nums)
		{
			n ^= e;
		}
		return n;
	}
};
int main()
{
	return 0;
}