//Problem #2: Replace MinMax

#include <iostream>
using namespace std;
int main()
{
    int n, numbers[199];
    cout << "Enter number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cout << "Enter the positive element " << i + 1 << " <2000: ", cin >> numbers[i];
    int max = numbers[0], min = numbers[0];
    for (int i = 1; i < n; i++)
    {
        if (numbers[i] <min)
            min = numbers[i];
        else
            max = numbers[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (max == numbers[i])
            numbers[i] = min;
        else if (min == numbers[i])
            numbers[i] = max;
    }
    for (int i = 0; i < n; i++)
        cout << numbers[i] << " ";
        return 0;
}

