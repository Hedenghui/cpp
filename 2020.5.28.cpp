//��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡���������һ������Ϊ9������{1,2,3,2,2,2,5,4,2}����������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��
#include<iostream>
#include<algorithm>
using namespace std;
#include<vector>
class Solution {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {

		int size = numbers.size() / 2;
		sort(numbers.begin(), numbers.end());
		for (int i = 0; (i + size)<numbers.size(); i++)
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