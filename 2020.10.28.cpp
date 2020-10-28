#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<stack>
class MyQueue {
public:
	// Initialize your data structure here.
	MyQueue() {}
	// Push element x to the back of queue. 
	void push(int x) {
		while (!order.empty()){   //将顺序栈元素出栈并压入逆序栈中
			reverse.push(order.top());
			order.pop();
		}
		reverse.push(x);
		while (!reverse.empty()) {  //把逆序栈元素出栈并压入顺序栈中，使得top=front
			order.push(reverse.top());
			reverse.pop();
		}
	}
	// Removes the element from in front of queue and returns that element.
	int pop() {
		int data = order.top();
		order.pop();
		return data;
	}
	// Get the front element.
	int peek() {
		return order.top();
	}
	// Returns whether the queue is empty.
	bool empty() {
		return order.empty();
	}
private:
	stack<int> order;   //top为queue的front
	stack<int> reverse; //与order逆序
};

/**
* Your MyQueue object will be instantiated and called as such:
* MyQueue* obj = new MyQueue();
* obj->push(x);
* int param_2 = obj->pop();
* int param_3 = obj->peek();
* bool param_4 = obj->empty();
*/

int main()
{
	return 0;
}
