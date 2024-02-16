//Problem #2: Search for a Number

#include <iostream>
using namespace std;
int main()
{
	int n, q, arr[200];
	cout << "Enter positive number: ";
	cin >> n;
	for (int i = 0; i < n; i++)
		cout << "Enter positive number <=500: ", cin >> arr[i];
	cout << "Enter positive number: ", cin >> q;
	while (q--)
	{
		int v, position{ -1 };
		cout << "Enter positive number <=500: ", cin >> v;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == v)
			{
				position = i;
				break;
			}
		}
		cout << position << endl;
	}

}

 