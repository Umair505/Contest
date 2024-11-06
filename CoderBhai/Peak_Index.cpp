#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<ll> pref(n);
        pref[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pref[i] = v[i] + pref[i - 1];
        }
        ll leftsum = 0;
        ll rightsum = 0;
        int cnt = 0;
        for (int i = 1; i < n - 1; i++)
        {

            leftsum = pref[i - 1];
            rightsum = pref[n - 1] - pref[i];

            if (leftsum == rightsum)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}