#include<iostream>
using namespace std;
#include<string>
int main()
{
	string st;
	int grade = 0;
	while (getline(cin, st))
	{
		int grade = 0;
		if (st.size() <= 4)
			grade += 5;
		if (st.size() >= 5 && st.size() <= 7)
			grade += 10;
		if (st.size() >= 8)
			grade += 25;

		int Alpha = 0, alpha = 0, number = 0, number_count = 0, ch = 0, ch_count = 0;
		for (int i = 0; i < st.size(); i++)
		{
			if (st[i] >= 'a'&&st[i] <= 'z')
				alpha = 1;
			else if (st[i] >= 'A'&&st[i] <= 'Z')
				Alpha = 1;
			else if (isdigit(st[i]))
			{
				number = 1;
				number_count += 1;
			}
			else
			{
				ch = 1;
				ch_count += 1;
			}
		}

		if (Alpha == 0 && alpha == 0)
			grade += 0;
		else if ((Alpha == 1 && alpha == 0)||(Alpha == 0 && alpha == 1))
			grade += 10;
		else if (alpha == 1 && Alpha == 1)
			grade += 20;
		
		if (number == 0)
			grade += 0;
		else if (number_count == 1)
			grade += 10;
		else
			grade += 20;

		if (ch == 0)
			grade += 0;
		else if (ch_count == 1)
			grade += 10;
		else
			grade += 25;

	
		if (Alpha && alpha && number && ch){
			grade += 5;
		}
		else if ((Alpha || alpha) && number && ch){
			grade += 3;
		}
		else if ((Alpha || alpha) && number){
			grade += 2;
		}

		if (grade >= 90)
			cout << "VERY_SECURE" << endl;
		else if (grade >= 80 && grade < 90)
			cout << "SECURE" << endl;
		else if (grade >= 70 && grade < 80)
			cout << "VERY_STRONG" << endl;
		else if (grade >= 60 && grade < 70)
			cout << "STRONG" << endl;
		else if (grade >= 50 && grade < 60)
			cout << "AVERAGE" << endl;
		else if (grade >= 25 && grade < 50)
			cout << "WEAK" << endl; 
		else
			cout << "VERY_WEAK" << endl;
	}
	return 0;
}