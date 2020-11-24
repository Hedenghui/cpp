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
	TreeNode* _buildTree(vector<int>& preorder, vector<int>& inorder, int& ret, int begin, int end) {
		if (begin>end)
			return NULL;
		TreeNode* rooti = new TreeNode(preorder[ret]);
		int set = begin;
		while (set<end)
		{
			if (inorder[set] == rooti->val)
				break;
			else
				set++;
		}
		if (begin <= set - 1)
			rooti->left = _buildTree(preorder, inorder, ++ret, begin, set - 1);
		else
			rooti->left = NULL;

		if (set + 1 <= end)
			rooti->right = _buildTree(preorder, inorder, ++ret, set + 1, end);
		else
			rooti->right = NULL;

		return rooti;
	}
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		int begin = 0;
		int end = preorder.size() - 1;
		int ret = 0;
		return _buildTree(preorder, inorder, ret, begin, end);
	}
};
int main()
{
	return 0;
}