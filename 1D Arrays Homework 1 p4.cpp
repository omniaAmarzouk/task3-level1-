//Problem #4: Is it a Palindrome?

#include <iostream>
using namespace std;
int main()
{
	int n, arr[999];
	bool pal{ 1 };
	cout << "Enter any number: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cout << "Enter number " << i + 1 << " : ", cin >> arr[i];
	for (int i = 0; i < n; i++)
	{
		if (arr[n - i - 1] != arr[i])
		{
			pal = 0;
			break;
		}
	}
	if (pal)
		cout << "Yes";
	else
		cout << "No";
}

