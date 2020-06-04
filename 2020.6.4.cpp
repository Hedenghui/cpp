
#include<iostream>
using namespace std;
int main(){
	int x1, x2, x3, x4;
	cin >> x1 >> x2 >> x3 >> x4;
	if(x1+x2+x4 != x3)//判断是否无解-自相矛盾
		cout << "No" << endl;    
	else    
	{        
		int B = (x2+x4) / 2;        
		if(2*B != (x2+x4))//判断是否为非整数解        
		{            
			cout << "No" << endl;        
		}        
		else        
		{            
			int A = B + x1;            
			int C = B - x2;            
			cout << A << " " << B  << " "<< C << endl;        
		}    
	}
	return 0;
}