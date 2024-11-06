#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    queue<int>q;
    int t;cin>>t;
    while (t--)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    for(auto it=q.front();it!=q.back()+1;it++)
    {
        cout<<it<<" ";
    }
    return 0;
}