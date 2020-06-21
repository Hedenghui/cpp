#include<iostream>
using namespace std;

int getTotalCount(int month){
	int res;
	if (month == 1 || month == 2)
		res = 1;
	else
		res = getTotalCount(month - 1) + getTotalCount(month - 2);
	return res;
}
int main(){
	int month;
	while (cin >> month){

		int num = getTotalCount(month);
		cout << num << endl;
	}
	return 0;
}