//Problem #1: Is the Array Increasing?

#include <iostream>
using namespace std;
int main()
{
	int n, numbers[200];
	bool in{ 1 };
	cout << "Enter any number: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cout << "Enter element " << i + 1 << " ", cin >> numbers[i];
	for (int i = 0; i < n-1; i++)
	{
		if (numbers[i+1] < numbers[i])
		{
			in = 0;
			break;
		}
	}
	if (in)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}

