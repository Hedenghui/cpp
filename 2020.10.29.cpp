#include<iostream>
using namespace std;
#include<vector>
#include<stack>


class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		stack<int> s;
		int i = 0;
		int j = 0;
		while (i<pushV.size())
		{
			s.push(pushV[i]);
			i++;
			while (!s.empty() && s.top() == popV[j])
			{
				s.pop();
				j++;
			}
		}
		return s.empty();
	}
};

int main()
{
	return 0;
}