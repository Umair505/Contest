#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    } 
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            ans = max(ans,v[i]);
        }
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                int sum = v[i]+v[j];
                if(sum%2==0)
                {
                    ans = max(ans,sum);
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int maxm = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0 && a[i] > maxm)
        {
            maxm = a[i];
        }

        for (int j = i + 1; j < n; j++)
        {
            if ((a[i] + a[j]) % 2 == 0 && (a[i] +a[j]) > maxm)
            {
                maxm = a[i] + a[j];
            }
        }
    }

    cout << maxm << endl;

    return 0;
} 
*/