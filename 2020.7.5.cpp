//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	while (cin >> n)
//	{
//		if (n == 0)
//			break;
//		if (n == 1)
//			cout << "0" << endl;
//		else if (n % 2 == 0)
//		{
//			int i = 0;
//			while (n>3)
//			{
//				n /= 2;
//				i++;
//			}
//			cout << i + 1 << endl;
//		}
//		else
//		{
//			n = n - 1;
//			int j = 0;
//			while (n>3)
//			{
//				n /= 2;
//				j++;
//			}
//			cout << j + 1 << endl;;
//		}
//	}
//	return 0;
//}

#include <iostream>
 #include <cmath>
 #include <cstdio>
 using namespace std;

 int main()
 {
	     int n;
	     while (~scanf_s("%d", &n))
		     {
		         if (n == 0) break;
	        if (n == 1)
			         {
			             cout << "0" << endl;
			             continue;
			         }
		         int count = 0, flag = 0;
		         while (n)
			         {
			             if (n % 3 && n != 1)
				                 flag++;
			            n /= 3;
			             count++;
			        }
		         if (flag == 0)
			            count--;
		         cout << count << endl;
		     }
	     return 0;
	 }