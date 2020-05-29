//���������������У���һ�����б�ʾջ��ѹ��˳��
//���жϵڶ��������Ƿ����Ϊ��ջ�ĵ���˳��
//����ѹ��ջ���������־�����ȡ�
//��������1,2,3,4,5��ĳջ��ѹ��˳������4,5,3,2,1�Ǹ�ѹջ���ж�Ӧ��һ���������У�
//��4,3,5,1,2�Ͳ������Ǹ�ѹջ���еĵ������С�
//��ע�⣺���������еĳ�������ȵģ�

#include<iostream>
using namespace std;
#include<vector>
#include<stack>
class Solution {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		//ջ��ģ�����
		stack<int> st;
		int pushi = 0, popi = 0;
		while (pushi<pushV.size())
		{
			st.push(pushV[pushi]);
			pushi++;
			while (!st.empty() && st.top() == popV[popi])
			{
				st.pop();
				++popi;
			}
		}
		return st.empty();
	}
};
int main()
{
	return 0;
}