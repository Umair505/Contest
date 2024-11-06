#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;

    while (test--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        set<int> s;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }

        int missing = 0;

        for (int i = 1; i <= n; i++)
        {
            if (s.find(i) == s.end())
            {
                missing++;
            }
            if
        }

        if (missing <= k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}