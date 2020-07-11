//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a[100] = { 2000 };
//	for (int i = 0; i<n; i++)
//	{
//		cin >> a[i];
//	}
//	int k;
//	cin >> k;
//	int min[100];
//	for (int j = 1; j <= n; j++)
//	{
//		min[j] = a[0];
//		for (int i = 1; i<n; i++)
//		{
//			if (a[i]<min[j])
//			{
//				min[j] = a[i];
//				a[i] = 2000;
//			}
//			else if (a[i] == min[j])
//				a[i] = 2000;
//			else
//				min[j] = min[j];
//		}
//		if (min[j] == a[0])
//			a[0] = 2000;
//	}
//	cout << min[k] << endl;
//
//	return 0;
//}

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int main(){
	int n;
	while (scanf("%d", &n) != EOF){
		priority_queue<int, vector<int>, greater<int>> Q;
		int tmp;
		for (int i = 0; i<n; i++){
			scanf("%d", &tmp);
			Q.push(tmp);
		}
		int k;
		scanf("%d", &k);
		tmp = Q.top();
		Q.pop();
		for (int i = 2; i <= k; i++){
			while (tmp == Q.top())
				Q.pop();
			tmp = Q.top();
			Q.pop();
		}
		printf("%d\n", tmp);
	}
}