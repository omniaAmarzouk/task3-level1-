//Problem #5: Unique Numbers of an Unordered List

#include <iostream>
using namespace std;
int main()
{
	int n, m, num[500]{ 0 };
	cout << "Enter number: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter number<=500: ";
		cin >> m;
		if (!num[m])
			cout << m << endl;
		num[m] = 1;
	}
}
  