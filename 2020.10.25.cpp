#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<string>
#include<unordered_map>
//class Solution {
//public:
//	//1. ��map��¼ÿ�����ְ�����Ӧ��������ĸ
//	map<char, string> M = {
//		{ '2', "abc" }, { '3', "def" }, { '4', "ghi" }, { '5', "jkl" }, { '6', "mno" },
//		{ '7', "pqrs" }, { '8', "tuv" }, { '9', "wxyz" }
//	};
//	//2. �洢���ս������ʱ����ı���
//	vector<string> ans;
//	string current;
//
//	//3. DFS������index��������ʱ����ִ����±꣬
//	//ÿһ��digits[index]���ֶ�Ӧ��ʱ���current[index]��һλ��ĸ
//	void DFS(int index, string digits) {
//		//����
//		if (index == digits.size()) {
//			ans.push_back(current);
//			return;
//		}
//		//�ݹ����
//		//���ڵ�ǰ����ĵ�index������(digits[index])��
//		//ö�����Ӧ��������ĸ(M[digits[index]][i])
//		for (int i = 0; i < M[digits[index]].size(); i++) {
//			current.push_back(M[digits[index]][i]);     //��ʱ���ѹ��һ����ĸ
//			DFS(index + 1, digits);         //���ڵ�ǰλ��ѹ�����ĸ��һ�������Ϊǰ�ᣬ����ˡ���֧���ĺ������
//			current.pop_back();             //״̬��ԭ��������ʱ����� "ab" -> "a"����һ��ѭ������"ac" 
//		}
//	}
//
//	vector<string> letterCombinations(string digits) {
//		if (digits.size() == 0) {
//			return ans;
//		}
//		DFS(0, digits);
//		return ans;
//	}
//
//};



class Solution {
public:
	vector<string> letterCombinations(string digits) {
		vector<string> combinations;
		if (digits.empty()) {
			return combinations;
		}
		unordered_map<char, string> phoneMap{
			{ '2', "abc" },
			{ '3', "def" },
			{ '4', "ghi" },
			{ '5', "jkl" },
			{ '6', "mno" },
			{ '7', "pqrs" },
			{ '8', "tuv" },
			{ '9', "wxyz" }
		};
		string combination;
		backtrack(combinations, phoneMap, digits, 0, combination);
		return combinations;
	}

	void backtrack(vector<string>& combinations, const unordered_map<char, string>& phoneMap, const string& digits, int index, string& combination) {
		if (index == digits.length()) {
			combinations.push_back(combination);
		}
		else {
			char digit = digits[index];
			const string& letters = phoneMap.at(digit);
			for (const char& letter : letters) {
				combination.push_back(letter);
				backtrack(combinations, phoneMap, digits, index + 1, combination);
				combination.pop_back();
			}
		}
	}
};
int main()
{
	
	return 0;
}