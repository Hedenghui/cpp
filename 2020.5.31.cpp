//根据逆波兰表示法，求表达式的值。
//
//有效的运算符包括 + , -, *, / 。每个运算对象可以是整数，也可以是另一个逆波兰表达式。
#include<iostream>
using namespace std;
#include<stack>
#include<vector>
#include<string>
class Solution {
public:
	int evalRPN(vector<string>& tokens) {
		stack<int> st;
		for (auto& str : tokens)
		{
			//1.操作符取栈数据进行运算
			//2.操作数入栈
			if (str == "+" || str == "-" || str == "/" || str == "*")
			{
				int right = st.top();
				st.pop();
				int left = st.top();
				st.pop();
				switch (str[0])
				{
				case '+':
					st.push(left + right);
					break;
				case'-':
					st.push(left - right);
					break;
				case'/':
					st.push(left / right);
					break;
				case'*':
					st.push(left*right);
					break;
				}
			}
			else
			{
				st.push(stoi(str));
			}
		}
		return st.top();
	}
};
int main()
{
	return 0;
}