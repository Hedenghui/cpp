//给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int value = 0;
		for (auto e : nums) {
			value ^= e;
		}
		return value;
	}
};
int main()
{
	return 0;
}
//0000
//0010=0010
//0010=0000
//0001=0001