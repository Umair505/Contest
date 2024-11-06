#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << n;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i;
        }
        cout << endl;

        for (int i = 2; i < n; i++)
        {
            cout << i;
            for (int j = 2; j < n; j++)
            {
                cout << " ";
            }
            cout << n - i + 1 << endl;
        }
        for (int i = n; i >= 1; i--)
        {
            cout << i;
        }
    }
    return 0;
}