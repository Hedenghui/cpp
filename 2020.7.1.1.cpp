#include <iostream>
using namespace std;
int main(){
	double n, r;
	while (cin >> n >> r){
		if (n>2 * r*3.14)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;
	}
}

