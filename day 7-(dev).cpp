#include<iostream>
using namespace std;

int main()
{
	int input[50], output[50],count;
	
	cout << "Enter number of elements in array\n";
	cin >> count;
	
	cout << "Enter " << count << " Numbers\n";
	
	for(int i = 0; i < count; i++ )
	{
		cin >> input[i];
	}
	
	// Copy numbers from input Array to output Array in reverse order
	
	for(int i = 0;i < count;i++)
	{
		output[i] = input[count-i-1];
	}
	// Print Reversed Array
	cout << "Reversed Array\n";
	for(int i = 0; i < count; i++)
	{
		cout << output[i] << " ";
	}
	return 0;
} 
