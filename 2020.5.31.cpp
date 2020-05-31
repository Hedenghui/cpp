//�����沨����ʾ��������ʽ��ֵ��
//
//��Ч����������� + , -, *, / ��ÿ��������������������Ҳ��������һ���沨�����ʽ��
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
			//1.������ȡջ���ݽ�������
			//2.��������ջ
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