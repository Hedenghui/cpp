#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<functional>
class Solution {
public:
	vector<string> topKFrequent(vector<string>& words, int k) {
		map<string, int> m;
		for (auto e : words)
		{
			m[e]++;
		}
		multimap<int, string, greater<int>> mm;
		for (auto kv : m)
		{
			mm.insert(pair<int, string>(kv.second, kv.first));
		}
		vector<string> v;
		for (auto e : mm)
		{
			v.push_back(e.second);
			if (!(--k))
				break;
		}
		return v;
	}
};
int main()
{
	return 0;
}