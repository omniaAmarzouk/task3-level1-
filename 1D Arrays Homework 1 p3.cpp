//Problem #3: Unique Numbers of an Ordered List

#include <iostream>
using namespace std;
int main()
{
	int n, numbers[999];
	cout << "Enter number: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cout << "Enter positive number <500 " << i + 1 << " : ", cin >> numbers[i];
	for (int i = 0; i < n; i++)
		if (numbers[i] != numbers[i + 1])
			cout << numbers[i] << " ";
	return 0;
}

