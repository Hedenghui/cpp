#include<iostream>
using namespace std;
#include<vector>
#include<queue>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		vector<vector<int>> vv;
		queue<TreeNode*> q;
		if (root)
			q.push(root);
		while (!q.empty())
		{
			int size = q.size();
			vector<int> v;

			for (size_t i = 0; i<size; i++)
			{
				TreeNode* front = q.front();
				q.pop();
				v.push_back(front->val);
				if (front->left)
					q.push(front->left);
				if (front->right)
					q.push(front->right);
			}
			vv.push_back(v);
		}
		reverse(vv.begin(), vv.end());
		return vv;

	}
};
int main()
{
	return 0;
}