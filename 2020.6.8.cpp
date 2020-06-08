#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	int a = 0, b = 1, c;
	while (N > b) {
		int c = a + b;
		a = b;
		b = c;
	}
	cout << min(N - a, b - N) << endl;
	return 0;
}