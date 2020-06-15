#include<iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};
class Solution {
public:
	bool find(TreeNode* root, TreeNode* x)
	{
		if (root == NULL)
			return false;
		return root == x || find(root->left, x) || find(root->right, x);

	}
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (root == NULL)
			return NULL;

		if (root == p || root == q)
			return root;

		bool pInLeft, pInRight, qInLeft, qInRight;

		pInLeft = find(root->left, p);
		pInRight = !pInLeft;

		qInLeft = find(root->left, q);
		qInRight = !qInLeft;

		if ((pInLeft&&qInRight) || (pInRight&&qInLeft))
			return root;
		if (pInLeft&&qInLeft)
			return lowestCommonAncestor(root->left, p, q);
		if (pInRight&&qInRight)
			return lowestCommonAncestor(root->right, p, q);

		return NULL;


	}
};


int main()
{
	return 0;
}
