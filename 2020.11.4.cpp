#include<iostream>
using namespace std;
#include<vector>


//1
//int main()
//{
//	int i = 2;
//	for (i = 2; i <= 1000; i++)
//	{
//		vector<int> v;
//		for (int j = 1; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				v.push_back(j);
//			}
//		}
//		int h = 0;
//		for (auto e : v)
//		{
//			h += e;
//		}
//		if (h == i)
//		{
//			cout << h << " ";
//		}
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	for (int a = 0; a <= 9; a++)
//	{
//		for (int b = 0; b <= 9; b++)
//		{
//			for (int c = 0; c <= 9; c++)
//			{
//				for (int d = 0; d <= 9; d++)
//				{
//					for (int e = 0; e <= 9; e++)
//					{
//						if (e!=0&&((a * 1000 + b * 100 + c * 10 + d) + (a * 1000 + b * 100 + e * 10 + d) == (e * 10000 + d * 1000 + c * 100 + a * 10 + d)))
//						{
//							cout << a << " " << b << " " << c << " " << d << " " << e;
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int a[100000];
//	int ret = 0;
//	
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	int i = 0;
//	int j;
//	while (i<n)
//	{
//		j=a[i];
//		while (j == a[i])
//		{
//			i++;
//		}
//		ret++;
//	}
//	cout << ret;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//#include<algorithm>
//
//int main()
//{
//	int n;
//	cin >> n;
//	int a[100000];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a, a + n);
//	int min = abs(a[0] - a[1]);
//	for (int i = 1; i < n - 1; i++)
//	{
//		if (abs(a[i] - a[i + 1]) < min)
//			min = abs(a[i] - a[i + 1]);
//	}
//	cout << min;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//#include<algorithm>
//
//int main()
//{
//	int n;
//	cin >> n;
//	int a[100000];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a, a + n);
//	int count = 0;
//	for (int i = 0; i < n - 1; i++)
//	{
//		if (abs(a[i] - a[i + 1]) == 1)
//		{
//			count++;
//		}
//	}
//	cout << count;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//#include<vector>
//static int a = 1;
//int main()
//{
//	int n,m;
//	cin >> n >> m;
//	vector<int> v;
//	for (int i = 1; i <= n; i++)
//	{
//		v.push_back(i);
//	}
//	for (int i = 0; i < n; )
//	{
//		v[++i] = ++a;
//		if (v[i] % m == 0 || v[i] % 10 == m)
//		{
//			v.erase(v[i]);
//		}
//	}
//
//}
#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int strStr(string haystack, string needle) {
	if (needle.empty()) return 0;
	int i = 0, j = 0;
	int m = haystack.size(), n = needle.size();
	while (i < m && j < n) {
		if (haystack[i] == needle[j]) {
			i++;
			j++;
		}
		else {
			i = i - j + 1;
			j = 0;
		}
		if (j == n)
			return i - j;
	}
	return -1;
}
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	cout<<strStr(s1, s2);
	return 0;
}