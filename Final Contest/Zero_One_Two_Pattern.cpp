#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int numb = 1;
    for (int row = 0; row < 2 * n - 1; row++)
    {

        for (int col = 0; col < 2 * n - 1; col++)
        {
            if (numb > 2)
                numb = 0;

            if (row == col || (row + col) == (2 * n - 1) - 1)
            {
                cout << numb;
            }
            else
                cout << " ";
        }
        numb++;
        cout << endl;
    }
    return 0;
}