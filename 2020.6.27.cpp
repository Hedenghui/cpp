#include<iostream>
using namespace std;
#include<vector>
class Gift {
public:
	int getValue(vector<int> gifts, int n) {
		if (gifts.size()<n) return 0;
		if (gifts.size() == 0) return 0;
		int count = 0, temp;
		for (int i = 0; i<n; i++)
		{
			if (count == 0)
			{
				temp = gifts[i];
				count = 1;
			}
			else{
				if (temp == gifts[i])
					count++;
				else
					count--;
			}
		}
		int size = 0;
		for (int i = 0; i<n; i++){
			if (temp == gifts[i])
				size++;
		}
		return (size>n / 2) ? temp : 0;
	}
};

int main()
{
	return 0;
}