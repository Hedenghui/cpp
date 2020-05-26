//���һ��֧�� push ��pop ��top �����������ڳ���ʱ���ڼ�������СԪ�ص�ջ��
#include<iostream>
#include<stack>
using namespace std;
class MinStack {
public:
	/** initialize your data structure here. */
	MinStack() { }

	void push(int x) {
		_st.push(x);
		if (_minst.empty() || _minst.top() >= x)
		{
			_minst.push(x);
		}
	}

	void pop() {
		if (_st.top() == _minst.top())
			_minst.pop();

		_st.pop();
	}

	int top() {
		return _st.top();
	}

	int getMin() {
		return _minst.top();
	}

	stack<int> _st;
	stack<int> _minst;
};
int main()
{
	return 0;
}