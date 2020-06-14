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
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> vv;
		queue<TreeNode*> q;
		if (root)
			q.push(root);
		while (!q.empty())
		{
			int levelSize = q.size();
			vector<int> v;
			for (size_t i = 0; i<levelSize; i++)
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
		return vv;
	}
};

int main()
{
	return 0;
}