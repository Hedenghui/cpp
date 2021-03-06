#include<iostream>
using namespace std;
template<class K>
struct BSTreeNode // Binary Search Tree Node
{
	BSTreeNode<K>* _left;
	BSTreeNode<K>* _right;

	K _key;

	BSTreeNode(const K& key)
		:_left(nullptr)
		, _right(nullptr)
		, _key(key)
	{}
};

template<class K>
class BSTree // Binary Search Tree
{
	typedef BSTreeNode<K> Node;
public:
	bool Insert(const K& key)
	{
		if (_root == nullptr)
		{
			_root = new Node(key);
			return true;
		}

		Node* parent = nullptr;
		Node* cur = _root;
		while (cur)
		{
			if (cur->_key < key)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_key > key)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				return false;
			}
		}

		cur = new Node(key);
		if (parent->_key < key)
		{
			parent->_right = cur;
		}
		else
		{
			parent->_left = cur;
		}
		return true;
	}

	bool Find(const K& key)
	{
		Node* cur = _root;
		while (cur)
		{
			if (cur->_key < key)
			{
				cur = cur->_right;
			}
			else if (cur->_key > key)
			{
				cur = cur->_left;
			}
			else
			{
				return true;
			}
		}

		return false;
	}

	bool Erase(const K& key)
	{
		Node* parent = nullptr;
		Node* cur = _root;

		while (cur)
		{
			if (cur->_key < key)
			{
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_key > key)
			{
				parent = cur;
				cur = cur->_left;
			}
			else
			{
				// 找到了，开始删除
				// 1、左为空
				// 2、右为空
				// 3、左右都不为空
				if (cur->_left == nullptr)
				{
					if (parent->_right == cur)
						parent->_right = cur->_right;
					else
						parent->_left = cur->_right;

					delete cur;

				}
				else if (cur->_right == nullptr)
				{
					if (parent->_left == cur)
						parent->_left = cur->_left;
					else
						parent->_right = cur->_left;

					delete cur;
				}
				else
				{
					// 这里的逻辑还有问题？
					Node* rightMinParent = cur;
					Node* rightMin = cur->_right;
					while (rightMin->_left)
					{
						rightMinParent = rightMin;
						rightMin = rightMin->_left;
					}

					// 替代删除吗
					cur->_key = rightMin->_key;

					// 转换成删除rightMin
					if (rightMin == rightMinParent->_left)
						rightMinParent->_left = rightMin->_right;
					else
						rightMinParent->_right = rightMin->_right;
					delete rightMin;
				}


				return true;
			}
		}

		return false;
	}

	void _InOrder(Node* root)
	{
		if (root == nullptr)
			return;

		_InOrder(root->_left);
		cout << root->_key << " ";
		_InOrder(root->_right);
	}

	void InOrder()
	{
		_InOrder(_root);
		cout << endl;
	}

private:
	Node* _root = nullptr;
};

void TestBSTree()
{
	BSTree<int> t;
	int a[] = { 5, 3, 4, 1, 7, 8, 2, 6, 0, 9 };
	for (auto e : a)
	{
		t.Insert(e);
	}

	t.InOrder();

	// 这里有问题？去思考为什么？怎么解决？
	t.Erase(7);
	t.InOrder();

	// 1、叶子
	t.Erase(2);
	t.InOrder();

	// 左为空，或者右为空
	t.Erase(8);
	t.Erase(1);
	t.InOrder();

	// 左为空，或者右为空
	t.Erase(5);
	t.InOrder();

	// 这里也有问题，大家先自己下去分析一下？
	for (auto e : a)
	{
		t.Erase(e);
		t.InOrder();
	}
}

int main()
{
	TestBSTree();
	return 0;
}