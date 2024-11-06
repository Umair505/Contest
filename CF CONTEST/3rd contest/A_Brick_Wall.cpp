#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        long long  ans = (m/2) * n;
        cout<<ans<<endl;
    } 
    return 0;
}