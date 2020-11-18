#include<iostream>
using namespace std;
#include<vector>
//#include <iostream>
//
//#define N 205
//using namespace std;
//int c[N][N];
//int x[N];
//int BestM[N];
//int n;
//int Bmin = 999999999;
//
//int sum(int k)
//{
//	int temp = 0;
//	for (int i = 1; i <= k; i++)
//		temp += c[i][x[i]];
//	return temp;
//}
//
//void backtrack(int t)
//{
//	if (t == n){
//		int ans = sum(n);
//		if (ans<Bmin){
//			Bmin = ans;
//			for (int i = 1; i <= n; i++)
//				BestM[i] = x[i];
//		}
//	}
//	else
//	for (int i = t; i <= n; i++) {
//		swap(x[t], x[i]);
//		if (sum(t)<Bmin)
//			backtrack(t + 1);
//		swap(x[t], x[i]);
//	}
//}
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	for (int j = 1; j <= n; j++)
//		cin >> c[i][j];
//	for (int i = 1; i <= n; i++)
//		x[i] = i;
//	backtrack(1);
////	cout << endl << "最优分配成本：" << Bmin << endl;
//
////	cout << endl << "最优成本方案：" << endl;
//
//	for (int i = 1; i <= n; i++)
//	{
//		cout << BestM[i] << " ";
//	}
//		//cout << "第 " << i << " 个人完成第 " << BestM[i] << " 项任务" << endl;
//	system("pause");
//	return 0;
//
//}



#define _CRT_SECURE_NO_WARNINGS

#include <iostream>  
using namespace std;
//#define len(a) (sizeof(a) / sizeof(a[0])) //数组长度  
int lis(int arr[], int len)
{

	int longest[100];
	for (int i = 0; i<len; i++)
		longest[i] = 1;

	for (int j = 1; j<len; j++) {
		for (int i = 0; i<j; i++) {
			if (arr[j]>arr[i] && longest[j]<longest[i] + 1){ //注意longest[j]<longest[i]+1这个条件，不能省略。  
				longest[j] = longest[i] + 1; //计算以arr[j]结尾的序列的最长递增子序列长度  
			}
		}
	}

	int max = 0;
	for (int j = 0; j<len; j++) {
		//cout << "longest[" << j << "]=" << longest[j] << endl;
		if (longest[j] > max) max = longest[j];  //从longest[j]中找出最大值  
	}
	return max;
}

int main()
{
	int arr[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int ret = lis(arr, n);
	cout << ret << endl;
	system("pause");
	return 0;
}