#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {

		int size = numbers.size() / 2;
		sort(numbers.begin(), numbers.end());
		for (int i = 0; i + size<numbers.size(); i++)
		{
			if (numbers[i] == numbers[i + size])
				return numbers[i];
		}
		return 0;
	}
};
int main()
{
	return 0;
}