#include<iostream>
using namespace std;

int main()
{
	int n; 
	cin >> n;
	
	for (int i = 1; i <= 10; i++)
	{
		string s;
		cin >> s;
		
		
		for (int j = 0 ; j < s.length() ; j++)
		{
			if (j % 2 == 0)
			{
				cout << s[j];
			}
		}
		cout << " ";
		
		
		for (int j = 0; j < s.length() ; j++)
		{
			if (j % 2 != 0)
			{
				cout << s[j];
			}
		}
		cout << endl;
	}
	
	return 0;
	
}
