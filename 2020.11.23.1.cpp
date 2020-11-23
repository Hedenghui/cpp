#include<iostream>
using namespace std;
#include<vector>

struct ListNode {
    int val;
    ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	vector<int> reversePrint(ListNode* head) {
		vector<int> v;
		if (head == NULL)
		{
			return v;
		}
		v.push_back(head->val);
		ListNode* node = head;
		while (node->next)
		{
			node = node->next;
			v.push_back(node->val);
		}
		vector<int> rv;
		vector<int>::reverse_iterator rit = v.rbegin();
		while (rit != v.rend())
		{
			rv.push_back(*rit);
			rit++;
		}
		return rv;
	}
};

int main()
{
	return 0;
}