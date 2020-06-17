#include<iostream>
using namespace std;


struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};
class Solution {
public:
	void ConvertList(TreeNode* cur, TreeNode*& prev)
	{
		if (cur == NULL)
			return;
		ConvertList(cur->left, prev);

		cur->left = prev;

		if (prev)
			prev->right = cur;
		prev = cur;
		ConvertList(cur->right, prev);

	}
	TreeNode* Convert(TreeNode* pRootOfTree)
	{
		TreeNode* prev = NULL;
		ConvertList(pRootOfTree, prev);
		TreeNode* head = pRootOfTree;
		while (head&&head->left)
			head = head->left;
		return head;
	}
};
int main()
{
	return 0;
}