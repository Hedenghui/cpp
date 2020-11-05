#include<iostream>
using namespace std;
#include<vector>
struct TreeNode {
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
	TreeNode* _buildTree(vector<int>& inorder, vector<int>& postorder, int& prei, int inbegin, int inend)
	{
		if (inbegin>inend)
		{
			return NULL;
		}
		TreeNode* root = new TreeNode(postorder[prei]);
		int rooti = inend;
		while (rooti >= inbegin)
		{
			if (inorder[rooti] == postorder[prei])
				break;
			else
				rooti--;
		}
		if (rooti + 1 <= inend)
			root->right = _buildTree(inorder, postorder, --prei, rooti + 1, inend);
		else
			root->right = NULL;

		if (inbegin <= rooti - 1)
			root->left = _buildTree(inorder, postorder, --prei, inbegin, rooti - 1);
		else
			root->left = NULL;

		return root;
	}
	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
		int prei = postorder.size() - 1;
		int inbegin = 0, inend = inorder.size() - 1;
		return _buildTree(inorder, postorder, prei, inbegin, inend);
	}
};

int main()
{
	return 0;
}