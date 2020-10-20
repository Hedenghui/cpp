#include<iostream>
using namespace std;
#include<vector>


class Solution {
public:
	int singleNumber(vector<int>& nums) {
		//ͳ�Ƴ�������32��λ1���ֵĴ���
		int bitsArray[32] = { 0 };
		for (auto val : nums)
		{
			for (size_t i = 0; i<32; i++)
			{
				if (val&(1 << i))
				{
					bitsArray[i]++;
				}
			}
		}
		int num = 0;
		for (size_t i = 0; i<32; i++)
		{
			if (bitsArray[i] % 3 == 1)
			{
				num |= (1 << i);
			}
		}
		return num;
	}
};
int main()
{
	return 0;
}