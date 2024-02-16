//Problem #3: Find the Most Frequent Number

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter positive number: ";
	cin >> n;
	const int size = 270 + 500; //range
	int frequency[size] = { 0 };	

	for (int i = 0; i < n; i++)
	{
		int index;
		cout << "Enter index: ";
		cin >> index;
		index += 500;	
		frequency[index]++;
	}
    int rep = 0;
	for (int i = 0; i < size; i++)
	{
		if (frequency[rep] < frequency[i])
			rep = i;
	}
	cout << rep - 500 << " has repeated " << frequency[rep] << " times.";
}