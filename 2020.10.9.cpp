class Num
{
public:
	Num()
	{
		_num += _i;
		_i++;
	}
	static int GetNum()
	{
		return _num;
	}
	static void init()
	{
		_i = 1;
		_num = 0;
	}
private:
	static int _num;
	static int _i;
};
int Num::_num = 0;
int Num::_i = 1;
class Solution {
public:
	int Sum_Solution(int n) {
		Num::init();

		Num a[n];
		return Num::GetNum();
	}
};