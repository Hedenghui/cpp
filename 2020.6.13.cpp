#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int i)
{
	for (int j = 2; j <= sqrt(i * 1.0); j++) {
		if (i % j == 0)
			return false;
	}
	return true;
}

int main() {
	int n;
	int Prime1, Prime2;
	while (cin >> n) {
		for (int i = 1; i <= n / 2; i++) {
			if (isPrime(i) && isPrime(n - i)) {
				Prime1 = i;
				Prime2 = n - i;
			}
		}
		cout << Prime1 << endl;
		cout << Prime2 << endl;

	}
	return 0;
}