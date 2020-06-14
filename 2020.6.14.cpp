#include<iostream>
using namespace std;
#include<string>

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	string tree2str(TreeNode* t) {
		string str;
		if (t == NULL)
		{
			return str;
		}
		str += to_string(t->val);
		if (t->left)
		{
			str += '(';
			str += tree2str(t->left);
			str += ')';
		}
		else if (t->right)
		{
			str += "()";
		}
		if (t->right)
		{
			str += '(';
			str += tree2str(t->right);
			str += ')';

		}
		return str;
	}
};

int main()
{
	return 0;
}