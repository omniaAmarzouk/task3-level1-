//Problem #4: Digit Frequency

#include <iostream>
using namespace std;
int main()
{
    int n, m, appear[10]{ 0 };
    cout << "Enter num: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> m;
        if (m == 0)
            appear[0]++;
        else
            while (m)
            {
                int d = m % 10;
                appear[d]++;
                m /= 10;
            }
    }
    for (int i = 0; i < 10; i++)
        cout << i << " " << appear[i] << endl;
}

    