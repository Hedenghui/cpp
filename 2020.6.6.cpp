#include<iostream>
#include<string>
using namespace std;
bool Huiwen(string str3)
{

	int begin = 0;
	int end = str3.length() - 1;
	while (begin < end)
	{
		if (str3[begin] != str3[end])
		{
			return false;
		}
		end--;
		begin++;
	}
	return true;
}

int main()  
{    
	string str1,str2,temp;    
	int count,len;    
	while(cin>>str1>>str2)    
	{        
		count = 0;        
		temp=str1;        
		len=str1.length()+1;        
		for(int i=0;i<len;i++)        
		{            
			str1=temp;            
			str1.insert(i,str2);               
			if(Huiwen(str1))                       
				count=count+1;    
		}        
		cout<<count<<endl;    
	}    
	return 0;  
}




//#include<iostream>
//using namespace std;
//#include<string>
//bool huiwen(string str1)
//{
//
//	int length = str1.length();
//	for (int i = 0; i<length; i++)
//	{
//		if (str1[i] != str1[length - 1])
//			return false;
//		length = length - 1;
//	}
//	return true;
//}
//
//int main()
//{
//
//	int count = 0;
//	string str1;
//	cin >> str1;
//	string str2;
//	cin >> str2;
//	string temp;
//	temp = str1;
//	int len = str1.length() + 1;
//	for (int i = 0; i<len; i++)
//	{
//		str1 = temp;
//		str1.insert(i, str2);
//		if (huiwen(str1))
//		{
//			count++;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}