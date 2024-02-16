//Problem #5: Smallest Pair

#include <iostream>
using namespace std;
int main()
{
	int n, arr[199];
	bool pal{ 1 };
	cout << "Enter any number: ";
	cin >> n;
	int min{ 10000 };
	for (int i = 0; i < n; i++)
		cout << "Enter number " << i + 1 << " : ", cin >> arr[i];
	for (int i = 0; i < n-1; i++)
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] + arr[j] + j - i < min)
				min = arr[i] + arr[j] + j - i;
		}
	cout << min;
	return 0;
}