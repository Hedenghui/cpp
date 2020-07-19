#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
	stack<int> s1;
	int n;
	while (cin >> n)
	{
		for (int i = 0; i<n; i++){
			string s;
			cin >> s;
			if (s[0] >= '0'&&s[0] <= '9'){
				int num = 0;
				for (int i = 0; i<s.length(); i++)
					num = num * 10 + s[i] - '0';
				s1.push(num);
			}
			else{
				int x = s1.top(); s1.pop();
				int y = s1.top(); s1.pop();
				if (s == "+")       s1.push(x + y);
				else if (s == "-")  s1.push(y - x);
				else if (s == "*")  s1.push(x*y);
				else if (s == "/")  s1.push(y / x);
			}
		}
		cout << s1.top() << endl;
	}
	return 0;
}