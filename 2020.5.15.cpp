//����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
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