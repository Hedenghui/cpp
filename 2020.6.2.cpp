//i like beijing.
//beijing. like i
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<string> data;
	string tmp;
	while (cin >> tmp)
	{
		data.push_back(tmp);
		cout << tmp;
	}

	reverse(data.begin(), data.end());
	for (int i = 0; i < data.size(); i++)
	{
		if (i != data.size() - 1)
			cout << data[i] << " ";
		else
			cout << data[i];
	}

	return 0;
}
