#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	static int MoreThanHalfNum_Solution(vector<int>& numbers) {
		//int* a = new int[10]{0};
		int b[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
		int size = numbers.size();
		for (auto& e : numbers)
		{
			b[e]++;
		}
		for (int i = 0; i<(sizeof(b) / sizeof(int)); i++)
		{
			if (b[i]>(size / 2))
			{
				return i;
			}
		}
		return 0;

	}
};

//class Solution{
//public:
//	int MoreThanHalfNum_Solution(vector<int> numbers){
//		sort(numbers.begin(), numbers.end() - 1);
//		int ret = numbers[numbers.size() / 2];
//		int num = 0;
//		for (int i = 0; i<numbers.size(); i++)
//		{
//			if (ret == numbers[i])
//			{
//				num++;
//			}
//		}
//		if (num>numbers.size() / 2)
//		{
//			return ret;
//		}
//		return 0;
//	}
//};
int main()
{
	vector<int> v = { 1, 2, 3, 2, 2, 2, 5, 4, 2 };
	cout<<Solution::MoreThanHalfNum_Solution(v);
	return 0;
}