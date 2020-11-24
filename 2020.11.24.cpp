#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
		if (matrix.size() == 0 || matrix[0].size() == 0)
			return false;
		int hang = matrix.size();
		int size = matrix[0].size();
		int ret = matrix[0][size - 1];
		int i = 0, j = size - 1;

		while (j >= 0 && i<hang)
		{
			ret = matrix[i][j];
			if (ret>target)
				j--;
			else if (ret<target)
				i++;
			else
				return true;
		}
		return false;
	}
};

//class Solution {
//public:
//	bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
//		if (matrix.size() == 0)
//			return false;
//		for (vector<vector<int>>::iterator it = matrix.begin(); it != matrix.end(); ++it){
//			for (int i = 0; i < (*it).size(); ++i)
//			if ((*it)[i] == target)
//				return true;
//		}
//		return false;
//	}
//};

int main()
{
	return 0;
}