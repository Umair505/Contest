#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int val;
            cin >> val;
            s.insert(val);
        }
        else
        {
            if (s.empty())
            {
                cout << "empty\n";
            }
            else
            {
                cout << *s.begin() << "\n";
                s.erase(*s.begin());
            }
        }
    }

    return 0;
}