//给定一个整数数组 nums，其中恰好有两个元素只出现一次，其余所有元素均出现两次。 找出只出现一次的那两个元素。
#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		int val = 0;
		for (auto e : nums)
		{
			val ^= e;
		}
		size_t i = 0;
		for (; i<32; i++)
		{
			if (val&(1 << i))
				break;
		}
		int num1 = 0, num2 = 0;
		for (auto e : nums)
		{
			if (e&(1 << i))
			{
				num1 ^= e;
			}
			else
			{
				num2 ^= e;
			}
		}
		return vector<int>{num1, num2};
	}
};
int main()
{
	return 0;
}