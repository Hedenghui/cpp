#include<iostream>
using namespace std;
#include<vector>
#include<stack>
#include<cstring>
#include<string>
class Solution {
public:
	int evalRPN(vector<string>& tokens) {
		stack<int> s;
		int i = 0;
		for (auto& str : tokens)
		{

			if (str == "+")
			{
				int a = s.top();
				s.pop();
				int b = s.top();
				s.pop();
				int c = a + b;
				s.push(c);
			}
			else if (str == "-")
			{
				int a = s.top();
				s.pop();
				int b = s.top();
				s.pop();
				int c = b - a;
				s.push(c);
			}
			else if (str == "*")
			{
				int a = s.top();
				s.pop();
				int b = s.top();
				s.pop();
				int c = a*b;
				s.push(c);
			}
			else if (str == "/")
			{
				int a = s.top();
				s.pop();
				int b = s.top();
				s.pop();
				int c = b / a;
				s.push(c);
			}
			else
			{
				s.push(stoi(str));
			}
		}
		return s.top();
	}
};

int main()
{
	return 0;
}