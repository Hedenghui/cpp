#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	int FindGreatestSumOfSubArray(vector<int> array) {
		int size = array.size();
		vector<int> dp(size + 1, 0);
		int ret = array[0];
		int tmp = 0;
		for (int i = 1; i <= size; i++)
		{
			dp[i] = max(array[i - 1], dp[i - 1] + array[i - 1]);
			ret = max(ret, dp[i]);
		}
		return ret;
	}
};
int main()
{
	return 0;
}
