//Problem #1: Find the Three Minimum Values

#include <iostream>
using namespace std;
int main()
{
	int n, numbers[10];
	cout << "Enter any number: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cout << "Enter element " << i + 1 << " ", cin >> numbers[i];
	int min = { 0 }, mid = { -1 }, max = { -1 };
	for (int i = 0; i < n; i++)
	{
		if (numbers[i] < numbers[min])
			min = i;
	}
	for (int i = 0; i < n; i++)
	{
		if (i == min)
			continue;
		if (mid == -1 || numbers[i] < numbers[mid])
			mid = i;
	}
	for (int i = 0; i < n; i++)
	{
		if (i == min||i==mid)
			continue;
		if (max == -1 || numbers[i] < numbers[max])
			max = i;
	}
	cout << numbers[min] << " " << numbers[mid] << " " << numbers[max];

	return 0;
	
}
   