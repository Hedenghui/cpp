#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<string>

//class Solution {
//public:
//	static vector<string> uncommonFromSentences(string A, string B) {
//		vector<string> v;
//		unordered_map<string, int> um;
//		string s;
//		for (int i = 0; i<A.size(); i++)
//		{
//			if (A[i] == ' ')
//			{
//				if (s != "")
//					um[s]++;
//				s = "";
//			}
//			else
//			{
//				s += A[i];
//			}
//		}
//		if (s != "")
//		{
//			um[s]++;
//			s = "";
//		}
//		for (int i = 0; i<B.size(); i++)
//		{
//			if (B[i] == ' ')
//			{
//				if (s != "")
//					um[s]++;
//				s = "";
//			}
//			else
//			{
//				s += B[i];
//			}
//		}
//		if (s != "")
//		{
//			um[s]++;
//			s = "";
//		}
//		unordered_map<string, int>::iterator it = um.begin();
//		while (it != um.end())
//		{
//			if ((*it).second == 1)
//				v.push_back((*it).first);
//		}
//		for (auto e : v)
//		{
//			cout << e << endl;
//		}
//		return v;
//	}
//};
//int main()
//{
//	string A = "this apple is sweet";
//	string B = "this apple is hdh";
//	Solution::uncommonFromSentences(A,B);
//	return 0;
//}


#include<sstream>
class Solution {
public:
	vector<string> uncommonFromSentences(string A, string B) {
		vector<string> ans;
		unordered_map<string, int> umap;
		string s;
		stringstream ss(A + " " + B);
		while (ss >> s){
			umap[s]++;
		}
		for (auto a : umap){
			if (a.second == 1){
				ans.push_back(a.first);
			}
		}
		return ans;
	}
};
int main()
{
	return 0;
}