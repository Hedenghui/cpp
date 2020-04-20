//求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
#include<iostream>
using namespace std;
class Sum
{
public:
	Sum()
	{
		_sum += _i;
		++_i;
	}
	static int GetSum()
	{
		return _sum;
	}
	static void init()
	{
		_i = 1;
		_sum = 0;
	}
private:
	static int _i;
	static int _sum;
};
int Sum::_i = 1;
int Sum::_sum = 0;
class Solution {
public:
	int Sum_Solution(int n) {
		Sum::init();
		//Sum a[n];//c99变长数组
		Sum* p = new Sum[n];
		return Sum::GetSum();
	}
};
int main()
{
	return 0;
}